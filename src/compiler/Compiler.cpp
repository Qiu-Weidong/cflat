#include "Compiler.h"
#include "DeclarationResolver.h"
#include "ImportResolver.h"
#include "TypeResolver.h"

void Compiler::compile(const std::string &filename) {
  std::fstream is(filename, std::ios_base::in);

  if (!is.is_open()) {
    std::cout << "can't open file " << filename << std::endl;
    return;
  }

  antlr4::ANTLRInputStream stream(is);
  CflatLexer lexer(&stream);
  antlr4::CommonTokenStream tokens(&lexer);
  CflatParser parser(&tokens);

  // antlr4::tree::ParseTree *tree = parser.compilationUnit();
  ast = std::shared_ptr<antlr4::tree::ParseTree>(parser.compilationUnit());
  // std::cout << ast->toStringTree(&parser) << std::endl;

  // 每次编译一个文件都要重置类型表，
  types->resetTable();
  // ImportResolver(types, top_scope, ast).resolve();
  ImportResolver resolver(types, top_scope, ast);
  resolver.addLoadPath("./import");
  resolver.resolve();

  auto imports = resolver.getLibraries();

  DeclarationResolver declare_resolver(types, top_scope, ast, imports);
  declare_resolver.resolve();

  for (const auto type : types->getAllTypes()) {
    std::cout << *(type) << std::endl;
  }

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

Compiler::Compiler() {
  this->version = "v1.0.0";
  this->top_scope = std::make_shared<Scope>(std::shared_ptr<Scope>(nullptr));
  this->ast = std::shared_ptr<antlr4::tree::ParseTree>(nullptr);
  this->types = std::make_shared<TypeTable>();
}

void Compiler::semanticAnalyze() {}
