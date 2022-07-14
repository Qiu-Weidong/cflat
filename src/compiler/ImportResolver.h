#ifndef CFLAT_COMPILER_IMPORTRESOLVER_H_
#define CFLAT_COMPILER_IMPORTRESOLVER_H_
#include "Resolver.h"

// 对头文件进行处理。主要识别 函数原型声明、extern变量声明、typedef类型声明、struct和union定义。
// 讀入頭文件，並解析成語法樹保存在loaded_libraries中
class ImportResolver : public Resolver
{
    // 頭文件的搜索路徑，可以通過-I指定
    std::vector<std::string> load_paths;

    std::set<std::string> loaded_libraries;

public:
    ImportResolver(TypeTable &types,
                   Scope &top_scope,
                   CflatParser &parser) : Resolver(types, top_scope, parser) {}

    std::vector<std::string> getLoadPaths() const { return load_paths; }
    void setLoadPaths(const std::vector<std::string> &load_paths) { this->load_paths = load_paths; }
    void addLoadPath(const std::string &path) { load_paths.push_back(path); }

    virtual antlrcpp::Any visitImportStmt(CflatParser::ImportStmtContext *ctx) override;
    virtual antlrcpp::Any visitLibid(CflatParser::LibidContext *ctx) override;

    virtual antlrcpp::Any visitName(CflatParser::NameContext *ctx) override;



    // 下面全部是類型定義
    virtual antlrcpp::Any visitTypeDefinition(CflatParser::TypeDefinitionContext *ctx) override ;

    virtual antlrcpp::Any visitBasicVoidType(CflatParser::BasicVoidTypeContext *ctx) override ;
    virtual antlrcpp::Any visitBasicSignedCharType(CflatParser::BasicSignedCharTypeContext *) override;
    virtual antlrcpp::Any visitBasicSignedShortType(CflatParser::BasicSignedShortTypeContext *) override;
    virtual antlrcpp::Any visitBasicSignedIntType(CflatParser::BasicSignedIntTypeContext *) override;
    virtual antlrcpp::Any visitBasicSignedLongType(CflatParser::BasicSignedLongTypeContext *) override;
    virtual antlrcpp::Any visitBasicUnsignedCharType(CflatParser::BasicUnsignedCharTypeContext *) override;
    virtual antlrcpp::Any visitBasicUnsignedShortType(CflatParser::BasicUnsignedShortTypeContext *) override;
    virtual antlrcpp::Any visitBasicUnsignedIntType(CflatParser::BasicUnsignedIntTypeContext *) override;
    virtual antlrcpp::Any visitBasicUnsignedLongType(CflatParser::BasicUnsignedLongTypeContext *) override;
    virtual antlrcpp::Any visitBasicFloatType(CflatParser::BasicFloatTypeContext *) override;
    virtual antlrcpp::Any visitBasicDoubleType(CflatParser::BasicDoubleTypeContext *) override;
    virtual antlrcpp::Any visitStructType(CflatParser::StructTypeContext *) override;
    virtual antlrcpp::Any visitUnionType(CflatParser::UnionTypeContext *) override;
    virtual antlrcpp::Any visitUserType(CflatParser::UserTypeContext *) override;
    virtual antlrcpp::Any visitPointerType(CflatParser::PointerTypeContext *) override;
    virtual antlrcpp::Any visitArrayType(CflatParser::ArrayTypeContext *) override;
    virtual antlrcpp::Any visitFunctionType(CflatParser::FunctionTypeContext *) override;

    virtual antlrcpp::Any visitParamTypeRefs(CflatParser::ParamTypeRefsContext *ctx) override;

    // virtual antlrcpp::Any visitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *ctx) override;

    // typeRefBase

};

#endif // CFLAT_COMPILER_IMPORTRESOLVER_H_
