#include <fstream>
#include "antlr4-runtime.h"
#include "CflatLexer.h"
#include "CflatParser.h"


int main(int argc, const char ** argv) {
    // if(argc <= 1)
    std::fstream is(argv[1], std::ios_base::in);

    if(!is.is_open()) { std::cout << "fuck!!!" << std::endl; return 0; }

    antlr4::ANTLRInputStream stream(is);
    CflatLexer lexer(&stream);
    antlr4::CommonTokenStream tokens(&lexer);
    CflatParser parser(&tokens);

    antlr4::tree::ParseTree * tree = parser.compilationUnit();
    std::cout << tree->toStringTree(&parser);

    return 0;

}

