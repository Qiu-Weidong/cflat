#include "Compiler.h"
#include "TypeResolver.h"

void Compiler::compile(const std::string &filename)
{
    std::fstream is(filename, std::ios_base::in);

    if (!is.is_open())
    {
        std::cout << "can't open file " << filename << std::endl;
        return;
    }

    antlr4::ANTLRInputStream stream(is);
    CflatLexer lexer(&stream);
    antlr4::CommonTokenStream tokens(&lexer);
    CflatParser parser(&tokens);

    // antlr4::tree::ParseTree *tree = parser.compilationUnit();
    ast = std::make_shared<antlr4::tree::ParseTree>(parser.compilationUnit());
    std::cout << ast->toStringTree(&parser) << std::endl;

    // 每次编译一个文件都要重置类型表，
    types.resetTable();
    // TypeResolver type_resolver(types);
    TypeResolver(types).resolve(ast);


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
    scope_stack.push(top_scope);
}

void Compiler::semanticAnalyze()
{

}

