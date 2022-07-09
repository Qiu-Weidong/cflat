#ifndef CFLAT_TYPE_COMPOSITETYPE_H_
#define CFLAT_TYPE_COMPOSITETYPE_H_
#include <string>
#include <map>
#include "Type.h"

// 这个类没什么用
class CompositeType : public Type
{
protected:
    std::map<std::string, Type *> members;
    // int cachedSize;
    // int cachedAlign;

public:
    CompositeType(const std::map<std::string, Type *> &members)
        : members(members) /*, cachedSize(Type::sizeUnknown), cachedAlign(Type::sizeUnknown)*/ {}
    virtual bool isCompositeType() const override { return true; }

    virtual bool operator==(const Type &other) const override
    {
        if (isStruct() && !other.isStruct())
            return false;
        if (isUnion() && !other.isUnion())
            return false;
        const CompositeType &otherType = dynamic_cast<const CompositeType &>(other);
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

    virtual bool isCompatible(const Type &other) const override
    {
        if (isStruct() && !other.isStruct())
            return false;
        if (isUnion() && !other.isUnion())
            return false;
        return true; // todo
    }
    virtual bool isCastableTo(const Type &target) const override
    {
        if (isStruct() && !target.isStruct())
            return false;
        if (isUnion() && !target.isUnion())
            return false;
        return true; // todo
    }

    virtual int getSize() const override
    {
        int ret = 0;
        if (isStruct())
        {
            for (auto slot = members.begin(); slot != members.end(); slot++)
                ret += (slot->second)->getSize();
        }
        else if (isUnion())
        {
            for (auto slot = members.begin(); slot != members.end(); slot++)
                ret = ret > (slot->second)->getSize() ? ret : (slot->second)->getSize();
        }
        return ret;
    }
};

#endif // CFLAT_TYPE_COMPOSITETYPE_H_
