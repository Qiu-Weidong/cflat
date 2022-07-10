#ifndef CFLAT_TYPE_POINTERTYPE_H_
#define CFLAT_TYPE_POINTERTYPE_H_
#include "Type.h"

class PointerType : public Type
{
protected:
    int size;
    std::shared_ptr<Type> baseType;

public:
    PointerType(int size, std::shared_ptr<Type> baseType) : size(size), baseType(baseType) {}

    virtual int getSize() const override { return size; }
    virtual bool operator==(const Type &other) const override
    {
        if (!other.isPointer())
            return false;
        const PointerType & otherType = dynamic_cast<const PointerType &>(other);
        return (*baseType) == *otherType.getBaseType();
    }
    virtual bool isPointer() const override { return true; }
    virtual bool isScalar() const override { return true; }
    virtual bool isCallable() const override { return baseType->isFunction(); }

    std::shared_ptr<Type> getBaseType() const  { return baseType; }
    void setBaseType(std::shared_ptr<Type> baseType) { this->baseType = baseType; }

    virtual bool isCompatible(const Type &other) const override
    {
        if (!other.isPointer())
            return false;
        const PointerType & otherType = dynamic_cast<const PointerType &>(other);
        if (baseType->isVoid() || otherType.getBaseType()->isVoid())
            return true;
        
        return baseType->isCompatible(*otherType.getBaseType());
    }

    virtual bool isCastableTo(const Type &other) const override
    {
        return other.isPointer() || other.isInteger();
    }
};
#endif // CFLAT_TYPE_POINTERTYPE_H_
