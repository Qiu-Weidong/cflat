#ifndef VFLAT_COMPILER_VISITOR_H_
#define VFLAT_COMPILER_VISITOR_H_
#include <memory>
#include "tree/ParseTree.h"
#include "CflatBaseVisitor.h"
#include "TypeTable.h"
#include "Scope.h"

class Visitor : public CflatBaseVisitor
{
private:
    // 類型表
    std::shared_ptr<TypeTable> types;
    // 符號表
    std::shared_ptr<Scope> top_scope;
    // 語法樹
    std::shared_ptr<antlr4::tree::ParseTree> ast;

public:
    Visitor(
        std::shared_ptr<TypeTable> types,
        std::shared_ptr<Scope> top_scope,
        std::shared_ptr<antlr4::tree::ParseTree> ast)
        : types(types), top_scope(top_scope), ast(ast) {}
};

#endif // VFLAT_COMPILER_VISITOR_H_
