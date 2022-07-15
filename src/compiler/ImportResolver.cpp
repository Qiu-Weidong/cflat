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
// params: 'void' | fixedParams vararg?;
// return std::pair<std::shared_ptr<Type>, bool>
antlrcpp::Any ImportResolver:: visitParam(CflatParser::ParamContext *ctx) {
    return ctx->type()->accept(this);
}
antlrcpp::Any ImportResolver:: visitParams(CflatParser::ParamsContext *ctx) {
    bool vararg = ctx->vararg() != nullptr;
    Type::TypeList params;
    if(ctx->fixedParams()) {
        params = ctx->fixedParams()->accept(this).as<Type::TypeList>();
    }
    return antlrcpp::Any(std::make_pair(params, vararg));
}
antlrcpp::Any ImportResolver:: visitFixedParams(CflatParser::FixedParamsContext *ctx) {
    Type::TypeList params;
    for(auto param : ctx->param()) {
        auto p = param->accept(this).as<Type::TypePointer>();
        params.push_back(p);
    }
    return antlrcpp::Any(params);
}

// 未消除左遞歸版本
antlrcpp::Any ImportResolver::visitPointerType(CflatParser::PointerTypeContext *ctx)
{
    typedef std::shared_ptr<Type> TypePointer;
    TypePointer base_type = ctx->type()->accept(this).as<TypePointer>();
    TypePointer pointer = std::make_shared<PointerType>(8, base_type);
    if (!types.isTypeDefined(pointer->getTypeName()))
    {
        types.defineType(pointer->getTypeName(), pointer);
    }
    return types.getType(pointer->getTypeName());
}
antlrcpp::Any ImportResolver::visitArrayType(CflatParser::ArrayTypeContext *ctx)
{
    typedef std::shared_ptr<Type> TypePointer;
    TypePointer base_type = ctx->type()->accept(this).as<TypePointer>();
    int length = ctx->integer() ? std::stoi(ctx->integer()->getText()) : ArrayType::undefined;
    TypePointer array = std::make_shared<ArrayType>(base_type, length);
    if (!types.isTypeDefined(array->getTypeName()))
    {
        types.defineType(array->getTypeName(), array);
    }
    return types.getType(array->getTypeName());
}
antlrcpp::Any ImportResolver::visitFunctionType(CflatParser::FunctionTypeContext *ctx)
{
    typedef std::shared_ptr<Type> TypePointer;
    TypePointer retType = ctx->type()->accept(this).as<TypePointer>();
    typedef std::pair<std::vector<std::shared_ptr<Type>>, bool> ReturnType;
    ReturnType pair = ctx->paramTypeRefs()->accept(this).as<ReturnType>();
    TypePointer function = std::make_shared<FunctionType>(retType, pair.first, pair.second);
    if (!types.isTypeDefined(function->getTypeName()))
    {
        types.defineType(function->getTypeName(), function);
    }
    return types.getType(function->getTypeName());
}

antlrcpp::Any ImportResolver::visitConstType(CflatParser::ConstTypeContext *ctx)
{
    return ctx->type()->accept(this);
}

antlrcpp::Any ImportResolver::visitStructDeclaration(CflatParser::StructDeclarationContext *ctx) {
    std::string name = ctx->name()->accept(this).as<std::string>();
    Type::TypeDict members; 
    if(!types.isTypeDefined(name)) { types.defineType(name, std::make_shared<StructType>(name, members)); } // 插入一個空的struct
    else if(!types.getType(name)->isStruct()) { std::cerr << name << " is not a struct." << std::endl; }
    return defaultResult();
}
antlrcpp::Any ImportResolver::visitUnionDeclaration(CflatParser::UnionDeclarationContext *ctx) {
    std::string name = ctx->name()->accept(this).as<std::string>();
    Type::TypeDict members; 
    if(!types.isTypeDefined(name)) { types.defineType(name, std::make_shared<UnionType>(name, members)); } // 插入一個空的union
    else if(!types.getType(name)->isUnion()) { std::cerr << name << " is not a union." << std::endl; }
    return defaultResult();
}
antlrcpp::Any ImportResolver::visitFunctionDeclaration(CflatParser::FunctionDeclarationContext *ctx) {
    std::string name = ctx->name()->accept(this).as<std::string>();
    
    auto retType = ctx->type()->accept(this).as<Type::TypePointer>();
    std::pair<Type::TypeList, bool> pair;
    if(ctx->paramTypeRefs()) {  
        pair = ctx->paramTypeRefs()->accept(this).as<std::pair<Type::TypeList, bool>>();
    }
    else if(ctx->params()) {
        pair = ctx->params()->accept(this).as<std::pair<Type::TypeList, bool>>();
    }
    else { assert(false); }
    Type::TypePointer func = std::make_shared<FunctionType>(retType, pair.first, pair.second);
    // 檢查該函數是否在類型表中
    if(!types.isTypeDefined(func->getTypeName())) {
        types.defineType(func->getTypeName(), func);
    }


    if(top_scope.isEntityDefined(name)) {
        auto f = top_scope.getEntity(name);
        if(!f->isFunction()) { std::cerr << name << " is not a function." << std::endl; }
        // 檢查函數簽名是否匹配
        if(*(f->getType()) != *func ) { std::cerr << "function " << name << " conflict." << std::endl; } 
        return defaultResult();
    }
    // 將該函數插入符號表中
    return defaultResult();

}
antlrcpp::Any ImportResolver::visitVariableDeclaration(CflatParser::VariableDeclarationContext *) { return defaultResult(); }
