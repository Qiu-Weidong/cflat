#ifndef CFLAT_TYPE_VOIDTYPE_H_
#define CFLAT_TYPE_VOIDTYPE_H_
#include "Type.h"

class VoidType : public Type
{
protected:

public:
    VoidType(const std::string &name="void") { this->name = name; }

    virtual bool isVoid() const override { return true; }
    virtual int getSize() const override { return 1; }

    virtual bool operator==(const Type &other) const override
    {
        return other.isVoid();
    }

    virtual bool isCompatible(const Type &other) const override
    {
        return other.isVoid();
    }

    virtual bool isCastableTo(const Type &other) const override
    {
        return other.isVoid();
    }

    virtual std::string toString() const override {
        return "{ Void Type " + name + "}";
    }
};

#endif // CFLAT_TYPE_VOIDTYPE_H_
