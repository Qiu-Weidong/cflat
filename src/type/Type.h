#ifndef CFLAT_TYPE_TYPE_H_
#define CFLAT_TYPE_TYPE_H_

// 表示类型的基类
class Type {
    static const int sizeUnknown = -1;

public:
    virtual int size() const = 0;
    virtual bool operator==(const Type & other) const = 0;

    virtual int allocSize() const { return size(); }
    virtual int alignment() const { return allocSize(); }

    virtual bool isVoid() const  { return false; }
    virtual bool isInt() const  { return false; }
    virtual bool isInteger() const { return false; }
    virtual bool isSigned() const { return false; }
    virtual bool isFloat() const { return false; }
    virtual bool isPointer() const { return false; }
    virtual bool isArray() const { return false; }
    virtual bool isStruct() const { return false; }
    virtual bool isUnion() const { return false; }
    virtual bool isUserType() const { return false; }
    virtual bool isFunction() const { return false; }

    virtual bool isAllocatedArray() const { return false; }
    virtual bool isIncompleteArray() const { return false; }
    virtual bool isScalar() const { return false; } // scalar 在 C 语言中是整数类型、指针以及枚举类型的总称
    virtual bool isCallable() const { return false; }

    virtual bool isCompatible(const Type & other) const = 0;
    virtual bool isCastableTo(const Type & target) const = 0;

    virtual Type * getBaseType() const { return nullptr; }




};


#endif // CFLAT_TYPE_TYPE_H_

