#ifndef CFLAT_ENTITY_FUNCTION_H_
#define CFLAT_ENTITY_FUNCTION_H_
#include "Entity.h"
#include "Parameter.h"
#include "Scope.h"
#include <memory>
#include <vector>

class Function : public Entity {
protected:
  std::vector<std::shared_ptr<Parameter>> parameters;
  std::shared_ptr<Scope> scope;

  // ir
public:
  std::vector<std::shared_ptr<Parameter>> getParameters() const {
    return parameters;
  }
  std::shared_ptr<Scope> getScope() const { return scope; }

  virtual bool isFunction() const override { return true; }
};

#endif // CFLAT_ENTITY_FUNCTION_H_
