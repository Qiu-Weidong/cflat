#ifndef CFLAT_COMPILER_COMPILER_H_
#define CFLAT_COMPILER_COMPILER_H_
#include <fstream>
#include <string>
#include <vector>

#include "CflatLexer.h"
#include "CflatParser.h"
#include "Scope.h"
#include "TypeTable.h"
#include "antlr4-runtime.h"

class Compiler {
  std::string version;
  // 類型表
  std::shared_ptr<TypeTable> types;
  // 符號表
  std::shared_ptr<Scope> top_scope;
  // 語法樹
  std::shared_ptr<antlr4::tree::ParseTree> ast;

public:
  Compiler();

  void build(const std::vector<std::string> &sourceFiles) {
    for (const auto &file : sourceFiles)
      compile(file);
  };
  void compile(const std::string &filename);
  void semanticAnalyze();

  std::string getVersion() const { return version; }
  void setVersion(const std::string &version) { this->version = version; }
};

#endif // CFLAT_COMPILER_COMPILER_H_
