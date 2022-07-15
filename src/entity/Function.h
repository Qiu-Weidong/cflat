#ifndef CFLAT_ENTITY_FUNCTION_H_
#define CFLAT_ENTITY_FUNCTION_H_
#include <vector>
#include <memory>
#include "Entity.h"
#include "Parameter.h"
#include "Scope.h"

class Function : public Entity
{
protected:
    std::vector<std::shared_ptr<Parameter>  > parameters;
    std::shared_ptr<Scope> scope;

    // ir
public:
    std::vector<std::shared_ptr<Parameter>> getParameters() const { return parameters; }
    std::shared_ptr<Scope> getScope() const { return scope; }

    void setParameters(const std::vector<std::shared_ptr<Parameter>> & parameters) { this->parameters = parameters; }
    void setScope(std::shared_ptr<Scope> scope) { this->scope = scope; }  

    virtual bool isFunction() const override { return true; }

    Function(const std::string &name, std::shared_ptr<Type> type, std::shared_ptr<Scope> topScope, bool priv=false, bool defined=false) 
        : Entity(name, type, priv, defined), scope(std::make_shared<Scope>(topScope)) { topScope->addChild(scope); }
};

#endif // CFLAT_ENTITY_FUNCTION_H_
