
// Generated from .\Cflat.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "CflatParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CflatParser.
 */
class  CflatListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(CflatParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(CflatParser::CompilationUnitContext *ctx) = 0;

  virtual void enterDeclarationFile(CflatParser::DeclarationFileContext *ctx) = 0;
  virtual void exitDeclarationFile(CflatParser::DeclarationFileContext *ctx) = 0;

  virtual void enterImportStmts(CflatParser::ImportStmtsContext *ctx) = 0;
  virtual void exitImportStmts(CflatParser::ImportStmtsContext *ctx) = 0;

  virtual void enterImportStmt(CflatParser::ImportStmtContext *ctx) = 0;
  virtual void exitImportStmt(CflatParser::ImportStmtContext *ctx) = 0;

  virtual void enterLibid(CflatParser::LibidContext *ctx) = 0;
  virtual void exitLibid(CflatParser::LibidContext *ctx) = 0;

  virtual void enterName(CflatParser::NameContext *ctx) = 0;
  virtual void exitName(CflatParser::NameContext *ctx) = 0;

  virtual void enterTopDefs(CflatParser::TopDefsContext *ctx) = 0;
  virtual void exitTopDefs(CflatParser::TopDefsContext *ctx) = 0;

  virtual void enterDefVars(CflatParser::DefVarsContext *ctx) = 0;
  virtual void exitDefVars(CflatParser::DefVarsContext *ctx) = 0;

  virtual void enterDefFunc(CflatParser::DefFuncContext *ctx) = 0;
  virtual void exitDefFunc(CflatParser::DefFuncContext *ctx) = 0;

  virtual void enterParams(CflatParser::ParamsContext *ctx) = 0;
  virtual void exitParams(CflatParser::ParamsContext *ctx) = 0;

  virtual void enterFixedParams(CflatParser::FixedParamsContext *ctx) = 0;
  virtual void exitFixedParams(CflatParser::FixedParamsContext *ctx) = 0;

  virtual void enterParam(CflatParser::ParamContext *ctx) = 0;
  virtual void exitParam(CflatParser::ParamContext *ctx) = 0;

  virtual void enterBlock(CflatParser::BlockContext *ctx) = 0;
  virtual void exitBlock(CflatParser::BlockContext *ctx) = 0;

  virtual void enterDefVarList(CflatParser::DefVarListContext *ctx) = 0;
  virtual void exitDefVarList(CflatParser::DefVarListContext *ctx) = 0;

  virtual void enterDefStruct(CflatParser::DefStructContext *ctx) = 0;
  virtual void exitDefStruct(CflatParser::DefStructContext *ctx) = 0;

  virtual void enterDefUnion(CflatParser::DefUnionContext *ctx) = 0;
  virtual void exitDefUnion(CflatParser::DefUnionContext *ctx) = 0;

  virtual void enterMemberList(CflatParser::MemberListContext *ctx) = 0;
  virtual void exitMemberList(CflatParser::MemberListContext *ctx) = 0;

  virtual void enterSlot(CflatParser::SlotContext *ctx) = 0;
  virtual void exitSlot(CflatParser::SlotContext *ctx) = 0;

  virtual void enterFuncDecl(CflatParser::FuncDeclContext *ctx) = 0;
  virtual void exitFuncDecl(CflatParser::FuncDeclContext *ctx) = 0;

  virtual void enterVarDecl(CflatParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(CflatParser::VarDeclContext *ctx) = 0;

  virtual void enterType(CflatParser::TypeContext *ctx) = 0;
  virtual void exitType(CflatParser::TypeContext *ctx) = 0;

  virtual void enterTypeRef(CflatParser::TypeRefContext *ctx) = 0;
  virtual void exitTypeRef(CflatParser::TypeRefContext *ctx) = 0;

  virtual void enterInteger(CflatParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(CflatParser::IntegerContext *ctx) = 0;

  virtual void enterParamTypeRefs(CflatParser::ParamTypeRefsContext *ctx) = 0;
  virtual void exitParamTypeRefs(CflatParser::ParamTypeRefsContext *ctx) = 0;

  virtual void enterFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *ctx) = 0;
  virtual void exitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *ctx) = 0;

  virtual void enterVoidTypeBase(CflatParser::VoidTypeBaseContext *ctx) = 0;
  virtual void exitVoidTypeBase(CflatParser::VoidTypeBaseContext *ctx) = 0;

  virtual void enterCharTypeBase(CflatParser::CharTypeBaseContext *ctx) = 0;
  virtual void exitCharTypeBase(CflatParser::CharTypeBaseContext *ctx) = 0;

  virtual void enterShortTypeBase(CflatParser::ShortTypeBaseContext *ctx) = 0;
  virtual void exitShortTypeBase(CflatParser::ShortTypeBaseContext *ctx) = 0;

  virtual void enterIntTypeBase(CflatParser::IntTypeBaseContext *ctx) = 0;
  virtual void exitIntTypeBase(CflatParser::IntTypeBaseContext *ctx) = 0;

  virtual void enterLongTypeBase(CflatParser::LongTypeBaseContext *ctx) = 0;
  virtual void exitLongTypeBase(CflatParser::LongTypeBaseContext *ctx) = 0;

  virtual void enterUnsignedCharTypeBase(CflatParser::UnsignedCharTypeBaseContext *ctx) = 0;
  virtual void exitUnsignedCharTypeBase(CflatParser::UnsignedCharTypeBaseContext *ctx) = 0;

  virtual void enterUnsignedShortTypeBase(CflatParser::UnsignedShortTypeBaseContext *ctx) = 0;
  virtual void exitUnsignedShortTypeBase(CflatParser::UnsignedShortTypeBaseContext *ctx) = 0;

  virtual void enterUnsignedIntTypeBase(CflatParser::UnsignedIntTypeBaseContext *ctx) = 0;
  virtual void exitUnsignedIntTypeBase(CflatParser::UnsignedIntTypeBaseContext *ctx) = 0;

  virtual void enterUnsignedLongTypeBase(CflatParser::UnsignedLongTypeBaseContext *ctx) = 0;
  virtual void exitUnsignedLongTypeBase(CflatParser::UnsignedLongTypeBaseContext *ctx) = 0;

  virtual void enterFloatTypeBase(CflatParser::FloatTypeBaseContext *ctx) = 0;
  virtual void exitFloatTypeBase(CflatParser::FloatTypeBaseContext *ctx) = 0;

  virtual void enterDoubleTypeBase(CflatParser::DoubleTypeBaseContext *ctx) = 0;
  virtual void exitDoubleTypeBase(CflatParser::DoubleTypeBaseContext *ctx) = 0;

  virtual void enterStructTypeBase(CflatParser::StructTypeBaseContext *ctx) = 0;
  virtual void exitStructTypeBase(CflatParser::StructTypeBaseContext *ctx) = 0;

  virtual void enterUnionTypeBase(CflatParser::UnionTypeBaseContext *ctx) = 0;
  virtual void exitUnionTypeBase(CflatParser::UnionTypeBaseContext *ctx) = 0;

  virtual void enterUserTypeBase(CflatParser::UserTypeBaseContext *ctx) = 0;
  virtual void exitUserTypeBase(CflatParser::UserTypeBaseContext *ctx) = 0;

  virtual void enterArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext *ctx) = 0;
  virtual void exitArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext *ctx) = 0;

  virtual void enterPointerTypeSuffix(CflatParser::PointerTypeSuffixContext *ctx) = 0;
  virtual void exitPointerTypeSuffix(CflatParser::PointerTypeSuffixContext *ctx) = 0;

  virtual void enterFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext *ctx) = 0;
  virtual void exitFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext *ctx) = 0;

  virtual void enterTypeDef(CflatParser::TypeDefContext *ctx) = 0;
  virtual void exitTypeDef(CflatParser::TypeDefContext *ctx) = 0;

  virtual void enterStmts(CflatParser::StmtsContext *ctx) = 0;
  virtual void exitStmts(CflatParser::StmtsContext *ctx) = 0;

  virtual void enterStmt(CflatParser::StmtContext *ctx) = 0;
  virtual void exitStmt(CflatParser::StmtContext *ctx) = 0;

  virtual void enterLabeledStmt(CflatParser::LabeledStmtContext *ctx) = 0;
  virtual void exitLabeledStmt(CflatParser::LabeledStmtContext *ctx) = 0;

  virtual void enterIfStmt(CflatParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(CflatParser::IfStmtContext *ctx) = 0;

  virtual void enterWhileStmt(CflatParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(CflatParser::WhileStmtContext *ctx) = 0;

  virtual void enterDowhileStmt(CflatParser::DowhileStmtContext *ctx) = 0;
  virtual void exitDowhileStmt(CflatParser::DowhileStmtContext *ctx) = 0;

  virtual void enterForStmt(CflatParser::ForStmtContext *ctx) = 0;
  virtual void exitForStmt(CflatParser::ForStmtContext *ctx) = 0;

  virtual void enterSwitchStmt(CflatParser::SwitchStmtContext *ctx) = 0;
  virtual void exitSwitchStmt(CflatParser::SwitchStmtContext *ctx) = 0;

  virtual void enterCaseClauses(CflatParser::CaseClausesContext *ctx) = 0;
  virtual void exitCaseClauses(CflatParser::CaseClausesContext *ctx) = 0;

  virtual void enterCaseClause(CflatParser::CaseClauseContext *ctx) = 0;
  virtual void exitCaseClause(CflatParser::CaseClauseContext *ctx) = 0;

  virtual void enterCases(CflatParser::CasesContext *ctx) = 0;
  virtual void exitCases(CflatParser::CasesContext *ctx) = 0;

  virtual void enterDefaultClause(CflatParser::DefaultClauseContext *ctx) = 0;
  virtual void exitDefaultClause(CflatParser::DefaultClauseContext *ctx) = 0;

  virtual void enterCaseBody(CflatParser::CaseBodyContext *ctx) = 0;
  virtual void exitCaseBody(CflatParser::CaseBodyContext *ctx) = 0;

  virtual void enterGotoStmt(CflatParser::GotoStmtContext *ctx) = 0;
  virtual void exitGotoStmt(CflatParser::GotoStmtContext *ctx) = 0;

  virtual void enterBreakStmt(CflatParser::BreakStmtContext *ctx) = 0;
  virtual void exitBreakStmt(CflatParser::BreakStmtContext *ctx) = 0;

  virtual void enterContinueStmt(CflatParser::ContinueStmtContext *ctx) = 0;
  virtual void exitContinueStmt(CflatParser::ContinueStmtContext *ctx) = 0;

  virtual void enterReturnStmt(CflatParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(CflatParser::ReturnStmtContext *ctx) = 0;

  virtual void enterExpr(CflatParser::ExprContext *ctx) = 0;
  virtual void exitExpr(CflatParser::ExprContext *ctx) = 0;

  virtual void enterExprList(CflatParser::ExprListContext *ctx) = 0;
  virtual void exitExprList(CflatParser::ExprListContext *ctx) = 0;

  virtual void enterArguments(CflatParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(CflatParser::ArgumentsContext *ctx) = 0;

  virtual void enterPrimary(CflatParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(CflatParser::PrimaryContext *ctx) = 0;

  virtual void enterLiteral(CflatParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(CflatParser::LiteralContext *ctx) = 0;


};

