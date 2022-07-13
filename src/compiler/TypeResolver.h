#ifndef CFLAT_COMPILER_TYPERESOLVER_H_
#define CFLAT_COMPILER_TYPERESOLVER_H_
#include "Resolver.h"
#include "TypeTable.h"
#include "tree/ParseTree.h"
#include <memory>

class TypeResolver : public Resolver {
public:
  TypeResolver(std::shared_ptr<TypeTable> types,
               std::shared_ptr<Scope> top_scope,
               std::shared_ptr<antlr4::tree::ParseTree> ast)
      : Resolver(types, top_scope, ast) {}
  void resolve();
};

#endif // CFLAT_COMPILER_TYPERESOLVER_H_
