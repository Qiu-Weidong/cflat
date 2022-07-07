#ifndef CFLAT_COMPILER_COMPILER_H_
#define CFLAT_COMPILER_COMPILER_H_
#include <string>
#include <vector>
#include <fstream>

#include "antlr4-runtime.h"
#include "CflatLexer.h"
#include "CflatParser.h"
#include "CflatBaseListener.h"
#include "LibraryLoader.h"

class Compiler
{
    std::string version;

public:
    Compiler();

    void build(const std::vector<std::string> & sourceFiles)
    {
        for (const auto &file : sourceFiles)
            compile(file);
    };
    void compile(const std::string &filename);

    std::string getVersion() const { return version; }
    void setVersion(const std::string &version) { this->version = version; }
};

#endif // CFLAT_COMPILER_COMPILER_H_
