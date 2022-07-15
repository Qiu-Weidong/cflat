#include "ImportResolver.h"
#include "CflatLexer.h"
#include "UserType.h"
#include "FunctionType.h"
#include "ArrayType.h"
#include "StructType.h"
#include "UnionType.h"

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
antlrcpp::Any ImportResolver::visitBasicStructType(CflatParser::BasicStructTypeContext *ctx)
{
    std::string name = ctx->Identifier()->getText();
    if (!types.isTypeDefined(name))
    {
        std::cerr << "struct " << name << " is not defined." << std::endl;
        return antlrcpp::Any(std::shared_ptr<Type>(nullptr));
    }
    auto ret = types.getType(name);
    if (!ret->isStruct())
    {
        std::cerr << name << " is not struct." << std::endl;
        return antlrcpp::Any(std::shared_ptr<Type>(nullptr));
    }
    // 把
    return antlrcpp::Any(ret);
}
antlrcpp::Any ImportResolver::visitBasicUnionType(CflatParser::BasicUnionTypeContext *ctx)
{
    std::string name = ctx->Identifier()->getText();
    if (!types.isTypeDefined(name))
    {
        std::cerr << "union " << name << " is not defined." << std::endl;
        return antlrcpp::Any(std::shared_ptr<Type>(nullptr));
    }
    auto ret = types.getType(name);
    if (!ret->isUnion())
    {
        std::cerr << name << " is not union." << std::endl;
        return antlrcpp::Any(std::shared_ptr<Type>(nullptr));
    }
    return antlrcpp::Any(ret);
}
antlrcpp::Any ImportResolver::visitBasicUserType(CflatParser::BasicUserTypeContext *ctx)
{
    std::string name = ctx->Identifier()->getText();
    if (!types.isTypeDefined(name))
    {
        std::cerr << name << " is not defined." << std::endl;
        return antlrcpp::Any(std::shared_ptr<Type>(nullptr));
    }
    auto ret = types.getType(name);
    if (!ret->isUserType())
    {
        std::cerr << name << " is not user type." << std::endl;
        return antlrcpp::Any(std::shared_ptr<Type>(nullptr));
    }
    return antlrcpp::Any(ret);
}

antlrcpp::Any ImportResolver::visitPointerTypeSuffix(CflatParser::PointerTypeSuffixContext *ctx)
{
    std::shared_ptr<Type> pointer = std::make_shared<PointerType>();
    return antlrcpp::Any(pointer);
}
antlrcpp::Any ImportResolver::visitArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext *ctx)
{
    int length = ArrayType::undefined;
    if(ctx->integer()) length = std::stoi(ctx->integer()->getText());
    std::shared_ptr<Type> array = std::make_shared<ArrayType>(std::shared_ptr<Type>(nullptr), length);
    return antlrcpp::Any(array);
}
antlrcpp::Any ImportResolver::visitFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext *ctx)
{
    auto returnType = std::shared_ptr<Type>(nullptr);
    auto pair = ctx->paramTypeRefs()->accept(this).as<std::pair<std::vector<std::shared_ptr<Type>>, bool>>();
    std::shared_ptr<Type> function = std::make_shared<FunctionType>(returnType, pair.first, pair.second);
    return antlrcpp::Any(function);
}
// paramTypeRefs: 'void' | fixedParamTypeRefs vararg?;
// return std::pair<std::shared_ptr<Type>, bool>
antlrcpp::Any ImportResolver::visitParamTypeRefs(CflatParser::ParamTypeRefsContext *ctx)
{
    std::vector<std::shared_ptr<Type>> params;
    if (ctx->fixedParamTypeRefs())
    {
        params = ctx->fixedParamTypeRefs()->accept(this).as<std::vector<std::shared_ptr<Type>>>();
    }
    bool vararg = ctx->vararg() != nullptr;
    return antlrcpp::Any(std::make_pair(params, vararg));
}
antlrcpp::Any ImportResolver::visitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *ctx)
{
    std::vector<std::shared_ptr<Type>> params;
    for (auto param : ctx->paramTypeRef())
    {
        auto p = param->accept(this).as<std::shared_ptr<Type>>();
        params.push_back(p);
    }
    return antlrcpp::Any(params);
}
antlrcpp::Any ImportResolver::visitParamTypeRef(CflatParser::ParamTypeRefContext *ctx)
{
    return ctx->type()->accept(this);
}


antlrcpp::Any ImportResolver::visitType(CflatParser::TypeContext *ctx) {
    typedef std::shared_ptr<Type> TypePointer;
    
    TypePointer base_type = ctx->basicType()->accept(this).as<TypePointer>();
    assert(base_type);
    
    for(auto suffix : ctx->typeSuffix()) {
        TypePointer type = suffix->accept(this).as<TypePointer>();
        if(type->isFunction()) {
            auto fun = std::dynamic_pointer_cast<FunctionType>(type);
            fun->setReturnType(base_type);
        }
        else if(type->isArray()) {
            auto array = std::dynamic_pointer_cast<ArrayType>(type);
            array->setBaseType(base_type);
        }
        else if(type->isPointer()) {
            auto pointer = std::dynamic_pointer_cast<PointerType>(type);
            pointer->setBaseType(base_type);
        }
        else { std::cerr << "unkonw suffix" << std::endl;  assert(false); }
        
        base_type = type;
        if(!types.isTypeDefined(base_type->getTypeName())) {
            types.defineType(base_type->getTypeName(), base_type);
        }
    }
    return antlrcpp::Any(base_type);
}

