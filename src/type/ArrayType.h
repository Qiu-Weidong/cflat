#ifndef CFLAT_TYPE_ARRAYTYPE_H_
#define CFLAT_TYPE_ARRAYTYPE_H_
#include <memory>
#include "PointerType.h"

class ArrayType : public PointerType
{
private:
    void resetName() {
        this->name = base_type->getTypeName() + "[" + (length == undefined ? "" : std::to_string( length )) + "]";
    }
protected:
    int length;
public:
    static const int undefined = -1;

    ArrayType(std::shared_ptr<Type> base_type, int length=undefined, int pointerSize=8)
        : PointerType(pointerSize, base_type), length(length) { if(base_type) resetName(); }

    virtual bool isArray() const override { return true; }
    virtual bool isAllocatedArray() const override
    {
        return length != undefined &&
               (!base_type->isArray() || base_type->isAllocatedArray());
    }

    virtual bool isIncompleteArray() const override
    {
        if (!base_type->isArray())
            return false;
        return !base_type->isAllocatedArray();
    }

    int getLength() const { return length; }
    void setLength(int length) { this->length = length; if(base_type) resetName(); }
    virtual void setBaseType(std::shared_ptr<Type> base_type) { 
        this->base_type = base_type; 
        resetName(); }
    
    virtual int allocSize() const override
    {
        return length == undefined ? getSize() : base_type->allocSize() * length;
    }

    virtual bool operator==(const Type &other) const override
    {
        if (!other.isArray())
            return false;
        // 确保了是array类型，dynamic_cast不会失败
        const PointerType &otherType = dynamic_cast<const PointerType &>(other);
        return (*base_type) == *otherType.getBaseType();
    }

    virtual bool isCompatible(const Type &other) const override
    {
        if (!other.isArray())
            return false;

        const PointerType &otherType = dynamic_cast<const PointerType &>(other);
        if (otherType.getBaseType()->isVoid())
            return true;
        else
            return base_type->isCompatible(*otherType.getBaseType()) && base_type->getSize() == otherType.getBaseType()->getSize();
    }

    virtual bool isCastableTo(const Type &target) const override
    {
        return target.isPointer() || target.isArray();
    }

    friend std::ostream & operator<<(std::ostream & os, const ArrayType & array) {
        os << "{ Array Type" << array.name << " -> " << *(array.base_type) << " }";
        return os;
    }
};

#endif // CFLAT_TYPE_ARRAYTYPE_H_
