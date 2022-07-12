#ifndef CFLAT_TYPE_INTEGERTYPE_H_
#define CFLAT_TYPE_INTEGERTYPE_H_
#include <string>
#include "Type.h"

class IntegerType : public Type
{
protected:
    int size;
    bool is_signed;

public:
    IntegerType(const std::string &name="int", int size=4, bool is_signed=true)
        : size(size), is_signed(is_signed) { this->name = name; }
    virtual bool isInteger() const override { return true; }
    virtual bool isSigned() const override { return is_signed; }
    virtual bool isScalar() const override { return true; }

    long long minValue() const
    {
        return is_signed ? -(1ll << (size * 8 - 1)) : 0;
    }

    long long maxValue() const
    {
        return is_signed ? (1ll << (size * 8 - 1)) - 1 : (1ll << (size * 8)) - 1;
    }

    bool isInDomain(long long x)
    {
        return minValue() <= x && x <= maxValue();
    }

    virtual int getSize() const override { return size; }

    virtual bool isCompatible(const Type &other) const override
    {
        return (other.isInteger() && size <= other.getSize());
    }
    virtual bool isCastableTo(const Type &target) const override
    {
        return (target.isInteger() || target.isPointer() || target.isFloat());
    }

    virtual bool operator==(const Type &other) const override
    {
        if (!other.isInteger())
            return false;
        const IntegerType &otherInteger = dynamic_cast<const IntegerType &>(other);
        return this->size == otherInteger.size &&
               this->is_signed == otherInteger.is_signed;
    }

    friend std::ostream & operator<<(std::ostream &os, const IntegerType & integer) {
        os << "{ Integer Type " << integer.name << " }";
        return os;
    }
};

#endif // CFLAT_TYPE_INTEGERTYPE_H_
