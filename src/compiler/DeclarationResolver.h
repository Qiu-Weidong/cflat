#ifndef CFLAT_COMPILER_DECLARATIONRESOLVER_H_
#define CFLAT_COMPILER_DECLARATIONRESOLVER_H_
#include "CflatBaseVisitor.h"


// 对头文件进行处理。主要识别 函数原型声明、extern变量声明、typedef类型声明、struct和union定义。
class DeclarationResolver : public CflatBaseVisitor {
    
}; 

#endif // CFLAT_COMPILER_DECLARATIONRESOLVER_H_

