#ifndef CFLAT_TYPE_ARRAYTYPE_H_
#define CFLAT_TYPE_ARRAYTYPE_H_
#include <memory>
#include "Type.h"


class ArrayType : public Type {
protected:  
    std::shared_ptr<Type> baseType;
    int length;
    int pointerSize;
    static const int undefined = -1;

public:
    ArrayType(Type * baseType, int pointerSize) : baseType(baseType), pointerSize(pointerSize), length(undefined) {}
    ArrayType(Type * baseType, int length, int pointerSize) 
        : baseType(baseType), length(length), pointerSize(pointerSize) {}
    
    virtual bool isArray() const override { return true; }
    virtual bool isAllocatedArray() const override {
        return length != undefined && 
            (!baseType->isArray() || baseType->isAllocatedArray());
    }

    virtual bool isIncompleteArray() const override {
        if(! baseType->isArray()) return false;
        return ! baseType->isAllocatedArray();
    }

    virtual std::shared_ptr<Type> getBaseType() const override { return baseType; }
    int getLength() const { return length; }
    virtual int getSize() const override { return pointerSize; }
    virtual int allocSize() const override {
        return length == undefined ? getSize() : baseType->allocSize() * length;
    }
    /*virtual int alignment() const override { return baseType->alignment(); }*/
    virtual bool operator==(const Type & other) const override {
        if(! other.isPointer() && !other.isArray()) return false;
        return (*baseType) == *other.getBaseType();
    }

    virtual bool isCompatible(const Type & other) const override {
        if(!other.isPointer() && !other.isArray()) return false;
        else if(other.getBaseType()->isVoid()) return true;
        else
        return baseType->isCompatible(*other.getBaseType())
            && baseType->getSize() == other.getBaseType()->getSize(); 
    }

    virtual bool isCastableTo(const Type & target ) const override {
        return target.isPointer() || target.isArray();
    }
    
};

#endif // CFLAT_TYPE_ARRAYTYPE_H_
