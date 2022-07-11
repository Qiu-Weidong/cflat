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
    bool is_private;   // 是否私有，如果变量或函数有static修饰，即为私有
    bool is_defined;   // 是否定义
    // 类型, 变量才有类型, 将相同函数签名的函数视为同一类型。
    std::shared_ptr<Type> type;
    int n_refered; // 引用次数

public:
    Entity(const std::string &name, std::shared_ptr<Type> type, bool priv=false, bool defined=false)
        : name(name), is_private(priv), is_defined(defined), n_refered(0), type(type) {}

    std::string getName() const { return name; }
    virtual std::string symbolString() const { return getName(); }
    std::shared_ptr<Type> getType() const { return type; }
    bool isDefined() const { return is_defined; }
    bool isPrivate() const { return is_private; }
    bool isRefered() const { return n_refered > 0; }

    void refer() { n_refered++; }
    void setName(const std::string &name) { this->name = name; }
    void setPrivate(bool is_private) { this->is_private = is_private; }
    void setDefined(bool is_defined) { this->is_defined = is_defined; }
    void setType(std::shared_ptr<Type> type) { this->type = type; }

    virtual bool isVariable() const { return false; }
    virtual bool isParameter() const { return false; }
    virtual bool isFunction() const { return false; }

    // 如果有需要的話，可以添加accept函數和EntityVisitor類
};

#endif // CFLAT_ENTITY_ENTITY_H_
