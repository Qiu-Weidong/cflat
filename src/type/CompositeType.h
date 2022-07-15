#ifndef CFLAT_TYPE_COMPOSITETYPE_H_
#define CFLAT_TYPE_COMPOSITETYPE_H_
#include <string>
#include <map>
#include "Type.h"


class CompositeType : public Type
{
protected:
    TypeDict members;

public:
    CompositeType(const std::string &name, const TypeDict &members)
        : members(members), Type(name) { }
    virtual bool isCompositeType() const override { return true; }

    virtual bool operator==(const Type &other) const override
    {
        if(! isCompositeType()) return false;
        const CompositeType &otherType = dynamic_cast<const CompositeType &>(other);
        if (members.size() != otherType.members.size())
            return false;
        auto it1 = members.begin();
        auto it2 = otherType.members.begin();

        while(it1 != members.end() && it2 != otherType.members.end()) {
            if(it1->first != it2->first || *(it1->second) != *(it2->second)) return false;
            it1++, it2++;
        }

        return this->name == otherType.name;
    }

    TypeDict getMembers() const { return members; }
    TypePointer getMemberType(const std::string & name) { 
        auto it = members.find(name);
        if(it == members.end()) return TypePointer(nullptr);
        else return it->second;
    }
    void setMembers(const TypeDict & members) { this->members = members; }
    bool insertMember(const std::string & name, TypePointer type) { return members.insert(std::make_pair(name, type)).second; }
    bool insertOrAssignMember(const std::string &name, TypePointer type) { return members.insert_or_assign(name, type).second; }

    virtual std::string toString() const override {
        std::string ret = "{ Composite Type " + name + " -> members: ";
        for(auto it=members.begin(); it != members.end(); it++) {
            ret +=  (it->first + " -> " + it->second->toString() + ", ");
        }
        ret += "}";
        return ret;
    }
};

#endif // CFLAT_TYPE_COMPOSITETYPE_H_
