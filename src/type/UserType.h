#ifndef CFLAT_TYPE_USERTYPE_H_
#define CFLAT_TYPE_USERTYPE_H_
#include <string>
#include "Type.h"

class UserType : public Type
{
protected:
    std::shared_ptr<Type> real_type;

public:
    UserType(std::shared_ptr<Type> real_type) : real_type(real_type) {}

    std::shared_ptr<Type> getRealType() const { return real_type; }
    void setRealType(std::shared_ptr<Type> real_type) { this->real_type = real_type; }

    virtual int getSize() const override { return real_type->getSize(); }
    virtual int allocSize() const override { return real_type->allocSize(); }

    virtual bool isVoid() const override { return real_type->isVoid(); }
    virtual bool isInteger() const override { return real_type->isInteger(); }
    virtual bool isFloat() const override { return real_type->isFloat(); }
    virtual bool isPointer() const override { return real_type->isPointer(); }
    virtual bool isArray() const override { return real_type->isArray(); }
    virtual bool isStruct() const override { return real_type->isStruct(); }
    virtual bool isUnion() const override { return real_type->isUnion(); }
    virtual bool isUserType() const override { return true; }
    virtual bool isFunction() const override { return real_type->isFunction(); }

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

    virtual bool operator==(const Type &other) { return (*real_type) == other; }

    friend std::ostream & operator<<(std::ostream & os, const UserType & type) { 
        os << "{ User Type -> " << *(type.real_type) << "}" ; return os; }
};
#endif // CFLAT_TYPE_USERTYPE_H_
