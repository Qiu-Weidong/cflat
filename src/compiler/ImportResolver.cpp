#include "ImportResolver.h"
#include "CflatLexer.h"
#include "UserType.h"
#include "FunctionType.h"
#include "ArrayType.h"

antlrcpp::Any ImportResolver::visitImportStmt(CflatParser::ImportStmtContext *ctx)
{
    std::string libid = ctx->libid()->accept(this).as<std::string>();

    auto it = loaded_libraries.find(libid);
    if (it != loaded_libraries.end())
    {
        std::cerr << "lib exist: " << libid << std::endl;
        return defaultResult();
    }

    std::fstream is;
    // 打开并解析头文件
    for (const std::string &path : load_paths)
    {
        is.open(path + "/" + libid, std::ios_base::in);
        if (is.is_open())
            break;
    }
    if (!is.is_open())
    {
        std::cerr << "fail to open file: " << libid << std::endl;
        return antlrcpp::Any(std::shared_ptr<CflatParser>(nullptr));
    }

    using antlr4::ANTLRInputStream;
    using antlr4::CommonTokenStream;
    ANTLRInputStream stream(is);
    CflatLexer lexer(&stream);
    CommonTokenStream tokens(&lexer);
    CflatParser importParser(&tokens);

    

    if (!loaded_libraries.insert(libid).second)
    {
        std::cerr << "insert libid failed: " << libid << std::endl;
        return defaultResult();
    }
    importParser.declarationFile()->accept(this);
    return defaultResult();
}

antlrcpp::Any ImportResolver::visitLibid(CflatParser::LibidContext *ctx)
{
    std::vector<CflatParser::NameContext *> names = ctx->name();
    std::string libpath;
    for (auto name : names)
    {
        libpath += name->accept(this).as<std::string>() + '/';
    }
    libpath.pop_back();
    libpath += ".hb";
    return antlrcpp::Any(libpath);
}

antlrcpp::Any ImportResolver::visitName(CflatParser::NameContext *ctx)
{
    return antlrcpp::Any(ctx->Identifier()->getText());
}

// 下面全部是類型定義
// return std::shared_ptr<Type>, 但實際是std::shared_ptr<UserType>
antlrcpp::Any ImportResolver::visitTypeDef(CflatParser::TypeDefContext *ctx)
{
    std::string type_name = ctx->Identifier()->getText();
    if (types.isTypeDefined(type_name))
    {
        std::cerr << type_name << " has defined!" << std::endl;
        return antlrcpp::Any(nullptr);
    }

    auto real_type = ctx->typeRef()->accept(this).as<std::shared_ptr<Type>>();
    if (!types.isTypeDefined(real_type->getTypeName()))
    {
        std::cerr << "Unknown type: " << real_type->getTypeName() << "; type name : " << type_name << std::endl;
        std::cerr << ctx->getText() << std::endl;
        return antlrcpp::Any(nullptr);
    }

    std::shared_ptr<Type> user_type = std::make_shared<UserType>(type_name, real_type);
    if (!types.defineType(type_name, user_type))
    {
        std::cerr << "fail to define type: " << type_name << std::endl;
    }

    return antlrcpp::Any(user_type);
}

// return std::shared_ptr<Type>
antlrcpp::Any ImportResolver::visitTypeRef(CflatParser::TypeRefContext *ctx)
{
    std::cout << "typeref: " << ctx->getText() << std::endl;
    auto base_type = ctx->typeRefBase()->accept(this).as<std::shared_ptr<Type>>(); // 一定是有的，且一定是從typetable中取出來的
    assert(base_type);

    for (auto suffix : ctx->typeRefSuffix())
    {
        std::shared_ptr<Type> type = suffix->accept(this).as<std::shared_ptr<Type>>();

        // 先看看是否是函數
        std::shared_ptr<FunctionType> funType = std::shared_ptr<FunctionType>(dynamic_cast<FunctionType *>(type.get()));
        if (funType)
        {
            funType->setReturnType(base_type);
            base_type = funType;
            // 查看funType是否加入類型表
            if (!types.isTypeDefined(funType->getTypeName()))
            {
                types.defineType(funType->getTypeName(), funType);
            }
            continue;
        }

        std::shared_ptr<ArrayType> arrayType = std::shared_ptr<ArrayType>(dynamic_cast<ArrayType *>(type.get()));
        if (arrayType)
        {
            arrayType->setBaseType(base_type);
            base_type = arrayType;
            if (!types.isTypeDefined(arrayType->getTypeName()))
            {
                types.defineType(arrayType->getTypeName(), arrayType);
            }
            continue;
        }
        // 注意，PointType要放在ArrayType後面，因爲ArrayType繼承自PointerType
        std::shared_ptr<PointerType> pointerType = std::shared_ptr<PointerType>(dynamic_cast<PointerType *>(type.get()));
        if (pointerType)
        {
            pointerType->setBaseType(base_type);
            base_type = pointerType;
            if (!types.isTypeDefined(pointerType->getTypeName()))
            {
                types.defineType(pointerType->getTypeName(), pointerType);
            }
            continue;
        }

        std::cerr << "error: unknown typeRefSuffix." << std::endl;
    }
    return antlrcpp::Any(base_type);
}

// typeRefSuffix
antlrcpp::Any ImportResolver::visitArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext *ctx)
{
    int n = -1;
    if (ctx->integer() != nullptr)
    {
        n = std::stoi(ctx->integer()->getText());
    }
    std::shared_ptr<Type> array = std::make_shared<ArrayType>(std::shared_ptr<Type>(nullptr), n, 8); // 暫時未知base_type
    return antlrcpp::Any(array);
}

antlrcpp::Any ImportResolver::visitPointerTypeSuffix(CflatParser::PointerTypeSuffixContext *ctx)
{
    std::shared_ptr<Type> pointer = std::make_shared<PointerType>(8, std::shared_ptr<Type>(nullptr));
    return antlrcpp::Any(pointer);
}

antlrcpp::Any ImportResolver::visitFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext *ctx)
{
    auto p =ctx->paramTypeRefs()->accept(this).as<std::pair<std::vector<std::shared_ptr<Type>>, bool> >();
    std::shared_ptr<Type> fun = std::make_shared<FunctionType>(std::shared_ptr<Type>(nullptr), p.first, p.second); // todo

    return antlrcpp::Any(fun);
}
// return std::pair(std::vector<std::shared_ptr<Type>>, isVarg)
antlrcpp::Any ImportResolver::visitParamTypeRefs(CflatParser::ParamTypeRefsContext *ctx)
{
    bool vararg = ctx->vararg();
    std::vector<std::shared_ptr<Type>> params;
    if(ctx->fixedParamTypeRefs()) { params = ctx->fixedParamTypeRefs()->accept(this).as<std::vector<std::shared_ptr<Type>>>(); }
    return antlrcpp::Any(std::make_pair(params, vararg));
}
// return std::vector<std::shared_ptr<Type>>
antlrcpp::Any ImportResolver::visitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *ctx) 
{
    std::vector<std::shared_ptr<Type> > ret;
    auto typerefs = ctx->typeRef();
    for(auto typeref : typerefs) {
        auto type = typeref->accept(this).as<std::shared_ptr<Type>>(); // return std::shared_ptr<Type>
        ret.push_back(type);
    }
    return antlrcpp::Any(ret);
}

// typeRefBase
antlrcpp::Any ImportResolver::visitVoidTypeBase(CflatParser::VoidTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("void"));
}

antlrcpp::Any ImportResolver::visitCharTypeBase(CflatParser::CharTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("char"));
}

antlrcpp::Any ImportResolver::visitShortTypeBase(CflatParser::ShortTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("short"));
}

antlrcpp::Any ImportResolver::visitIntTypeBase(CflatParser::IntTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("int"));
}

antlrcpp::Any ImportResolver::visitLongTypeBase(CflatParser::LongTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("long"));
}

antlrcpp::Any ImportResolver::visitUnsignedCharTypeBase(CflatParser::UnsignedCharTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("unsigned char"));
}

antlrcpp::Any ImportResolver::visitUnsignedShortTypeBase(CflatParser::UnsignedShortTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("unsigned short"));
}

antlrcpp::Any ImportResolver::visitUnsignedIntTypeBase(CflatParser::UnsignedIntTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("unsigned int"));
}

antlrcpp::Any ImportResolver::visitUnsignedLongTypeBase(CflatParser::UnsignedLongTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("unsigned long"));
}

antlrcpp::Any ImportResolver::visitFloatTypeBase(CflatParser::FloatTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("float"));
}

antlrcpp::Any ImportResolver::visitDoubleTypeBase(CflatParser::DoubleTypeBaseContext *ctx)
{
    return antlrcpp::Any(types.getType("double"));
}

antlrcpp::Any ImportResolver::visitStructTypeBase(CflatParser::StructTypeBaseContext *ctx)
{
    auto struct_name = ctx->Identifier()->getText();
    return antlrcpp::Any(types.getType(struct_name));
}

antlrcpp::Any ImportResolver::visitUnionTypeBase(CflatParser::UnionTypeBaseContext *ctx)
{
    auto union_name = ctx->Identifier()->getText();
    return antlrcpp::Any(types.getType(union_name));
}

antlrcpp::Any ImportResolver::visitUserTypeBase(CflatParser::UserTypeBaseContext *ctx)
{
    auto user_name = ctx->Identifier()->getText();
    return antlrcpp::Any(types.getType(user_name));
}