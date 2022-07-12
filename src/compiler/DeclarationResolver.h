#ifndef CFLAT_COMPILER_DECLARATIONRESOLVER_H_
#define CFLAT_COMPILER_DECLARATIONRESOLVER_H_
#include <cassert>
#include "Resolver.h"
#include "UserType.h"
#include "StructType.h"
#include "ArrayType.h"
#include "FunctionType.h"

class DeclarationResolver : public Resolver
{
    std::vector<std::shared_ptr<antlr4::tree::ParseTree>> headers;

public:
    DeclarationResolver(std::shared_ptr<TypeTable> types,
                        std::shared_ptr<Scope> top_scope,
                        std::shared_ptr<antlr4::tree::ParseTree> ast,
                        const std::vector<std::shared_ptr<antlr4::tree::ParseTree>> &headers)
        : Resolver(types, top_scope, ast), headers(headers) {}
    virtual void resolve() override
    {
        ast->accept(this);
        for (auto header : headers)
        {
            header->accept(this);
        }
    }

    virtual antlrcpp::Any visitDefStruct(CflatParser::DefStructContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDefUnion(CflatParser::DefUnionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitFuncDecl(CflatParser::FuncDeclContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitVarDecl(CflatParser::VarDeclContext *ctx) override
    {
        return visitChildren(ctx);
    }

    // 下面全部是類型定義
    // return std::shared_ptr<Type>
    virtual antlrcpp::Any visitTypeDef(CflatParser::TypeDefContext *ctx) override
    {
        std::string type_name = ctx->Identifier()->getText();
        if(types->isTypeDefined(type_name)) { std::cerr << type_name << " has defined!" << std::endl; return antlrcpp::Any(nullptr); }

        auto real_type = ctx->typeRef()->accept(this).as<std::shared_ptr<Type>>();
        if(!types->isTypeDefined(real_type->getTypeName())) { std::cerr << "Unknown type: " << real_type->getTypeName() << std::endl; return antlrcpp::Any(nullptr); }
        
        std::shared_ptr<Type> user_type = std::make_shared<UserType>(type_name, real_type);
        if (!types->defineType(type_name, user_type))
        {
            std::cerr << "fail to define type: " << type_name << std::endl;
        }
        
        return antlrcpp::Any(user_type);
    }

    // return std::shared_ptr<Type>
    virtual antlrcpp::Any visitTypeRef(CflatParser::TypeRefContext *ctx) override
    {
        auto base_type = ctx->typeRefBase()->accept(this).as<std::shared_ptr<Type>>(); // 一定是有的，且一定是從typetable中取出來的
        assert(base_type);

        for(auto suffix : ctx->typeRefSuffix()) {
            std::shared_ptr<Type> type = suffix->accept(this).as<std::shared_ptr<Type>>();

            // 先看看是否是函數
            std::shared_ptr<FunctionType> funType = std::shared_ptr<FunctionType>(dynamic_cast<FunctionType *>(type.get()));
            if(funType) {
                funType->setReturnType(base_type);
                base_type = funType;
                // 查看funType是否加入類型表
                if(!types->isTypeDefined(funType->getTypeName())) { types->defineType(funType->getTypeName(), funType); }
                continue;
            }

            std::shared_ptr<ArrayType> arrayType = std::shared_ptr<ArrayType>(dynamic_cast<ArrayType *>(type.get()));
            if(arrayType) {
                arrayType->setBaseType(base_type);
                base_type = arrayType;
                if(!types->isTypeDefined(arrayType->getTypeName())) { types->defineType(arrayType->getTypeName(), arrayType); }
                continue;
            }
            // 注意，PointType要放在ArrayType後面，因爲ArrayType繼承自PointerType
            std::shared_ptr<PointerType> pointerType = std::shared_ptr<PointerType>(dynamic_cast<PointerType *>(type.get()));
            if(pointerType) {
                pointerType->setBaseType(base_type);
                base_type = pointerType;
                if(!types->isTypeDefined(pointerType->getTypeName())) { types->defineType(pointerType->getTypeName(), pointerType); }
                continue;
            }

            std::cerr << "error: VisitTypeRef!!!" << std::endl;
        }
        return antlrcpp::Any(base_type);
    }

    // typeRefSuffix
    virtual antlrcpp::Any visitArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext *ctx) override
    {
        int n = -1;
        if(ctx->integer() != nullptr) {
            n = std::stoi(ctx->integer()->getText());
        }
        std::shared_ptr<Type> array = std::make_shared<ArrayType>(std::shared_ptr<Type>(nullptr), n, 8); // 暫時未知base_type
        return antlrcpp::Any(array);
    }

    virtual antlrcpp::Any visitPointerTypeSuffix(CflatParser::PointerTypeSuffixContext *ctx) override
    {
        std::shared_ptr<Type> pointer = std::make_shared<PointerType>(8, std::shared_ptr<Type>(nullptr));
        return antlrcpp::Any(pointer);
    }

    virtual antlrcpp::Any visitFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext *ctx) override
    {
        std::vector<std::shared_ptr<Type>> p;
        std::shared_ptr<Type> fun = std::make_shared<FunctionType>(std::shared_ptr<Type>(nullptr), p); // todo
        return antlrcpp::Any(fun);
    }

    // typeRefBase
    virtual antlrcpp::Any visitVoidTypeBase(CflatParser::VoidTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("void"));
    }

    virtual antlrcpp::Any visitCharTypeBase(CflatParser::CharTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("char"));
    }

    virtual antlrcpp::Any visitShortTypeBase(CflatParser::ShortTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("short"));
    }

    virtual antlrcpp::Any visitIntTypeBase(CflatParser::IntTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("int"));
    }

    virtual antlrcpp::Any visitLongTypeBase(CflatParser::LongTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("long"));
    }

    virtual antlrcpp::Any visitUnsignedCharTypeBase(CflatParser::UnsignedCharTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("unsigned char"));
    }

    virtual antlrcpp::Any visitUnsignedShortTypeBase(CflatParser::UnsignedShortTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("unsigned short"));
    }

    virtual antlrcpp::Any visitUnsignedIntTypeBase(CflatParser::UnsignedIntTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("unsigned int"));
    }

    virtual antlrcpp::Any visitUnsignedLongTypeBase(CflatParser::UnsignedLongTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("unsigned long"));
    }

    virtual antlrcpp::Any visitFloatTypeBase(CflatParser::FloatTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("float"));
    }

    virtual antlrcpp::Any visitDoubleTypeBase(CflatParser::DoubleTypeBaseContext *ctx) override
    {
        return antlrcpp::Any(types->getType("double"));
    }

    virtual antlrcpp::Any visitStructTypeBase(CflatParser::StructTypeBaseContext *ctx) override
    {
        auto struct_name = ctx->Identifier()->getText();
        return antlrcpp::Any(types->getType(struct_name));
    }

    virtual antlrcpp::Any visitUnionTypeBase(CflatParser::UnionTypeBaseContext *ctx) override
    {
        auto union_name = ctx->Identifier()->getText();
        return antlrcpp::Any(types->getType(union_name));
    }

    virtual antlrcpp::Any visitUserTypeBase(CflatParser::UserTypeBaseContext *ctx) override
    {
        auto user_name = ctx->Identifier()->getText();
        return antlrcpp::Any(types->getType(user_name));
    }
};

#endif // CFLAT_COMPILER_DECLARATIONRESOLVER_H_
