#ifndef CFLAT_COMPILER_TYPERESOLVER_H_
#define CFLAT_COMPILER_TYPERESOLVER_H_
#include <memory>
#include "CflatBaseVisitor.h"
#include "TypeTable.h"
#include "tree/ParseTree.h"

class TypeResolver : public CflatBaseVisitor
{
private:
    TypeTable & types;
public :
    TypeResolver(TypeTable & types) : types(types) {}
    void resolve(std::shared_ptr<antlr4::tree::ParseTree> ast);
};

#endif // CFLAT_COMPILER_TYPERESOLVER_H_
