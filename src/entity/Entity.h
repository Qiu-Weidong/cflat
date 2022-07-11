#ifndef CFLAT_ENTITY_ENTITY_H_
#define CFLAT_ENTITY_ENTITY_H_
#include <string>
#include <memory>
#include "Type.h"

// 表示函数和变量等实体的类
class Entity
{
protected:
    std::string name; // 变量或函数的名称
    bool isPrivate;   // 是否私有，如果变量或函数有static修饰，即为私有
    bool isDefined;   // 是否定义
    // 类型, 变量才有类型, 将相同函数签名的函数视为同一类型。
    std::shared_ptr<Type> type;
    int nRefered; // 引用次数

public:
    Entity(const std::string &name, std::shared_ptr<Type> type, bool priv=false, bool defined=false)
        : name(name), isPrivate(priv), isDefined(defined), nRefered(0), type(type) {}

    std::string getName() const { return name; }
    virtual std::string symbolString() const { return getName(); }
    std::shared_ptr<Type> getType() const { return type; }
    bool isDefined() const { return isDefined; }
    bool isPrivate() const { return isPrivate; }
    bool isRefered() const { return nRefered > 0; }

    void refer() { nRefered++; }
    void setName(const std::string &name) { this->name = name; }
    void setPrivate(bool isPrivate) { this->isPrivate = isPrivate; }
    void setDefined(bool isDefined) { this->isDefined = isDefined; }
    void setType(std::shared_ptr<Type> type) { this->type = type; }

    virtual bool isVariable() const { return false; }
    virtual bool isParameter() const { return false; }
    virtual bool isFunction() const { return false; }
};

#endif // CFLAT_ENTITY_ENTITY_H_
