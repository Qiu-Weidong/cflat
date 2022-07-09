#ifndef CFLAT_TYPE_INTEGERTYPE_H_
#define CFLAT_TYPE_INTEGERTYPE_H_
#include <string>
#include "Type.h"

class IntegerType : public Type
{
protected:
    int size;
    bool isSigned;
    std::string name; // 候选项 char int short long unsigned ...

public:
    IntegerType(int size, bool isSigned, const std::string &name)
        : size(size), isSigned(isSigned), name(name) {}
    virtual bool isInteger() const override { return true; }
    virtual bool isSigned() const override { return isSigned; }
    virtual bool isScalar() const override { return true; }

    long long minValue() const
    {
        return isSigned ? -(1ll << (size * 8 - 1)) : 0;
    }

    long long maxValue() const
    {
        return isSigned ? (1ll << (size * 8 - 1)) - 1 : (1ll << (size * 8)) - 1;
    }

    bool isInDomain(long long x)
    {
        return minValue() <= x && x <= maxValue();
    }

    virtual int size() const override { return size; }

    virtual bool isCompatible(const Type &other) const override
    {
        return (other.isInteger() && size <= other.size());
    }
    virtual bool isCastableTo(const Type &target) const override
    {
        return (target.isInteger() || target.isPointer() || target.isFloat());
    }

    std::string toString() { return name; }

    virtual bool operator==(const Type &other) const override
    {
        if (!other.isInteger())
            return false;
        const IntegerType &otherInteger = dynamic_cast<const IntegerType &>(other);
        return this->size == otherInteger.size &&
               this->isSigned == otherInteger.isSigned &&
               this->name == otherInteger.name;
    }
};

#endif // CFLAT_TYPE_INTEGERTYPE_H_
