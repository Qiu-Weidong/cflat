#ifndef CFLAT_TYPE_TYPETABLE_H_
#define CFLAT_TYPE_TYPETABLE_H_
#include <string>
#include <map>
#include "IntegerType.h"
#include "FloatType.h"
#include "VoidType.h"

class TypeTable
{
private:
    std::map<std::string, std::shared_ptr<Type>> table;

public:
    TypeTable()
    {
        resetTable();
    }

    void resetTable()
    {
        // 添加基础类型 `char` `unsigned char` 等。
        table.insert(std::make_pair("void", new VoidType()));

        table.insert(std::make_pair("char", new IntegerType(1, true)));
        table.insert(std::make_pair("unsigned char", new IntegerType(1, false)));
        table.insert(std::make_pair("short", new IntegerType(2, true)));
        table.insert(std::make_pair("unsigned short", new IntegerType(2, false)));
        table.insert(std::make_pair("int", new IntegerType(4, true)));
        table.insert(std::make_pair("unsigned int", new IntegerType(4, false)));
        table.insert(std::make_pair("long", new IntegerType(4, true)));
        table.insert(std::make_pair("unsigned long", new IntegerType(4, false)));
        table.insert(std::make_pair("long long", new IntegerType(8, true)));
        table.insert(std::make_pair("unsigned long long", new IntegerType(8, false)));

        table.insert(std::make_pair("float", new FloatType(4)));
        table.insert(std::make_pair("double", new FloatType(8)));
    }


    bool isTypeDefined(const std::string &name) const { return table.find(name) != table.end(); }
    void defineType(const std::string &name, Type *type) { table.insert(std::make_pair(name, type)); }
    void undefineType(const std::string &name) { table.erase(name); } // warning 内存泄漏
};

#endif // CFLAT_TYPE_TYPETABLE_H_

/* 为保证名称主键相同，删除所有空格
 * void                         ->  VoidType *
 * char, int, short ...         ->  IntegerType *
 * float, double                ->  FloatType *
 * int[], point[][], float[]    ->  ArrayType *
 * int*, int**, float*, float**, int(int*,point*)*, point* -> PointerType *
 * point, car, sheet            ->  StructType *, UnionType *, UserType *
 */