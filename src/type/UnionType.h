#ifndef CFLAT_TYPE_UNIONTYPE_H_
#define CFLAT_TYPE_UNIONTYPE_H_
#include <string>
#include <map>
#include "CompositeType.h"

class UnionType : public CompositeType
{
protected:
    std::map<std::string, std::shared_ptr<Type>> members;

public:
    UnionType(const std::map<std::string, std::shared_ptr<Type>> &members) : CompositeType(members) {}
    virtual bool isCompositeType() const override { return true; }
    virtual bool isUnion() const override { return true; }
    virtual bool operator==(const Type &other) const override
    {
        if (!other.isUnion())
            return false;
        return CompositeType::operator==(other);
    }
    virtual int getSize() const override
    {
        int ret = 0;
        for (auto slot = members.begin(); slot != members.end(); slot++)
            ret = ret > (slot->second)->getSize() ? ret : (slot->second)->getSize();
        return ret;
    }

    virtual bool isCompatible(const Type &other) const override
    {
        if (!other.isUnion())
            return false;
        return true; // todo
    }
    virtual bool isCastableTo(const Type &target) const override
    {
        if (!target.isUnion())
            return false;
        return true; // todo
    }


};

#endif // CFLAT_TYPE_UNIONTYPE_H_
