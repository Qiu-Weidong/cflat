#ifndef VFLAT_COMPILER_VISITOR_H_
#define VFLAT_COMPILER_VISITOR_H_
#include "CflatBaseVisitor.h"
#include "Scope.h"
#include "TypeTable.h"
#include "tree/ParseTree.h"
#include <memory>

class Resolver : public CflatBaseVisitor {
protected:
  // 類型表
  std::shared_ptr<TypeTable> types;
  // 最外層符號表
  std::shared_ptr<Scope> top_scope;
  // 當前符號表
  std::shared_ptr<Scope> current_scope;
  // 語法樹
  std::shared_ptr<antlr4::tree::ParseTree> ast;

public:
  Resolver(std::shared_ptr<TypeTable> types, std::shared_ptr<Scope> top_scope,
           std::shared_ptr<antlr4::tree::ParseTree> ast)
      : types(types), top_scope(top_scope), current_scope(top_scope), ast(ast) {
  }

  virtual void resolve() { ast->accept(this); }
};

#endif // VFLAT_COMPILER_VISITOR_H_
