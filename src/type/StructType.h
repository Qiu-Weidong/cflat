#ifndef CFLAT_TYPE_STRUCTTYPE_H_
#define CFLAT_TYPE_STRUCTTYPE_H_
#include <string>
#include <map>
#include "CompositeType.h"

class StructType : public CompositeType
{
protected:
    std::map<std::string, std::shared_ptr<Type>> members;
    virtual void show(std::ostream &os) const override {
        os << "{ Struct Type " << name <<  " -> members: " ;
        for(auto it=members.begin(); it != members.end(); it++) {
            os <<  it->first << " -> " << *(it->second) << ", ";
        }
        os << "}";
    }
public:
    StructType(const std::string &name, const std::map<std::string, std::shared_ptr<Type>> &members) : CompositeType(name, members) {}
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

};

#endif // CFLAT_TYPE_STRUCTTYPE_H_
