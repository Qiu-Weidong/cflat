#include <fstream>
#include "antlr4-runtime.h"
#include "CflatLexer.h"
#include "CflatParser.h"
#include "CflatBaseListener.h"
#include "LibraryLoader.h"
// #include "CflatBaseVisitor.h"


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

    // 遍历语法树 listener
    // antlr4::tree::ParseTreeWalker walker;
    // CflatBaseListener listener;
    // walker.walk(&listener, tree);
    
    // 遍历语法树 visitor
    LibraryLoader visitor;
    visitor.addLoadPath("./import");
    visitor.visit(tree);



    // semantic分析
    // IR生成
    return 0;

}
