#ifndef CFLAT_CPMPILER_LIDLOADER_H_
#define CFLAT_CPMPILER_LIDLOADER_H_
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "antlr4-runtime.h"
#include "CflatLexer.h"
#include "CflatParser.h"
// #include "Visitor.h"


class LibraryLoader
{
protected:
    // 搜索路径，可以通过-I指定
    std::vector<std::string> loadPaths;
    // 正在加载的头文件

    // 已经加载的头文件
    // std::map<std::string, Declarations> loadedLibraries;

    std::string libPath(const std::string &libid) const
    {
        std::string ret;
        for (char c : libid)
        {
            ret.push_back(c == '.' ? '/' : c);
        }
        return ret;
    }

public:
    // LibraryLoader(const std::vector<std::string> &loadPaths = std::vector<std::string>(1, ".")) : loadPaths(loadPaths) {}

    // std::vector<std::string> getLoadPath() const { return loadPaths; }
    // void setLoadPath(const std::vector<std::string> &loadPaths) { this->loadPaths = loadPaths; }
    // void addLoadPath(const std::string &loadPath) { loadPaths.push_back(loadPath); }

    // Declarations loadLibrary(const std::string &libid)
    // {
    //     std::cout << "loadingLibrary: " << libid << std::endl;
    //     auto lib = loadedLibraries.find(libid);
    //     if (lib != loadedLibraries.end())
    //     {
    //         std::cout << "library " << libid << "has already loaded..." << std::endl;
    //         return lib->second;
    //     }

    //     // 加载libid
    //     // 获取头文件路径

    //     std::fstream is;
    //     // 打开并解析头文件
    //     for (const std::string &path : loadPaths)
    //     {
    //         is.open(path + "/" + libPath(libid) + ".hb", std::ios_base::in);
    //         if (is.is_open())
    //             break;
    //     }
    //     if (!is.is_open())
    //     {
    //         std::cerr << "fail to open file: " << libid << std::endl;
    //         return Declarations();
    //     }

    //     antlr4::ANTLRInputStream stream(is);
    //     CflatLexer lexer(&stream);
    //     antlr4::CommonTokenStream tokens(&lexer);
    //     CflatParser parser(&tokens);
    //     antlr4::tree::ParseTree *tree = parser.declarationFile();

    //     tree->accept(this);
    //     loadedLibraries.insert(std::make_pair(libid, Declarations()));

    //     std::cout << libid << "load success!" << std::endl;
    //     return Declarations();
    // }

    // virtual antlrcpp::Any visitImportStmt(CflatParser::ImportStmtContext *ctx) override
    // {
    //     auto lib = ctx->libid()->getText();
    //     std::cout << "visitImportStmt: " << lib << std::endl;
    //     // for (auto lib : libs)
    //     // {
    //     //     auto libid = lib->Identifier()->getText();
    //     //     loadLibrary(libid);
    //     // }
    //     loadLibrary(lib);
    //     return visitChildren(ctx);
    // }
};

#endif // CFLAT_CPMPILER_LIDLOADER_H_
