#include "Compiler.h"

void Compiler::compile(const std::string &filename)
{
    std::fstream is(filename, std::ios_base::in);

    if (!is.is_open())
    {
        std::cout << "fuck!!!" << std::endl;
        return;
    }

    antlr4::ANTLRInputStream stream(is);
    CflatLexer lexer(&stream);
    antlr4::CommonTokenStream tokens(&lexer);
    CflatParser parser(&tokens);

    antlr4::tree::ParseTree *tree = parser.compilationUnit();
    std::cout << tree->toStringTree(&parser) << std::endl;

    // 遍历语法树 listener
    // antlr4::tree::ParseTreeWalker walker;
    // CflatBaseListener listener;
    // walker.walk(&listener, tree);

    // 遍历语法树 visitor
    // LibraryLoader visitor;
    // visitor.addLoadPath("./import");
    // visitor.visit(tree);

    // semantic分析
    // IR生成
};

Compiler::Compiler()
{
    this->version = "v1.0.0";
}

