#ifndef CFLAT_TYPE_USERTYPE_H_
#define CFLAT_TYPE_USERTYPE_H_
#include <string>
#include "Type.h"


class UserType : public Type {
protected:
    // std::string name;
    std::shared_ptr<Type> realType;
public:
    UserType(/* const std::string & name, */ std::shared_ptr<Type> realType) :/* name(name),*/ realType(realType) {}

    std::shared_ptr<Type> getRealType() const { return realType; }

    virtual int getSize() const override { return realType->getSize(); }
    virtual int allocSize() const override { return realType->allocSize(); }
    /*virtual int alignment() const override { return realType->alignment(); }*/

    virtual bool isVoid() const override { return realType->isVoid(); }
    virtual bool isInteger() const override { return realType->isInteger(); }
    virtual bool isFloat() const override { return realType->isFloat(); }
    virtual bool isPointer() const override { return realType->isPointer(); }
    virtual bool isArray() const override { return realType->isArray(); }
    virtual bool isStruct() const override { return realType->isStruct(); }
    virtual bool isUnion() const override { return realType->isUnion(); }
    virtual bool isUserType() const override { return true; }
    virtual bool isFunction() const override { return realType->isFunction(); }

    virtual bool isAllocatedArray() const override { return realType->isAllocatedArray(); }
    virtual bool isIncompleteArray() const override { return realType->isIncompleteArray(); }
    virtual bool isScalar() const override { return realType->isScalar(); } // scalar 在 C 语言中是整数类型、指针以及枚举类型的总称
    virtual bool isCallable() const override { return realType->isCallable(); }

    virtual bool isCompatible(const Type & other ) const override {
        return realType->isCompatible(other);
    }
    virtual bool isCastableTo(const Type & target) const override {
        return realType->isCastableTo(target);
    }
    virtual std::shared_ptr<Type> getBaseType() const override { return realType->getBaseType(); }
    virtual bool operator==(const Type & other) { return (*realType) == other; }
};
#endif // CFLAT_TYPE_USERTYPE_H_

