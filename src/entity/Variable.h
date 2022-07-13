#ifndef CFLAT_ENTITY_VARIABLE_H_
#define CFLAT_ENTITY_VARIABLE_H_
#include "Entity.h"

class Variable : public Entity {
protected:
  bool isConstant;    // 是否常量
  bool isInitialized; //是否初始化
                      // value
public:
  Variable(const std::string &name, std::shared_ptr<Type> type,
           bool priv = false, bool defined = false, bool isConst = false,
           bool initialized = false)
      : Entity(name, type, priv, defined), isInitialized(initialized),
        isConstant(isConst) {}

  bool isConstant() const { return isConstant; }
  bool isInitialized() const { return isInitialized; }

  void setConstant(bool isConstant) { this->isConstant = isConstant; }
  void setInitialized(bool isInitialized) {
    this->isInitialized = isInitialized;
  }

  virtual bool isVariable() const override { return true; }
};

#endif // CFLAT_ENTITY_VARIABLE_H_
