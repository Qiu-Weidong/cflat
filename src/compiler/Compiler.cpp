#include "Compiler.h"
#include "ImportResolver.h"
#include "TypeResolver.h"

void Compiler::compile(const std::string &filename)
{
    std::ifstream is(filename, std::ios_base::in);
    if(! is.is_open()) { std::cerr << "failed to open file: " << filename << std::endl; return; }
    
    using antlr4::ANTLRFileStream;
    using antlr4::ANTLRInputStream;
    using antlr4::CommonTokenStream;
    
    ANTLRInputStream stream(is);
    CflatLexer lexer(&stream);
    CommonTokenStream tokens(&lexer);
    CflatParser parser(&tokens);




    // 每次编译一个文件都要重置类型表，
    types.resetTable();
    ImportResolver resolver(types, top_scope, parser);
    resolver.addLoadPath("./import");
    resolver.resolve();

    // auto imports = resolver.getLibraries();

    // std::cout << "imports size: " << imports.size() << std::endl;

    // DeclarationResolver declare_resolver(types, top_scope, parser, imports);
    // declare_resolver.resolve();

    // std::cout << "declare resolve done..." << std::endl;
    // for(const auto type : types->getAllTypes()) { std::cout << *(type) << std::endl; }


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

void Compiler::semanticAnalyze()
{

}

