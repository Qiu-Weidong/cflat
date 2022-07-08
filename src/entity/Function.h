#ifndef CFLAT_ENTITY_FUNCTION_H_
#define CFLAT_ENTITY_FUNCTION_H_
#include <vector>
#include "Entity.h"
#include "Variable.h"

class Function : public Entity
{
public:
    std::vector<Variable> parameters(); 
};

#endif // CFLAT_ENTITY_FUNCTION_H_
