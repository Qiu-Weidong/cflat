#ifndef CFLAT_ENTITY_SCOPE_H_
#define CFLAT_ENTITY_SCOPE_H_
#include <memory>
#include <vector>
#include <map>
#include "Entity.h"

// 变量和函数的符号表
class Scope {
private:
    std::shared_ptr<Scope> parent;
    std::vector<std::shared_ptr<Scope> > children;

    std::map<std::string, std::shared_ptr<Entity> > entities;
public:
    Scope(std::shared_ptr<Scope> parent) : parent(parent) {}

    bool isGlobalScope() const { return !parent; }

    // std::shared_ptr<Scope> getGlobalScope() const { return parent ? parent->getGlobalScope() : std::shared_ptr<Scope>(nullptr); }
    std::shared_ptr<Scope> getParent() const { return parent; }
    void setParent(std::shared_ptr<Scope> parent) { this->parent = parent; }
    std::vector<std::shared_ptr<Scope> > getChildren() const { return children; }
    void addChild(std::shared_ptr<Scope> child) { children.push_back(child); }

    std::shared_ptr<Entity> get(const std::string & name) const {
        auto it = entities.find(name);
        if(it != entities.end()) return it->second;
        else if(parent) return parent->get(name);
        else return std::shared_ptr<Entity>(nullptr);
    }
    bool insertEntity(const std::string &name, std::shared_ptr<Entity> entity) { return entities.insert(std::make_pair(name, entity)).second; }
    bool insertOrAssignEntity(const std::string &name, std::shared_ptr<Entity> entity) { return entities.insert_or_assign(name, entity).second; }


};
#endif // CFLAT_ENTITY_SCOPE_H_
