
// Generated from .\Cflat.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "CflatParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CflatParser.
 */
class  CflatVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CflatParser.
   */
    virtual antlrcpp::Any visitCompilationUnit(CflatParser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationFile(CflatParser::DeclarationFileContext *context) = 0;

    virtual antlrcpp::Any visitImportStmts(CflatParser::ImportStmtsContext *context) = 0;

    virtual antlrcpp::Any visitImportStmt(CflatParser::ImportStmtContext *context) = 0;

    virtual antlrcpp::Any visitLibid(CflatParser::LibidContext *context) = 0;

    virtual antlrcpp::Any visitName(CflatParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitTopDefs(CflatParser::TopDefsContext *context) = 0;

    virtual antlrcpp::Any visitDefVars(CflatParser::DefVarsContext *context) = 0;

    virtual antlrcpp::Any visitDefFunc(CflatParser::DefFuncContext *context) = 0;

    virtual antlrcpp::Any visitParams(CflatParser::ParamsContext *context) = 0;

    virtual antlrcpp::Any visitFixedParams(CflatParser::FixedParamsContext *context) = 0;

    virtual antlrcpp::Any visitParam(CflatParser::ParamContext *context) = 0;

    virtual antlrcpp::Any visitBlock(CflatParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDefVarList(CflatParser::DefVarListContext *context) = 0;

    virtual antlrcpp::Any visitDefStruct(CflatParser::DefStructContext *context) = 0;

    virtual antlrcpp::Any visitDefUnion(CflatParser::DefUnionContext *context) = 0;

    virtual antlrcpp::Any visitMemberList(CflatParser::MemberListContext *context) = 0;

    virtual antlrcpp::Any visitSlot(CflatParser::SlotContext *context) = 0;

    virtual antlrcpp::Any visitFuncDecl(CflatParser::FuncDeclContext *context) = 0;

    virtual antlrcpp::Any visitVarDecl(CflatParser::VarDeclContext *context) = 0;

    virtual antlrcpp::Any visitType(CflatParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeRef(CflatParser::TypeRefContext *context) = 0;

    virtual antlrcpp::Any visitInteger(CflatParser::IntegerContext *context) = 0;

    virtual antlrcpp::Any visitParamTypeRefs(CflatParser::ParamTypeRefsContext *context) = 0;

    virtual antlrcpp::Any visitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *context) = 0;

    virtual antlrcpp::Any visitVoidTypeBase(CflatParser::VoidTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitCharTypeBase(CflatParser::CharTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitShortTypeBase(CflatParser::ShortTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitIntTypeBase(CflatParser::IntTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitLongTypeBase(CflatParser::LongTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedCharTypeBase(CflatParser::UnsignedCharTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedShortTypeBase(CflatParser::UnsignedShortTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedIntTypeBase(CflatParser::UnsignedIntTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedLongTypeBase(CflatParser::UnsignedLongTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitFloatTypeBase(CflatParser::FloatTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitDoubleTypeBase(CflatParser::DoubleTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitStructTypeBase(CflatParser::StructTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitUnionTypeBase(CflatParser::UnionTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitUserTypeBase(CflatParser::UserTypeBaseContext *context) = 0;

    virtual antlrcpp::Any visitArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext *context) = 0;

    virtual antlrcpp::Any visitPointerTypeSuffix(CflatParser::PointerTypeSuffixContext *context) = 0;

    virtual antlrcpp::Any visitFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext *context) = 0;

    virtual antlrcpp::Any visitTypeDef(CflatParser::TypeDefContext *context) = 0;

    virtual antlrcpp::Any visitStmts(CflatParser::StmtsContext *context) = 0;

    virtual antlrcpp::Any visitStmt(CflatParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitLabeledStmt(CflatParser::LabeledStmtContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(CflatParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(CflatParser::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitDowhileStmt(CflatParser::DowhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitForStmt(CflatParser::ForStmtContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStmt(CflatParser::SwitchStmtContext *context) = 0;

    virtual antlrcpp::Any visitCaseClauses(CflatParser::CaseClausesContext *context) = 0;

    virtual antlrcpp::Any visitCaseClause(CflatParser::CaseClauseContext *context) = 0;

    virtual antlrcpp::Any visitCases(CflatParser::CasesContext *context) = 0;

    virtual antlrcpp::Any visitDefaultClause(CflatParser::DefaultClauseContext *context) = 0;

    virtual antlrcpp::Any visitCaseBody(CflatParser::CaseBodyContext *context) = 0;

    virtual antlrcpp::Any visitGotoStmt(CflatParser::GotoStmtContext *context) = 0;

    virtual antlrcpp::Any visitBreakStmt(CflatParser::BreakStmtContext *context) = 0;

    virtual antlrcpp::Any visitContinueStmt(CflatParser::ContinueStmtContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(CflatParser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitExpr(CflatParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitExprList(CflatParser::ExprListContext *context) = 0;

    virtual antlrcpp::Any visitArguments(CflatParser::ArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitPrimary(CflatParser::PrimaryContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(CflatParser::LiteralContext *context) = 0;


};

