#ifndef CFLAT_TYPE_UNIONTYPE_H_
#define CFLAT_TYPE_UNIONTYPE_H_
#include <string>
#include <map>
#include "Type.h"

class UnionType : public Type
{
protected:
    std::map<std::string, std::shared_ptr<Type>> members;

public:
    UnionType(const std::map<std::string, std::shared_ptr<Type>> &members) : members(members) {}
    virtual bool isCompositeType() const override { return true; }
    virtual bool isUnion() const override { return true; }
    virtual bool operator==(const Type &other) const override
    {
        if (!other.isUnion())
            return false;
        const UnionType &otherType = dynamic_cast<const UnionType &>(other);
        if (members.size() != otherType.members.size())
            return false;
        auto it1 = members.begin();
        while (it1 != members.end())
        {
            auto it2 = otherType.members.find(it1->first);
            if (it2 == otherType.members.end())
                return false;
            else if (*(it1->second) != *(it2->second))
                return false;
            it1++;
        }
        return true;
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
