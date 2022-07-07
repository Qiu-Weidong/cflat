# cflat

Node                                        ParseTree
    AST                                     None
    ExprNode                                ExprContext
        AbstractAssignNode                  None
            AssignNode                      None
            OpAssignNode                    None
        AddressNode                         None
        BinaryOpNode                        None
            LogicalAndNode                  None
            LogicalOrNode                   None
        CastNode                            None
        CondExprNode                        None
        FuncallNode                         None
        LHSNode                             能够成为赋值的左值的节点
            ArefNode                        数组表达式（a[i]）
            DereferenceNode                 指针表达式（*ptr）
            MemberNode                      成员表达式（s.memb）
            PtrMemberNode                   成员表达式（ptr->memb）
            VariableNode                    变量表达式
        LiteralNode                         字面量
            IntegerLiteralNode              整数字面量
            StringLiteralNode               字符串字面量
        SizeofExprNode                      计算表达式的 sizeof 的表达式
        SizeofTypeNode                      计算类型的 sizeof 的表达式
        UnaryOpNode                         一元运算表达式（+x、-x、……）
            UnaryArithmeticOpNode           前置的 ++ 和 --
                PrefixOpNode                前置的 ++ 和 --
                SuffixOpNode                后置的 ++ 和 --
    Slot                                    表示结构体成员的节点
    StmtNode                                表示语句的节点
        BlockNode                           程序块（{...}）
        BreakNode                           break 语句
        CaseNode                            case 标签
        ContinueNode                        continue 语句
        DoWhileNode                         do ～ while 语句
        ExprStmtNode                        单独构成语句的表达式
        ForNode                             for 语句
        GotoNode                            goto 语句
        IfNode                              if 语句
        LabelNode                           goto 标签
        ReturnNode                          return 语句
        SwitchNode                          switch 语句
        WhileNode                           while 语句
    TypeDefinition                          类型定义
        CompositeTypeDefinition             结构体或联合体的定义
            StructNode                      结构体的定义
            UnionNode                       联合体的定义
        TypedefNode                         typedef 声明
    TypeNode                                存储类型的节点

class CompilationUnitContext;
class DeclarationFileContext;
class ImportStmtsContext;
class ImportStmtContext;
class NameContext;
class TopDefsContext;
class DefVarsContext;
class DefConstContext;
class DefFuncContext;
class ParamsContext;
class FixedParamsContext;
class ParamContext;
class BlockContext;
class DefVarListContext;
class DefStructContext;
class DefUnionContext;
class MemberListContext;
class SlotContext;
class FuncDeclContext;
class VarDeclContext;
class TypeContext;
class TypeRefContext;
class IntegerContext;
class ParamTypeRefsContext;
class FixedParamTypeRefsContext;
class TypeRefBaseContext;
class TypeDefContext;
class StmtsContext;
class StmtContext;
class LabeledStmtContext;
class IfStmtContext;
class WhileStmtContext;
class DowhileStmtContext;
class ForStmtContext;
class SwitchStmtContext;
class CaseClausesContext;
class CaseClauseContext;
class CasesContext;
class DefaultClauseContext;
class CaseBodyContext;
class GotoStmtContext;
class BreakStmtContext;
class ContinueStmtContext;
class ReturnStmtContext;
class ExprContext;
class ExprListContext;
class ArgumentsContext;
class PrimaryContext;
class LiteralContext; 