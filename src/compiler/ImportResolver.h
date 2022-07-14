#ifndef CFLAT_COMPILER_IMPORTRESOLVER_H_
#define CFLAT_COMPILER_IMPORTRESOLVER_H_
#include "Resolver.h"

// 对头文件进行处理。主要识别 函数原型声明、extern变量声明、typedef类型声明、struct和union定义。
// 讀入頭文件，並解析成語法樹保存在loaded_libraries中
class ImportResolver : public Resolver
{
    // 頭文件的搜索路徑，可以通過-I指定
    std::vector<std::string> load_paths;

    std::map<std::string, std::shared_ptr<CflatParser>> loaded_libraries;

public:
    ImportResolver(std::shared_ptr<TypeTable> types,
                   std::shared_ptr<Scope> top_scope,
                   std::shared_ptr<CflatParser> parser) : Resolver(types, top_scope, parser) {}

    std::vector<std::string> getLoadPaths() const { return load_paths; }
    void setLoadPaths(const std::vector<std::string> &load_paths) { this->load_paths = load_paths; }
    void addLoadPath(const std::string &path) { load_paths.push_back(path); }

    // return shared_ptr<CflatParser>
    virtual antlrcpp::Any visitImportStmt(CflatParser::ImportStmtContext *ctx) override
    {
        std::string libid = ctx->libid()->accept(this).as<std::string>();
        
        auto it = loaded_libraries.find(libid);
        if (it != loaded_libraries.end())
        {
            std::cerr << "lib exist: " << libid << std::endl;
            return antlrcpp::Any(it->second);
        }

        std::shared_ptr< std::fstream > is = std::make_shared<std::fstream>();
        // 打开并解析头文件
        for (const std::string &path : load_paths)
        {
            is->open(path + "/" + libid, std::ios_base::in);
            if (is->is_open())
                break;
        }
        if (!is->is_open())
        {
            std::cerr << "fail to open file: " << libid << std::endl;
            return antlrcpp::Any(std::shared_ptr<CflatParser>(nullptr));
        }

        std::shared_ptr<antlr4::ANTLRInputStream> stream = std::make_shared<antlr4::ANTLRInputStream>(*is);
        std::shared_ptr<CflatLexer> lexer = std::make_shared<CflatLexer>(stream);
        std::shared_ptr<antlr4::CommonTokenStream> tokens = std::make_shared<antlr4::CommonTokenStream>(lexer);
        std::shared_ptr<CflatParser> importParser = std::make_shared<CflatParser>(tokens);

        if(! loaded_libraries.insert_or_assign(libid, importParser).second) { return antlrcpp::Any(importParser); }

        importParser->compilationUnit()->accept(this);
        return antlrcpp::Any(importParser);
    }

    virtual antlrcpp::Any visitLibid(CflatParser::LibidContext *ctx) override
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

    virtual antlrcpp::Any visitName(CflatParser::NameContext *ctx) override
    {
        return antlrcpp::Any(ctx->Identifier()->getText());
    }

    std::vector< std::shared_ptr<CflatParser> > getLibraries() const {
        std::vector<std::shared_ptr<CflatParser>> ret;
        for(const auto library: loaded_libraries) {
            ret.push_back(library.second);
        }
        return ret;
    }
};

#endif // CFLAT_COMPILER_IMPORTRESOLVER_H_
