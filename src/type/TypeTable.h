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
        table.clear();

        // 添加基础类型 `char` `unsigned char` 等。
        std::shared_ptr<Type> type = std::make_shared<VoidType>("void");
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<IntegerType>("char", 1, true);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<IntegerType>("unsigned char", 1, false);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<IntegerType>("short", 2, true);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<IntegerType>("unsigned short", 2, false);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<IntegerType>("int", 4, true);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<IntegerType>("unsigned int", 4, false);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<IntegerType>("long", 4, true);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<IntegerType>("unsigned long", 4, false);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<IntegerType>("long long", 8, true);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<IntegerType>("unsigned long long", 8, false);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<FloatType>("float", 4);
        table.insert(std::make_pair(type->getTypeName(), type));
        type = std::make_shared<FloatType>("double", 8);
        table.insert(std::make_pair(type->getTypeName(), type));
    }

    bool isTypeDefined(const std::string &name) const { return table.find(name) != table.end(); }
    std::shared_ptr<Type> getType(const std::string &name) const
    {
        auto ret = table.find(name);
        if(ret == table.end()) return std::shared_ptr<Type>(nullptr);
        else return table.find(name)->second;
    }
    bool defineType(const std::string &name, std::shared_ptr<Type> type) { return table.insert(std::make_pair(name, type)).second; }
    bool defineTypeForce(const std::string &name, std::shared_ptr<Type> type) { return table.insert_or_assign(name, type).second; }
    void undefineType(const std::string &name) { table.erase(name); } // warning 内存泄漏

    std::vector<std::shared_ptr<Type> > getAllTypes() const {
        std::vector<std::shared_ptr<Type> > ret;
        for(auto it=table.begin(); it!=table.end(); it++) { ret.push_back(it->second); }
        return ret;
    }
};

#endif // CFLAT_TYPE_TYPETABLE_H_

/* 为保证名称主键相同，删除所有空格
 * void                         ->  VoidType *
 * char, int, short ...         ->  IntegerType *
 * float, double                ->  FloatType *
 * int[], point[][], float[]    ->  ArrayType *
 * int*, int**, float*, float**, int(int*,point*)*, point* -> PointerType *
 * point, car, sheet            ->  StructType *, UnionType *, UserType *
 * int(int,int,...)                 -> FUnctionType
 */