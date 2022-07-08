#ifndef CFLAT_TYPE_VOIDTYPE_H_
#define CFLAT_TYPE_VOIDTYPE_H_
#include "Type.h"

class VoidType : Type
{
public:
    virtual bool isVoid() const override { return true; }
    virtual int size() const override { return 1; }

    virtual bool operator==(const Type &other) const override
    {
        return other.isVoid();
    }

    virtual bool isCompatible(const Type &other) const override
    {
        return other.isVoid();
    }

    virtual bool isCastableTo(const Type & other) const override {
        return other.isVoid();
    }
};

#endif // CFLAT_TYPE_VOIDTYPE_H_
