#ifndef CFLAT_ENTITY_VARIABLE_H_
#define CFLAT_ENTITY_VARIABLE_H_
#include "Entity.h"


class Variable : public Entity {
protected:
    bool isConstant; // 是否常量
    bool isInitialized; //是否初始化
    // value
public:
    Variable(bool priv, const std::string & name) : Entity(priv, name) {}

    bool isConstant() const { return isConstant; }
    bool isInitialized() const { return isInitialized; }
    void setConstant(bool isConstant) { this->isConstant = isConstant; }
    void setInitialized(bool isInitialized) { this->isInitialized = isInitialized; }
};

#endif // CFLAT_ENTITY_VARIABLE_H_

