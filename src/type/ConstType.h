#ifndef CFLAT_TYPE_CONSTTYPE_H_
#define CFLAT_TYPE_CONSTTYPE_H_
#include "Type.h"

// todo
class ConstType : public Type {
protected:
    TypePointer real_type;
public:
    ConstType(TypePointer real_type) : real_type(real_type) {
        this->name = "const " + real_type->getTypeName();
    }

    TypePointer getRealType() const { return real_type; }
    void setRealType(TypePointer real_type) { 
        this->real_type = real_type; 
        this->name = "const " + real_type->getTypeName();    
    }

    virtual int getSize() const override { return real_type->getSize(); }
    virtual int allocSize() const override { return real_type->allocSize(); }

    virtual bool isVoid() const override { return real_type->isVoid(); }
    virtual bool isInteger() const override { return real_type->isInteger(); }
    virtual bool isFloat() const override { return real_type->isFloat(); }
    virtual bool isPointer() const override { return real_type->isPointer(); }
    virtual bool isArray() const override { return real_type->isArray(); }
    virtual bool isStruct() const override { return real_type->isStruct(); }
    virtual bool isUnion() const override { return real_type->isUnion(); }
    virtual bool isUserType() const override { return real_type->isUserType(); }
    virtual bool isFunction() const override { return real_type->isFunction(); }
    virtual bool isCompositeType() const override { return real_type->isCompositeType(); }
    virtual bool isConstType() const override { return true; }

    virtual bool isAllocatedArray() const override { return real_type->isAllocatedArray(); }
    virtual bool isIncompleteArray() const override { return real_type->isIncompleteArray(); }
    virtual bool isScalar() const override { return real_type->isScalar(); } // scalar 在 C 语言中是整数类型、指针以及枚举类型的总称
    virtual bool isCallable() const override { return real_type->isCallable(); }

    virtual bool isCompatible(const Type &other) const override
    {
        return real_type->isCompatible(other);
    }
    virtual bool isCastableTo(const Type &target) const override
    {
        return real_type->isCastableTo(target);
    }

    virtual bool operator==(const Type &other) { return real_type->operator==(other); }

    virtual std::string toString() const override {
        return "{ Const Type " + name + " -> " + real_type->toString() + "}";
    }
};

#endif // CFLAT_TYPE_CONSTTYPE_H_

