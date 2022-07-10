#ifndef CFLAT_ENTITY_ENTITY_H_
#define CFLAT_ENTITY_ENTITY_H_
#include <string>
#include <memory>
#include "Type.h"

// 表示函数和变量等实体的类
class Entity {
protected: 
    std::string name; // 变量或函数的名称
    bool isPrivate;   // 是否私有，如果变量或函数有static修饰，即为私有
    bool isDefined;   // 是否定义
    // 类型, 变量才有类型, 将相同函数签名的函数视为同一类型。
    std::shared_ptr<Type> type;
    int nRefered;     // 引用次数

public:
    Entity(bool priv, const std::string & name) 
        : name(name), isPrivate(priv), nRefered(0) {}
    
    std::string getName() const { return name; }
    virtual std::string symbolString() const { return getName(); }

    bool isDefined() const { return isDefined; }

    // value

    bool isPrivate() const { return isPrivate; }

    bool isRefered() const { return nRefered > 0; }

    void refer() { nRefered++; }

    void setName(const std::string & name) { this->name = name; }
    void setPrivate(bool isPrivate) { this->isPrivate = isPrivate; }



};

#endif // CFLAT_ENTITY_ENTITY_H_


