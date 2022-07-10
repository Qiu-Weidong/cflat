#ifndef CFLAT_TYPE_COMPOSITETYPE_H_
#define CFLAT_TYPE_COMPOSITETYPE_H_
#include <string>
#include <map>
#include "Type.h"

// 这个类没什么用
class CompositeType : public Type
{
protected:
    std::map<std::string, std::shared_ptr<Type>> members;

public:
    CompositeType(const std::map<std::string, std::shared_ptr<Type>> &members)
        : members(members) {}
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

        return true;
    }

    std::map<std::string, std::shared_ptr<Type>> getMembers() const { return members; }
    std::shared_ptr<Type> getMemberType(const std::string & name) { 
        auto it = members.find(name);
        if(it == members.end()) return std::shared_ptr<Type>(nullptr);
        else return it->second;
    }
    void setMembers(const std::map<std::string, std::shared_ptr<Type>> & members) { this->members = members; }
    void insertMember(const std::string & name, std::shared_ptr<Type> type) { members.insert(std::make_pair(name, type)); }
};

#endif // CFLAT_TYPE_COMPOSITETYPE_H_
