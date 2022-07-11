#ifndef CFLAT_ENTITY_PARAMETER_H_
#define CFLAT_ENTITY_PARAMETER_H_
#include "Variable.h"

class Parameter : public Variable
{
public:
    Parameter(
        const std::string &name,
        std::shared_ptr<Type> type,
        bool isConst = false)
        : Variable(name, type, false, true, isConst, false) {}
    virtual bool isParameter() const override { return true; }
};
#endif // CFLAT_ENTITY_PARAMETER_H_
