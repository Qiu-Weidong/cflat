#ifndef CFLAT_TYPE_TYPE_H_
#define CFLAT_TYPE_TYPE_H_

class Type {
    static const int sizeUnknown = -1;

public:
    virtual int size() const = 0;
    virtual bool isSameType(const Type & other) const = 0;
    
    // bool operator==(const Type & other) const { 
    //     return isSameType(other);
    // }

    int allocSize() const { return size(); }
    int alignment() const { return allocSize(); }

    virtual bool isVoid() const  { return false; }
    virtual bool isInt() const  { return false; }
    virtual bool isInteger() const { return false; }
    virtual bool isSigned() const { return false; }
    virtual bool isPointer() const { return false; }
    virtual bool isArray() const { return false; }
    virtual bool isStruct() const { return false; }
    virtual bool isUnion() const { return false; }
    virtual bool isUserType() const { return false; }
    virtual bool isFunction() const { return false; }

    virtual bool isAllocatedArray() const { return false; }
    virtual bool isIncompleteArray() const { return false; }
    virtual bool isScalar() const { return false; }
    virtual bool isCallable() const { return false; }

    virtual bool isCompatible(const Type & other) const = 0;
    virtual bool isCastbleTo(const Type & target) const = 0;

    Type * baseType() {
        return this; // Todo
    }




};


#endif // CFLAT_TYPE_TYPE_H_

