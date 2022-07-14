#include "Compiler.h"
#include "ImportResolver.h"
#include "DeclarationResolver.h"
#include "TypeResolver.h"

void Compiler::compile(const std::string &filename)
{
    // std::fstream is(filename, std::ios_base::in);

    // if (!is.is_open())
    // {
    //     std::cout << "can't open file " << filename << std::endl;
    //     return;
    // }

    // antlr4::ANTLRInputStream stream(is);
    // CflatLexer lexer(&stream);
    // antlr4::CommonTokenStream tokens(&lexer);
    // CflatParser parser(&tokens);

    // antlr4::tree::ParseTree *tree = parser.compilationUnit();
    // ast = std::shared_ptr<antlr4::tree::ParseTree>(parser.compilationUnit());
    // std::cout << ast->toStringTree(&parser) << std::endl;

    std::shared_ptr<std::fstream> is = std::make_shared<std::fstream>(filename, std::ios_base::in);
    if(! is->is_open()) { std::cerr << "fail to open file: " << filename << std::endl; return; }
    std::shared_ptr<antlr4::ANTLRInputStream> stream = std::make_shared<antlr4::ANTLRInputStream>(*is);
    std::shared_ptr<CflatLexer> lexer = std::make_shared<CflatLexer>(stream);
    std::shared_ptr<antlr4::CommonTokenStream> tokens = std::make_shared<antlr4::CommonTokenStream>(lexer);
    parser = std::make_shared<CflatParser>(tokens);

    // 每次编译一个文件都要重置类型表，
    types->resetTable();
    // ImportResolver(types, top_scope, ast).resolve();
    ImportResolver resolver(types, top_scope, parser);
    resolver.addLoadPath("./import");
    resolver.resolve();

    auto imports = resolver.getLibraries();

    std::cout << "imports size: " << imports.size() << std::endl;

    DeclarationResolver declare_resolver(types, top_scope, parser, imports);
    declare_resolver.resolve();

    std::cout << "declare resolve done..." << std::endl;
    for(const auto type : types->getAllTypes()) { std::cout << *(type) << std::endl; }


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
    this->top_scope = std::make_shared<Scope>(std::shared_ptr<Scope>(nullptr));
    this->types = std::make_shared<TypeTable>();
}

void Compiler::semanticAnalyze()
{

}

