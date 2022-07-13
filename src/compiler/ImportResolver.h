#ifndef CFLAT_COMPILER_IMPORTRESOLVER_H_
#define CFLAT_COMPILER_IMPORTRESOLVER_H_
#include "Resolver.h"

// 对头文件进行处理。主要识别
// 函数原型声明、extern变量声明、typedef类型声明、struct和union定义。
// 讀入頭文件，並解析成語法樹保存在loaded_libraries中
class ImportResolver : public Resolver {
  // 頭文件的搜索路徑，可以通過-I指定
  std::vector<std::string> load_paths;

  // bug找到了，ParseTree的生命周期由Parser控制，因此需要將parser也添加進來
  std::map<std::string, std::shared_ptr<antlr4::tree::ParseTree>>
      loaded_libraries;

public:
  ImportResolver(std::shared_ptr<TypeTable> types,
                 std::shared_ptr<Scope> top_scope,
                 std::shared_ptr<antlr4::tree::ParseTree> ast)
      : Resolver(types, top_scope, ast) {}

  std::vector<std::string> getLoadPaths() const { return load_paths; }
  void setLoadPaths(const std::vector<std::string> &load_paths) {
    this->load_paths = load_paths;
  }
  void addLoadPath(const std::string &path) { load_paths.push_back(path); }

  // return shared_ptr<ParseTree>
  virtual antlrcpp::Any
  visitImportStmt(CflatParser::ImportStmtContext *ctx) override {
    std::string libid = ctx->libid()->accept(this).as<std::string>();

    auto it = loaded_libraries.find(libid);
    if (it != loaded_libraries.end()) {
      std::cerr << "lib exist: " << libid << std::endl;
      return antlrcpp::Any(it->second);
    }

    std::fstream is;
    // 打开并解析头文件
    for (const std::string &path : load_paths) {
      is.open(path + "/" + libid, std::ios_base::in);
      if (is.is_open())
        break;
    }
    if (!is.is_open()) {
      std::cerr << "fail to open file: " << libid << std::endl;
      return antlrcpp::Any(std::shared_ptr<antlr4::tree::ParseTree>(nullptr));
    }

    antlr4::ANTLRInputStream stream(is);
    CflatLexer lexer(&stream);
    antlr4::CommonTokenStream tokens(&lexer);
    CflatParser parser(&tokens);
    std::shared_ptr<antlr4::tree::ParseTree> tree =
        std::shared_ptr<CflatParser::DeclarationFileContext>(
            parser.declarationFile());

    // 將語法樹添加到load_libraries中
    // if (!loaded_libraries.insert_or_assign(libid, tree).second) {
    //   // std::cerr << "add to libraries fail! " << libid << std::endl;
    //   return antlrcpp::Any(tree);
    // }
    if (loaded_libraries.insert(std::make_pair(libid, tree)).second) {
      return antlrcpp::Any(tree);
    }

    // 繼續使用ImportResolver來解析頭文件中的import語句
    tree->accept(this);

    return antlrcpp::Any(tree);
  }

  virtual antlrcpp::Any visitLibid(CflatParser::LibidContext *ctx) override {
    std::vector<CflatParser::NameContext *> names = ctx->name();
    std::string libpath;
    for (auto name : names) {
      libpath += name->accept(this).as<std::string>() + '/';
    }
    libpath.pop_back();
    libpath += ".hb";
    return antlrcpp::Any(libpath);
  }

  virtual antlrcpp::Any visitName(CflatParser::NameContext *ctx) override {
    return antlrcpp::Any(ctx->Identifier()->getText());
  }

  std::vector<std::shared_ptr<antlr4::tree::ParseTree>> getLibraries() const {
    std::vector<std::shared_ptr<antlr4::tree::ParseTree>> ret;
    for (const auto library : loaded_libraries) {
      std::cout << library.second->toStringTree() << std::endl;
      //   *(library.second);
      ret.push_back(library.second);
    }
    return ret;
  }

  virtual antlrcpp::Any
  visitImportStmts(CflatParser::ImportStmtsContext *ctx) override {
    antlrcpp::Any ret = visitChildren(ctx);
    // 检查loaded_libraries中的數據是否失效
    for (const auto lib : loaded_libraries) {
      // *(lib.second);
      std::cout << lib.second->toStringTree() << std::endl;
    }
    return ret;
  }

  virtual void resolve() override {
    ast->accept(this);
    for (const auto lib : loaded_libraries) {
      // *(lib.second);
      std::cout << lib.second->toStringTree() << std::endl;
    }
  }
};

#endif // CFLAT_COMPILER_IMPORTRESOLVER_H_
