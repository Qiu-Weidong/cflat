#ifndef VFLAT_COMPILER_VISITOR_H_
#define VFLAT_COMPILER_VISITOR_H_
#include <memory>
#include "tree/ParseTree.h"
#include "CflatBaseVisitor.h"
#include "TypeTable.h"
#include "Scope.h"

class Resolver : public CflatBaseVisitor
{
protected:
    // 類型表
    std::shared_ptr<TypeTable> types;
    // 最外層符號表
    std::shared_ptr<Scope> top_scope;
    // 當前符號表
    std::shared_ptr<Scope> current_scope;
    // 語法樹分析器
    std::shared_ptr<CflatParser> parser;

public:
    Resolver(
        std::shared_ptr<TypeTable> types,
        std::shared_ptr<Scope> top_scope,
        std::shared_ptr<CflatParser> parser)
        : types(types), top_scope(top_scope), current_scope(top_scope), parser(parser) {}
    
    virtual void resolve() { parser->compilationUnit()->accept(this); }
};

#endif // VFLAT_COMPILER_VISITOR_H_
