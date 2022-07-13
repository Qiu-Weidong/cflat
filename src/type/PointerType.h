#ifndef CFLAT_TYPE_POINTERTYPE_H_
#define CFLAT_TYPE_POINTERTYPE_H_
#include "Type.h"

class PointerType : public Type {
protected:
  int size;
  std::shared_ptr<Type> base_type;

public:
  PointerType(int size, std::shared_ptr<Type> base_type)
      : size(size), base_type(base_type) {
    if (base_type)
      this->name = base_type->getTypeName() + "*";
  }

  virtual int getSize() const override { return size; }
  virtual bool operator==(const Type &other) const override {
    if (!other.isPointer())
      return false;
    const PointerType &otherType = dynamic_cast<const PointerType &>(other);
    return (*base_type) == *otherType.getBaseType();
  }
  virtual bool isPointer() const override { return true; }
  virtual bool isScalar() const override { return true; }
  virtual bool isCallable() const override { return base_type->isFunction(); }

  std::shared_ptr<Type> getBaseType() const { return base_type; }
  virtual void setBaseType(std::shared_ptr<Type> base_type) {
    this->base_type = base_type;
    this->name = base_type->getTypeName() + "*";
  }

  virtual bool isCompatible(const Type &other) const override {
    if (!other.isPointer())
      return false;
    const PointerType &otherType = dynamic_cast<const PointerType &>(other);
    if (base_type->isVoid() || otherType.getBaseType()->isVoid())
      return true;

    return base_type->isCompatible(*otherType.getBaseType());
  }

  virtual bool isCastableTo(const Type &other) const override {
    return other.isPointer() || other.isInteger();
  }

  friend std::ostream &operator<<(std::ostream &os,
                                  const PointerType &pointer) {
    os << "{ Pointer Type " << pointer.name << " -> " << *(pointer.base_type)
       << " }";
    return os;
  }
};
#endif // CFLAT_TYPE_POINTERTYPE_H_
