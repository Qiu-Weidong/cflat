#ifndef CFLAT_TYPE_TYPE_H_
#define CFLAT_TYPE_TYPE_H_
#include <memory>
#include <iostream>

// 表示类型的基类
class Type
{
protected:
    static const int sizeUnknown = -1;
    std::string name;

public:
    virtual std::string getTypeName() const { return name; }
    virtual void setTypeName(const std::string & name) { this->name = name; }

    virtual int getSize() const = 0;
    virtual bool operator==(const Type &other) const { return this->name == other.name; };
    virtual bool operator!=(const Type &other) const { return ! this->operator==(other); }
    virtual int allocSize() const { return getSize(); }

    virtual bool isVoid() const { return false; }
    virtual bool isInteger() const { return false; }
    virtual bool isSigned() const { return false; }
    virtual bool isFloat() const { return false; }
    virtual bool isPointer() const { return false; }
    virtual bool isArray() const { return false; }
    virtual bool isStruct() const { return false; }
    virtual bool isUnion() const { return false; }
    virtual bool isUserType() const { return false; }
    virtual bool isFunction() const { return false; }
    virtual bool isCompositeType() const { return false; }

    virtual bool isAllocatedArray() const { return false; }
    virtual bool isIncompleteArray() const { return false; }
    virtual bool isScalar() const { return false; } // scalar 在 C 语言中是整数类型、指针以及枚举类型的总称
    virtual bool isCallable() const { return false; }

    virtual bool isCompatible(const Type &other) const = 0; // 是否能够隐式转换
    virtual bool isCastableTo(const Type &target) const = 0; // 是否能够强制转换

    // 爲方便調試，增添輸出操作
    friend std::ostream & operator<<(std::ostream & os, const Type & type) { os << "{ Abstract Type }" ; return os; }
};

#endif // CFLAT_TYPE_TYPE_H_
