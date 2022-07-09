#ifndef CFLAT_TYPE_STRUCTTYPE_H_
#define CFLAT_TYPE_STRUCTTYPE_H_
#include <string>
#include <map>
#include "Type.h"

class StructType : public Type
{
protected:
    std::map<std::string, Type *> members;

public:
    StructType(const std::map<std::string, Type *> &members) : members(members) {}
    virtual bool isCompositeType() const override { return true; }
    virtual bool isStruct() const override { return true; }
    virtual bool operator==(const Type & other) const override {
        if(!other.isStruct()) return false;
        const StructType & otherType = dynamic_cast<const StructType &>(other);
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
            ret += (slot->second)->getSize();

        return ret;
    }

    virtual bool isCompatible(const Type &other) const override
    {
        if (! other.isStruct())
            return false;
        return true; // todo
    }
    virtual bool isCastableTo(const Type &target) const override
    {
        if (!target.isStruct())
            return false;
        return true; // todo
    }

};

#endif // CFLAT_TYPE_STRUCTTYPE_H_
