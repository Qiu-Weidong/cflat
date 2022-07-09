#ifndef CFLAT_TYPE_POINTERTYPE_H_
#define CFLAT_TYPE_POINTERTYPE_H_
#include "Type.h"


class PointerType : public Type {
protected:
    int size;
    Type * baseType;
public:
    PointerType(int size, Type * baseType) : size(size), baseType(baseType) {}

    virtual int getSize() const override { return size; }
    virtual bool operator==(const Type & other) const override {
        if(! other.isPointer()) return false;
        return (*baseType) == *other.getBaseType();
    }
    virtual bool isPointer() const override { return true; }
    virtual bool isScalar() const override { return true; }
    virtual bool isCallable() const override { return baseType->isFunction(); }

    virtual Type * getBaseType() const override { return baseType; }

    virtual bool isCompatible(const Type & other) const override {
        if(! other.isPointer()) return false;
        else if(baseType->isVoid() || other.getBaseType()->isVoid()) return true;
        return baseType->isCompatible(*other.getBaseType());
    }

    virtual bool isCastableTo(const Type & other) const override {
        return other.isPointer() || other.isInteger();
    }
};
#endif // CFLAT_TYPE_POINTERTYPE_H_

