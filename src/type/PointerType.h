#ifndef CFLAT_TYPE_POINTERTYPE_H_
#define CFLAT_TYPE_POINTERTYPE_H_
#include "Type.h"
#include "VoidType.h"

class PointerType : public Type
{
private:
    void resetName() { 
        this->name = (base_type ? base_type->getTypeName() : "unkown") + "*"; }
protected:
    int size;
    std::shared_ptr<Type> base_type;

public:
    PointerType(int size = 8, std::shared_ptr<Type> base_type = std::shared_ptr<Type>(nullptr)) : size(size), base_type(base_type)
    {
        resetName();
    }

    virtual int getSize() const override { return size; }
    virtual bool operator==(const Type &other) const override
    {
        if (!other.isPointer())
            return false;
        const PointerType &otherType = dynamic_cast<const PointerType &>(other);
        return this->name == otherType.name && (*base_type) == *otherType.getBaseType();
    }
    virtual bool isPointer() const override { return true; }
    virtual bool isScalar() const override { return true; }
    virtual bool isCallable() const override { return base_type->isFunction(); }

    std::shared_ptr<Type> getBaseType() const { return base_type; }
    virtual void setBaseType(std::shared_ptr<Type> base_type)
    {
        assert(base_type);
        this->base_type = base_type;
        resetName();
    }

    virtual bool isCompatible(const Type &other) const override
    {
        if (!other.isPointer())
            return false;
        const PointerType &otherType = dynamic_cast<const PointerType &>(other);
        if (base_type->isVoid() || otherType.getBaseType()->isVoid())
            return true;

        return base_type->isCompatible(*otherType.getBaseType());
    }

    virtual bool isCastableTo(const Type &other) const override
    {
        return other.isPointer() || other.isInteger();
    }

    virtual std::string toString() const override {
        return "{ Pointer Type " + name + " -> " + base_type->toString() + " }";
    }
};
#endif // CFLAT_TYPE_POINTERTYPE_H_
