#ifndef CFLAT_TYPE_STRUCTTYPE_H_
#define CFLAT_TYPE_STRUCTTYPE_H_
#include <string>
#include <map>
#include "CompositeType.h"

class StructType : public CompositeType
{
protected:
    std::map<std::string, std::shared_ptr<Type>> members;

public:
    StructType(const std::map<std::string, std::shared_ptr<Type>> &members) : CompositeType(members) {}
    virtual bool isCompositeType() const override { return true; }
    virtual bool isStruct() const override { return true; }
    virtual bool operator==(const Type &other) const override
    {
        if (!other.isStruct())
            return false;
        return CompositeType::operator==(other);
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
        if (!other.isStruct())
            return false;
        const StructType & otherStruct = dynamic_cast<const StructType &>(other);
        if(members.size() != otherStruct.members.size()) return false;
        return true; // todo
    }
    virtual bool isCastableTo(const Type &target) const override
    {
        if (!target.isStruct())
            return false;
        return true; // todo
    }

    friend std::ostream &operator<<(std::ostream &os, const StructType & structType) {
        os << "{ Struct Type -> members: " ;
        for(auto it=structType.members.begin(); it != structType.members.end(); it++) {
            os <<  it->first << " -> " << *(it->second) << ", ";
        }
        os << "}";
        return os;
    }
};

#endif // CFLAT_TYPE_STRUCTTYPE_H_
