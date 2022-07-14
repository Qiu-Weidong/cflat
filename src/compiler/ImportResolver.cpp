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

// typeDefinition: 'typedef' type Identifier ';' ;
// return std::shared_ptr<Type>
antlrcpp::Any ImportResolver::visitTypeDefinition(CflatParser::TypeDefinitionContext *ctx)
{
    std::string type_name = ctx->Identifier()->getText(); // 定義的類型名稱
    if (types.isTypeDefined(type_name))
    {
        std::cerr << type_name << " has been defined!" << std::endl;
        return antlrcpp::Any(types.getType(type_name));
    }

    auto real_type = ctx->type()->accept(this).as<std::shared_ptr<Type>>();

    if (!types.isTypeDefined(real_type->getTypeName()))
    { // 如果realtype還沒有被定義
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
// antlrcpp::Any ImportResolver::visitTypeRef(CflatParser::TypeRefContext *ctx)
// {
//     std::cout << "typeref: " << ctx->getText() << std::endl;
//     auto base_type = ctx->typeRefBase()->accept(this).as<std::shared_ptr<Type>>(); // 一定是有的，且一定是從typetable中取出來的
//     assert(base_type);

//     for (auto suffix : ctx->typeRefSuffix())
//     {
//         std::shared_ptr<Type> type = suffix->accept(this).as<std::shared_ptr<Type>>();

//         // 先看看是否是函數
//         std::shared_ptr<FunctionType> funType = std::shared_ptr<FunctionType>(dynamic_cast<FunctionType *>(type.get()));
//         if (funType)
//         {
//             funType->setReturnType(base_type);
//             base_type = funType;
//             // 查看funType是否加入類型表
//             if (!types.isTypeDefined(funType->getTypeName()))
//             {
//                 types.defineType(funType->getTypeName(), funType);
//             }
//             continue;
//         }

//         std::shared_ptr<ArrayType> arrayType = std::shared_ptr<ArrayType>(dynamic_cast<ArrayType *>(type.get()));
//         if (arrayType)
//         {
//             arrayType->setBaseType(base_type);
//             base_type = arrayType;
//             if (!types.isTypeDefined(arrayType->getTypeName()))
//             {
//                 types.defineType(arrayType->getTypeName(), arrayType);
//             }
//             continue;
//         }
//         // 注意，PointType要放在ArrayType後面，因爲ArrayType繼承自PointerType
//         std::shared_ptr<PointerType> pointerType = std::shared_ptr<PointerType>(dynamic_cast<PointerType *>(type.get()));
//         if (pointerType)
//         {
//             pointerType->setBaseType(base_type);
//             base_type = pointerType;
//             if (!types.isTypeDefined(pointerType->getTypeName()))
//             {
//                 types.defineType(pointerType->getTypeName(), pointerType);
//             }
//             continue;
//         }

//         std::cerr << "error: unknown typeRefSuffix." << std::endl;
//     }
//     return antlrcpp::Any(base_type);
// }

// typeRefSuffix
// antlrcpp::Any ImportResolver::visitArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext *ctx)
// {
//     int n = -1;
//     if (ctx->integer() != nullptr)
//     {
//         n = std::stoi(ctx->integer()->getText());
//     }
//     std::shared_ptr<Type> array = std::make_shared<ArrayType>(std::shared_ptr<Type>(nullptr), n, 8); // 暫時未知base_type
//     return antlrcpp::Any(array);
// }

// antlrcpp::Any ImportResolver::visitPointerTypeSuffix(CflatParser::PointerTypeSuffixContext *ctx)
// {
//     std::shared_ptr<Type> pointer = std::make_shared<PointerType>(8, std::shared_ptr<Type>(nullptr));
//     return antlrcpp::Any(pointer);
// }

// antlrcpp::Any ImportResolver::visitFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext *ctx)
// {
//     auto p =ctx->paramTypeRefs()->accept(this).as<std::pair<std::vector<std::shared_ptr<Type>>, bool> >();
//     std::shared_ptr<Type> fun = std::make_shared<FunctionType>(std::shared_ptr<Type>(nullptr), p.first, p.second); // todo

//     return antlrcpp::Any(fun);
// }
// return std::pair(std::vector<std::shared_ptr<Type>>, isVarg)
antlrcpp::Any ImportResolver::visitParamTypeRefs(CflatParser::ParamTypeRefsContext *ctx)
{
    bool vararg = ctx->vararg();
    std::vector<std::shared_ptr<Type>> params;
    if (ctx->fixedParamTypeRefs())
    {
        params = ctx->fixedParamTypeRefs()->accept(this).as<std::vector<std::shared_ptr<Type>>>();
    }
    return antlrcpp::Any(std::make_pair(params, vararg));
}
// return std::vector<std::shared_ptr<Type>>
// antlrcpp::Any ImportResolver::visitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *ctx)
// {
//     std::vector<std::shared_ptr<Type> > ret;
//     auto typerefs = ctx->typeRef();
//     for(auto typeref : typerefs) {
//         auto type = typeref->accept(this).as<std::shared_ptr<Type>>(); // return std::shared_ptr<Type>
//         ret.push_back(type);
//     }
//     return antlrcpp::Any(ret);
// }

antlrcpp::Any ImportResolver::visitBasicVoidType(CflatParser::BasicVoidTypeContext *ctx) { return antlrcpp::Any(types.getType("void")); }
antlrcpp::Any ImportResolver::visitBasicSignedCharType(CflatParser::BasicSignedCharTypeContext *ctx) { return antlrcpp::Any(types.getType("char")); }
antlrcpp::Any ImportResolver::visitBasicSignedShortType(CflatParser::BasicSignedShortTypeContext *ctx) { return antlrcpp::Any(types.getType("short")); }
antlrcpp::Any ImportResolver::visitBasicSignedIntType(CflatParser::BasicSignedIntTypeContext *ctx) { return antlrcpp::Any(types.getType("int")); }
antlrcpp::Any ImportResolver::visitBasicSignedLongType(CflatParser::BasicSignedLongTypeContext *ctx) { return antlrcpp::Any(types.getType("long")); }
antlrcpp::Any ImportResolver::visitBasicUnsignedCharType(CflatParser::BasicUnsignedCharTypeContext *ctx) { return antlrcpp::Any(types.getType("unsigned char")); }
antlrcpp::Any ImportResolver::visitBasicUnsignedShortType(CflatParser::BasicUnsignedShortTypeContext *ctx) { return antlrcpp::Any(types.getType("unsigned short")); }
antlrcpp::Any ImportResolver::visitBasicUnsignedIntType(CflatParser::BasicUnsignedIntTypeContext *ctx) { return antlrcpp::Any(types.getType("unsigned int")); }
antlrcpp::Any ImportResolver::visitBasicUnsignedLongType(CflatParser::BasicUnsignedLongTypeContext *ctx) { return antlrcpp::Any(types.getType("unsigned long")); }
antlrcpp::Any ImportResolver::visitBasicFloatType(CflatParser::BasicFloatTypeContext *ctx) { return antlrcpp::Any(types.getType("float")); }
antlrcpp::Any ImportResolver::visitBasicDoubleType(CflatParser::BasicDoubleTypeContext *ctx) { return antlrcpp::Any(types.getType("double")); }
antlrcpp::Any ImportResolver::visitStructType(CflatParser::StructTypeContext *ctx) {
    std::string name = ctx->Identifier()->getText();
    if(!types.isTypeDefined(name)) { std::cerr << "struct " << name << " is not defined." << std::endl; return antlrcpp::Any(std::shared_ptr<Type>(nullptr)); }
    auto ret = types.getType(name);
    if(!ret->isStruct()) { std::cerr << name << " is not struct." << std::endl; return antlrcpp::Any(std::shared_ptr<Type>(nullptr)); }
    return antlrcpp::Any(ret);
}
antlrcpp::Any ImportResolver::visitUnionType(CflatParser::UnionTypeContext *ctx) {
    std::string name = ctx->Identifier()->getText();
    if(!types.isTypeDefined(name)) { std::cerr << "union " << name << " is not defined." << std::endl; return antlrcpp::Any(std::shared_ptr<Type>(nullptr)); }
    auto ret = types.getType(name);
    if(!ret->isUnion()) { std::cerr << name << " is not union." << std::endl; return antlrcpp::Any(std::shared_ptr<Type>(nullptr)); }
    return antlrcpp::Any(ret);
}
antlrcpp::Any ImportResolver::visitUserType(CflatParser::UserTypeContext *ctx) {
    std::string name = ctx->Identifier()->getText();
    if(types.isTypeDefined(name)) { std::cerr << name << " is not defined." << std::endl; return antlrcpp::Any(std::shared_ptr<Type>(nullptr)); }
    auto ret = types.getType(name);
    if(!ret->isUserType()) { std::cerr << name << " is not user type." << std::endl; return antlrcpp::Any(std::shared_ptr<Type>(nullptr)); }
    return antlrcpp::Any(ret);
}
antlrcpp::Any ImportResolver::visitPointerType(CflatParser::PointerTypeContext *ctx) {
    auto base_type = ctx->type()->accept(this).as<std::shared_ptr<Type>>();
    std::string name = base_type->getTypeName() + "*";
    if(types.isTypeDefined(name)) { return antlrcpp::Any(types.getType(name)); }
    std::shared_ptr<Type> pointer = std::make_shared<PointerType>(8, base_type);
    if(!types.defineType(pointer->getTypeName(), pointer)) {
        std::cerr << "fail to insert type " << pointer->getTypeName() << std::endl;
    }
    return antlrcpp::Any(pointer);
}
antlrcpp::Any ImportResolver::visitArrayType(CflatParser::ArrayTypeContext *ctx) {
    auto base_type = ctx->type()->accept(this).as<std::shared_ptr<Type>>();
    int length = std::stoi(ctx->integer()->getText());
    std::string name = base_type->getTypeName() + "[" + (length == ArrayType::undefined ? "" : std::to_string(length)) + "]";

    if(types.isTypeDefined(name)) { return antlrcpp::Any(types.getType(name)); }
    std::shared_ptr<Type> array = std::make_shared<ArrayType>(base_type, length);
    if(!types.defineType(array->getTypeName(), array)) {
        std::cerr << "fail to insert type " << array->getTypeName() << std::endl;
    }
    return antlrcpp::Any(array);
}
antlrcpp::Any ImportResolver::visitFunctionType(CflatParser::FunctionTypeContext *ctx) {
    auto returnType = ctx->type()->accept(this).as<std::shared_ptr<Type>>();
    
}
