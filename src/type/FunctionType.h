#ifndef CFLAT_TYPE_FUNCTIONTYPE_H_
#define CFLAT_TYPE_FUNCTIONTYPE_H_
#include "Type.h"
#include <string>
#include <vector>

class FunctionType : public Type {
private:
  void resetName() {
    this->name = (returnType ? returnType->getTypeName() : "") + "(";
    for (const auto param : paramTypes) {
      this->name += param->getTypeName() + ",";
    }
    if (*(this->name.rbegin()) == ',') {
      this->name.pop_back();
    } // 刪除末尾多餘的逗號
    if (vararg)
      this->name += "...";
    this->name += ")";
  }

protected:
  std::shared_ptr<Type> returnType;
  std::vector<std::shared_ptr<Type>> paramTypes;
  bool vararg;

public:
  FunctionType(std::shared_ptr<Type> ret,
               const std::vector<std::shared_ptr<Type>> &paramTypes,
               bool vararg = false)
      : returnType(ret), paramTypes(paramTypes), vararg(vararg) {
    resetName();
  }
  virtual bool isFunction() const override { return true; }
  virtual bool isCallable() const override { return true; }

  virtual bool operator==(const Type &other) const override {
    if (!other.isFunction())
      return false;
    const FunctionType &fun = dynamic_cast<const FunctionType &>(other);
    if (fun.paramTypes.size() != paramTypes.size())
      return false;
    for (int i = 0; i < paramTypes.size(); i++) {
      if (*(paramTypes[i]) != *(fun.paramTypes[i]))
        return false;
    }
    return (*returnType) == *(fun.returnType);
  }

  virtual bool isCompatible(const Type &other) const override {
    if (!other.isFunction())
      return false;
    const FunctionType &fun = dynamic_cast<const FunctionType &>(other);
    if (fun.paramTypes.size() != paramTypes.size() ||
        !fun.returnType->isCompatible(*returnType))
      return false;
    for (int i = 0; i < paramTypes.size(); i++) {
      if (!paramTypes[i]->isCompatible(*fun.paramTypes[i]))
        return false;
    }
    return true;
  }
  virtual bool isCastableTo(const Type &target) const override {
    return target.isFunction();
  }

  virtual int getSize() const override { return 1; }
  std::shared_ptr<Type> getReturnType() const { return returnType; }
  std::vector<std::shared_ptr<Type>> getParamTypes() const {
    return paramTypes;
  }
  bool isVararg() const { return vararg; }

  void setReturnType(std::shared_ptr<Type> returnType) {
    this->returnType = returnType;
    resetName();
  }
  void setParamTypes(const std::vector<std::shared_ptr<Type>> &paramTypes) {
    this->paramTypes = paramTypes;
    resetName();
  }
  void pushParamType(std::shared_ptr<Type> paramType) {
    paramTypes.push_back(paramType);
    resetName();
  }
  void setVararg(bool vararg) {
    this->vararg = vararg;
    resetName();
  }

  friend std::ostream &operator<<(std::ostream &os, const FunctionType &func) {
    os << "{ Function Type " << func.name << " -> return : " << *func.returnType
       << ", params : ";
    for (auto param : func.paramTypes) {
      os << *param << ", ";
    }
    os << "}";
    return os;
  }
};
#endif // CFLAT_TYPE_FUNCTIONTYPE_H_
