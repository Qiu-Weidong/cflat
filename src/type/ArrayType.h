#ifndef CFLAT_TYPE_ARRAYTYPE_H_
#define CFLAT_TYPE_ARRAYTYPE_H_
#include <memory>
#include "PointerType.h"

class ArrayType : public PointerType
{
protected:
    int length;

    static const int undefined = -1;

public:
    ArrayType(std::shared_ptr<Type> baseType, int pointerSize) : PointerType(pointerSize, baseType), length(undefined) {}
    ArrayType(std::shared_ptr<Type> baseType, int length, int pointerSize)
        : PointerType(pointerSize, baseType), length(length) {}

    virtual bool isArray() const override { return true; }
    virtual bool isAllocatedArray() const override
    {
        return length != undefined &&
               (!baseType->isArray() || baseType->isAllocatedArray());
    }

    virtual bool isIncompleteArray() const override
    {
        if (!baseType->isArray())
            return false;
        return !baseType->isAllocatedArray();
    }

    int getLength() const { return length; }
    void setLength(int length) { this->length = length; }
    
    virtual int allocSize() const override
    {
        return length == undefined ? getSize() : baseType->allocSize() * length;
    }

    virtual bool operator==(const Type &other) const override
    {
        if (!other.isArray())
            return false;
        // 确保了是array类型，dynamic_cast不会失败
        const PointerType &otherType = dynamic_cast<const PointerType &>(other);
        return (*baseType) == *otherType.getBaseType();
    }

    virtual bool isCompatible(const Type &other) const override
    {
        if (!other.isArray())
            return false;

        const PointerType &otherType = dynamic_cast<const PointerType &>(other);
        if (otherType.getBaseType()->isVoid())
            return true;
        else
            return baseType->isCompatible(*otherType.getBaseType()) && baseType->getSize() == otherType.getBaseType()->getSize();
    }

    virtual bool isCastableTo(const Type &target) const override
    {
        return target.isPointer() || target.isArray();
    }
};

#endif // CFLAT_TYPE_ARRAYTYPE_H_
