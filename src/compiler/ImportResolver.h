#ifndef CFLAT_COMPILER_DECLARATIONRESOLVER_H_
#define CFLAT_COMPILER_DECLARATIONRESOLVER_H_
#include "Resolver.h"

// 对头文件进行处理。主要识别 函数原型声明、extern变量声明、typedef类型声明、struct和union定义。
class ImportResolver : public Resolver
{
    // 頭文件的搜索路徑，可以通過-I指定
    std::vector<std::string> load_paths;

    std::map<std::string, std::shared_ptr<antlr4::tree::ParseTree>> loaded_libraries;
public:
    ImportResolver(std::shared_ptr<TypeTable> types,
                        std::shared_ptr<Scope> top_scope,
                        std::shared_ptr<antlr4::tree::ParseTree> ast) : Resolver(types, top_scope, ast) {}

    std::vector<std::string> getLoadPaths() const { return load_paths; }
    void setLoadPaths(const std::vector<std::string> & load_paths) { this->load_paths = load_paths; }
    void addLoadPath(const std::string & path) { load_paths.push_back(path); }

    // return shared_ptr<ParseTree>
    virtual antlrcpp::Any visitImportStmt(CflatParser::ImportStmtContext *ctx) override
    {
        std::string libid = ctx->libid()->accept(this).as<std::string>();
        std::cout << "Loading " << libid << " ..." << std::endl;
        auto it = loaded_libraries.find(libid);
        if(it != loaded_libraries.end()) {
            return antlrcpp::Any(it->second);
        }
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitLibid(CflatParser::LibidContext *ctx) override
    {
        std::vector<CflatParser::NameContext *> names = ctx->name();
        std::string libpath;
        for(auto name : names) {
            libpath += name->accept(this).as<std::string>() + '/';
        }
        libpath.pop_back();
        libpath += ".hb";
        return antlrcpp::Any(libpath);
    }

    virtual antlrcpp::Any visitName(CflatParser::NameContext *ctx) override
    {
        return antlrcpp::Any(ctx->Identifier()->getText());
    }
};

#endif // CFLAT_COMPILER_DECLARATIONRESOLVER_H_
