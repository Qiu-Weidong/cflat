#ifndef CFLAT_TYPE_FLOATTYPE_H_
#define CFLAT_TYPE_FLOATTYPE_H_
#include <string>
#include "Type.h"

class FloatType : public Type
{
protected:
    int size;

public:
    FloatType(int size = 32)
        : size(size) {}
    virtual bool isSigned() const override { return true; }
    virtual bool isFloat() const override { return true; }

    virtual int getSize() const override { return size; }

    virtual bool operator==(const Type &other) const override
    {
        if (!other.isFloat())
            return false;
        const FloatType &otherFloat = dynamic_cast<const FloatType &>(other);
        return this->size == otherFloat.size;
    }

    virtual bool isCompatible(const Type &other) const override
    {
        return other.isFloat() && size <= other.getSize();
    }

    virtual bool isCastableTo(const Type &target) const override
    {
        return target.isFloat() || target.isInteger();
    }

    friend std::ostream & operator<<(std::ostream &os, const FloatType & floatType) {
        os << "{ Float Type }";
        return os;
    }
};

#endif // CFLAT_TYPE_FLOATTYPE_H_