
// Generated from .\Cflat.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "CflatListener.h"


/**
 * This class provides an empty implementation of CflatListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CflatBaseListener : public CflatListener {
public:

  virtual void enterCompilationUnit(CflatParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(CflatParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterDeclarationFile(CflatParser::DeclarationFileContext * /*ctx*/) override { }
  virtual void exitDeclarationFile(CflatParser::DeclarationFileContext * /*ctx*/) override { }

  virtual void enterImportStmts(CflatParser::ImportStmtsContext * /*ctx*/) override { }
  virtual void exitImportStmts(CflatParser::ImportStmtsContext * /*ctx*/) override { }

  virtual void enterImportStmt(CflatParser::ImportStmtContext * /*ctx*/) override { }
  virtual void exitImportStmt(CflatParser::ImportStmtContext * /*ctx*/) override { }

  virtual void enterLibid(CflatParser::LibidContext * /*ctx*/) override { }
  virtual void exitLibid(CflatParser::LibidContext * /*ctx*/) override { }

  virtual void enterName(CflatParser::NameContext * /*ctx*/) override { }
  virtual void exitName(CflatParser::NameContext * /*ctx*/) override { }

  virtual void enterTopDefs(CflatParser::TopDefsContext * /*ctx*/) override { }
  virtual void exitTopDefs(CflatParser::TopDefsContext * /*ctx*/) override { }

  virtual void enterDefVars(CflatParser::DefVarsContext * /*ctx*/) override { }
  virtual void exitDefVars(CflatParser::DefVarsContext * /*ctx*/) override { }

  virtual void enterDefFunc(CflatParser::DefFuncContext * /*ctx*/) override { }
  virtual void exitDefFunc(CflatParser::DefFuncContext * /*ctx*/) override { }

  virtual void enterParams(CflatParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(CflatParser::ParamsContext * /*ctx*/) override { }

  virtual void enterFixedParams(CflatParser::FixedParamsContext * /*ctx*/) override { }
  virtual void exitFixedParams(CflatParser::FixedParamsContext * /*ctx*/) override { }

  virtual void enterParam(CflatParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(CflatParser::ParamContext * /*ctx*/) override { }

  virtual void enterBlock(CflatParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(CflatParser::BlockContext * /*ctx*/) override { }

  virtual void enterDefVarList(CflatParser::DefVarListContext * /*ctx*/) override { }
  virtual void exitDefVarList(CflatParser::DefVarListContext * /*ctx*/) override { }

  virtual void enterDefStruct(CflatParser::DefStructContext * /*ctx*/) override { }
  virtual void exitDefStruct(CflatParser::DefStructContext * /*ctx*/) override { }

  virtual void enterDefUnion(CflatParser::DefUnionContext * /*ctx*/) override { }
  virtual void exitDefUnion(CflatParser::DefUnionContext * /*ctx*/) override { }

  virtual void enterMemberList(CflatParser::MemberListContext * /*ctx*/) override { }
  virtual void exitMemberList(CflatParser::MemberListContext * /*ctx*/) override { }

  virtual void enterSlot(CflatParser::SlotContext * /*ctx*/) override { }
  virtual void exitSlot(CflatParser::SlotContext * /*ctx*/) override { }

  virtual void enterFuncDecl(CflatParser::FuncDeclContext * /*ctx*/) override { }
  virtual void exitFuncDecl(CflatParser::FuncDeclContext * /*ctx*/) override { }

  virtual void enterVarDecl(CflatParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(CflatParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterType(CflatParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(CflatParser::TypeContext * /*ctx*/) override { }

  virtual void enterTypeRef(CflatParser::TypeRefContext * /*ctx*/) override { }
  virtual void exitTypeRef(CflatParser::TypeRefContext * /*ctx*/) override { }

  virtual void enterInteger(CflatParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(CflatParser::IntegerContext * /*ctx*/) override { }

  virtual void enterParamTypeRefs(CflatParser::ParamTypeRefsContext * /*ctx*/) override { }
  virtual void exitParamTypeRefs(CflatParser::ParamTypeRefsContext * /*ctx*/) override { }

  virtual void enterFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext * /*ctx*/) override { }
  virtual void exitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext * /*ctx*/) override { }

  virtual void enterVoidTypeBase(CflatParser::VoidTypeBaseContext * /*ctx*/) override { }
  virtual void exitVoidTypeBase(CflatParser::VoidTypeBaseContext * /*ctx*/) override { }

  virtual void enterCharTypeBase(CflatParser::CharTypeBaseContext * /*ctx*/) override { }
  virtual void exitCharTypeBase(CflatParser::CharTypeBaseContext * /*ctx*/) override { }

  virtual void enterShortTypeBase(CflatParser::ShortTypeBaseContext * /*ctx*/) override { }
  virtual void exitShortTypeBase(CflatParser::ShortTypeBaseContext * /*ctx*/) override { }

  virtual void enterIntTypeBase(CflatParser::IntTypeBaseContext * /*ctx*/) override { }
  virtual void exitIntTypeBase(CflatParser::IntTypeBaseContext * /*ctx*/) override { }

  virtual void enterLongTypeBase(CflatParser::LongTypeBaseContext * /*ctx*/) override { }
  virtual void exitLongTypeBase(CflatParser::LongTypeBaseContext * /*ctx*/) override { }

  virtual void enterUnsignedCharTypeBase(CflatParser::UnsignedCharTypeBaseContext * /*ctx*/) override { }
  virtual void exitUnsignedCharTypeBase(CflatParser::UnsignedCharTypeBaseContext * /*ctx*/) override { }

  virtual void enterUnsignedShortTypeBase(CflatParser::UnsignedShortTypeBaseContext * /*ctx*/) override { }
  virtual void exitUnsignedShortTypeBase(CflatParser::UnsignedShortTypeBaseContext * /*ctx*/) override { }

  virtual void enterUnsignedIntTypeBase(CflatParser::UnsignedIntTypeBaseContext * /*ctx*/) override { }
  virtual void exitUnsignedIntTypeBase(CflatParser::UnsignedIntTypeBaseContext * /*ctx*/) override { }

  virtual void enterUnsignedLongTypeBase(CflatParser::UnsignedLongTypeBaseContext * /*ctx*/) override { }
  virtual void exitUnsignedLongTypeBase(CflatParser::UnsignedLongTypeBaseContext * /*ctx*/) override { }

  virtual void enterFloatTypeBase(CflatParser::FloatTypeBaseContext * /*ctx*/) override { }
  virtual void exitFloatTypeBase(CflatParser::FloatTypeBaseContext * /*ctx*/) override { }

  virtual void enterDoubleTypeBase(CflatParser::DoubleTypeBaseContext * /*ctx*/) override { }
  virtual void exitDoubleTypeBase(CflatParser::DoubleTypeBaseContext * /*ctx*/) override { }

  virtual void enterStructTypeBase(CflatParser::StructTypeBaseContext * /*ctx*/) override { }
  virtual void exitStructTypeBase(CflatParser::StructTypeBaseContext * /*ctx*/) override { }

  virtual void enterUnionTypeBase(CflatParser::UnionTypeBaseContext * /*ctx*/) override { }
  virtual void exitUnionTypeBase(CflatParser::UnionTypeBaseContext * /*ctx*/) override { }

  virtual void enterUserTypeBase(CflatParser::UserTypeBaseContext * /*ctx*/) override { }
  virtual void exitUserTypeBase(CflatParser::UserTypeBaseContext * /*ctx*/) override { }

  virtual void enterArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext * /*ctx*/) override { }
  virtual void exitArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext * /*ctx*/) override { }

  virtual void enterPointerTypeSuffix(CflatParser::PointerTypeSuffixContext * /*ctx*/) override { }
  virtual void exitPointerTypeSuffix(CflatParser::PointerTypeSuffixContext * /*ctx*/) override { }

  virtual void enterFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext * /*ctx*/) override { }
  virtual void exitFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext * /*ctx*/) override { }

  virtual void enterTypeDef(CflatParser::TypeDefContext * /*ctx*/) override { }
  virtual void exitTypeDef(CflatParser::TypeDefContext * /*ctx*/) override { }

  virtual void enterStmts(CflatParser::StmtsContext * /*ctx*/) override { }
  virtual void exitStmts(CflatParser::StmtsContext * /*ctx*/) override { }

  virtual void enterStmt(CflatParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(CflatParser::StmtContext * /*ctx*/) override { }

  virtual void enterLabeledStmt(CflatParser::LabeledStmtContext * /*ctx*/) override { }
  virtual void exitLabeledStmt(CflatParser::LabeledStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(CflatParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(CflatParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(CflatParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(CflatParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterDowhileStmt(CflatParser::DowhileStmtContext * /*ctx*/) override { }
  virtual void exitDowhileStmt(CflatParser::DowhileStmtContext * /*ctx*/) override { }

  virtual void enterForStmt(CflatParser::ForStmtContext * /*ctx*/) override { }
  virtual void exitForStmt(CflatParser::ForStmtContext * /*ctx*/) override { }

  virtual void enterSwitchStmt(CflatParser::SwitchStmtContext * /*ctx*/) override { }
  virtual void exitSwitchStmt(CflatParser::SwitchStmtContext * /*ctx*/) override { }

  virtual void enterCaseClauses(CflatParser::CaseClausesContext * /*ctx*/) override { }
  virtual void exitCaseClauses(CflatParser::CaseClausesContext * /*ctx*/) override { }

  virtual void enterCaseClause(CflatParser::CaseClauseContext * /*ctx*/) override { }
  virtual void exitCaseClause(CflatParser::CaseClauseContext * /*ctx*/) override { }

  virtual void enterCases(CflatParser::CasesContext * /*ctx*/) override { }
  virtual void exitCases(CflatParser::CasesContext * /*ctx*/) override { }

  virtual void enterDefaultClause(CflatParser::DefaultClauseContext * /*ctx*/) override { }
  virtual void exitDefaultClause(CflatParser::DefaultClauseContext * /*ctx*/) override { }

  virtual void enterCaseBody(CflatParser::CaseBodyContext * /*ctx*/) override { }
  virtual void exitCaseBody(CflatParser::CaseBodyContext * /*ctx*/) override { }

  virtual void enterGotoStmt(CflatParser::GotoStmtContext * /*ctx*/) override { }
  virtual void exitGotoStmt(CflatParser::GotoStmtContext * /*ctx*/) override { }

  virtual void enterBreakStmt(CflatParser::BreakStmtContext * /*ctx*/) override { }
  virtual void exitBreakStmt(CflatParser::BreakStmtContext * /*ctx*/) override { }

  virtual void enterContinueStmt(CflatParser::ContinueStmtContext * /*ctx*/) override { }
  virtual void exitContinueStmt(CflatParser::ContinueStmtContext * /*ctx*/) override { }

  virtual void enterReturnStmt(CflatParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(CflatParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterExpr(CflatParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(CflatParser::ExprContext * /*ctx*/) override { }

  virtual void enterExprList(CflatParser::ExprListContext * /*ctx*/) override { }
  virtual void exitExprList(CflatParser::ExprListContext * /*ctx*/) override { }

  virtual void enterArguments(CflatParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(CflatParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterPrimary(CflatParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(CflatParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterLiteral(CflatParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(CflatParser::LiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

