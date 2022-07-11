#ifndef CFLAT_ENTITY_FUNCTION_H_
#define CFLAT_ENTITY_FUNCTION_H_
#include <vector>
#include <memory>
#include "Entity.h"
#include "Variable.h"
#include "Scope.h"

class Function : public Entity
{
protected:
    std::vector<Variable> parameters;
    std::shared_ptr<Scope> scope;
public:
    std::vector<Variable> getParameters() const { return parameters; }
    std::shared_ptr<Scope> getScope() const { return scope; }

    virtual bool isFunction() const override { return true; }
};

#endif // CFLAT_ENTITY_FUNCTION_H_
