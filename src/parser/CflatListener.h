
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

  virtual void enterImportStmt(CflatParser::ImportStmtContext *ctx) = 0;
  virtual void exitImportStmt(CflatParser::ImportStmtContext *ctx) = 0;

  virtual void enterLibid(CflatParser::LibidContext *ctx) = 0;
  virtual void exitLibid(CflatParser::LibidContext *ctx) = 0;

  virtual void enterName(CflatParser::NameContext *ctx) = 0;
  virtual void exitName(CflatParser::NameContext *ctx) = 0;

  virtual void enterDefinition(CflatParser::DefinitionContext *ctx) = 0;
  virtual void exitDefinition(CflatParser::DefinitionContext *ctx) = 0;

  virtual void enterDeclaration(CflatParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(CflatParser::DeclarationContext *ctx) = 0;

  virtual void enterVariableDefinition(CflatParser::VariableDefinitionContext *ctx) = 0;
  virtual void exitVariableDefinition(CflatParser::VariableDefinitionContext *ctx) = 0;

  virtual void enterFunctionDefinition(CflatParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(CflatParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterStructDefinition(CflatParser::StructDefinitionContext *ctx) = 0;
  virtual void exitStructDefinition(CflatParser::StructDefinitionContext *ctx) = 0;

  virtual void enterUnionDefinition(CflatParser::UnionDefinitionContext *ctx) = 0;
  virtual void exitUnionDefinition(CflatParser::UnionDefinitionContext *ctx) = 0;

  virtual void enterTypeDefinition(CflatParser::TypeDefinitionContext *ctx) = 0;
  virtual void exitTypeDefinition(CflatParser::TypeDefinitionContext *ctx) = 0;

  virtual void enterFunctionDeclaration(CflatParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(CflatParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterVariableDeclaration(CflatParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(CflatParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterStructDeclaration(CflatParser::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(CflatParser::StructDeclarationContext *ctx) = 0;

  virtual void enterUnionDeclaration(CflatParser::UnionDeclarationContext *ctx) = 0;
  virtual void exitUnionDeclaration(CflatParser::UnionDeclarationContext *ctx) = 0;

  virtual void enterVararg(CflatParser::VarargContext *ctx) = 0;
  virtual void exitVararg(CflatParser::VarargContext *ctx) = 0;

  virtual void enterParams(CflatParser::ParamsContext *ctx) = 0;
  virtual void exitParams(CflatParser::ParamsContext *ctx) = 0;

  virtual void enterFixedParams(CflatParser::FixedParamsContext *ctx) = 0;
  virtual void exitFixedParams(CflatParser::FixedParamsContext *ctx) = 0;

  virtual void enterParam(CflatParser::ParamContext *ctx) = 0;
  virtual void exitParam(CflatParser::ParamContext *ctx) = 0;

  virtual void enterParamTypeRefs(CflatParser::ParamTypeRefsContext *ctx) = 0;
  virtual void exitParamTypeRefs(CflatParser::ParamTypeRefsContext *ctx) = 0;

  virtual void enterFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *ctx) = 0;
  virtual void exitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *ctx) = 0;

  virtual void enterParamTypeRef(CflatParser::ParamTypeRefContext *ctx) = 0;
  virtual void exitParamTypeRef(CflatParser::ParamTypeRefContext *ctx) = 0;

  virtual void enterBlock(CflatParser::BlockContext *ctx) = 0;
  virtual void exitBlock(CflatParser::BlockContext *ctx) = 0;

  virtual void enterMemberList(CflatParser::MemberListContext *ctx) = 0;
  virtual void exitMemberList(CflatParser::MemberListContext *ctx) = 0;

  virtual void enterSlot(CflatParser::SlotContext *ctx) = 0;
  virtual void exitSlot(CflatParser::SlotContext *ctx) = 0;

  virtual void enterBasicUnsignedShortType(CflatParser::BasicUnsignedShortTypeContext *ctx) = 0;
  virtual void exitBasicUnsignedShortType(CflatParser::BasicUnsignedShortTypeContext *ctx) = 0;

  virtual void enterUnionType(CflatParser::UnionTypeContext *ctx) = 0;
  virtual void exitUnionType(CflatParser::UnionTypeContext *ctx) = 0;

  virtual void enterBasicVoidType(CflatParser::BasicVoidTypeContext *ctx) = 0;
  virtual void exitBasicVoidType(CflatParser::BasicVoidTypeContext *ctx) = 0;

  virtual void enterStructType(CflatParser::StructTypeContext *ctx) = 0;
  virtual void exitStructType(CflatParser::StructTypeContext *ctx) = 0;

  virtual void enterBasicSignedShortType(CflatParser::BasicSignedShortTypeContext *ctx) = 0;
  virtual void exitBasicSignedShortType(CflatParser::BasicSignedShortTypeContext *ctx) = 0;

  virtual void enterBasicFloatType(CflatParser::BasicFloatTypeContext *ctx) = 0;
  virtual void exitBasicFloatType(CflatParser::BasicFloatTypeContext *ctx) = 0;

  virtual void enterFunctionType(CflatParser::FunctionTypeContext *ctx) = 0;
  virtual void exitFunctionType(CflatParser::FunctionTypeContext *ctx) = 0;

  virtual void enterBasicUnsignedLongType(CflatParser::BasicUnsignedLongTypeContext *ctx) = 0;
  virtual void exitBasicUnsignedLongType(CflatParser::BasicUnsignedLongTypeContext *ctx) = 0;

  virtual void enterPointerType(CflatParser::PointerTypeContext *ctx) = 0;
  virtual void exitPointerType(CflatParser::PointerTypeContext *ctx) = 0;

  virtual void enterBasicSignedCharType(CflatParser::BasicSignedCharTypeContext *ctx) = 0;
  virtual void exitBasicSignedCharType(CflatParser::BasicSignedCharTypeContext *ctx) = 0;

  virtual void enterArrayType(CflatParser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(CflatParser::ArrayTypeContext *ctx) = 0;

  virtual void enterBasicSignedIntType(CflatParser::BasicSignedIntTypeContext *ctx) = 0;
  virtual void exitBasicSignedIntType(CflatParser::BasicSignedIntTypeContext *ctx) = 0;

  virtual void enterBasicUnsignedCharType(CflatParser::BasicUnsignedCharTypeContext *ctx) = 0;
  virtual void exitBasicUnsignedCharType(CflatParser::BasicUnsignedCharTypeContext *ctx) = 0;

  virtual void enterBasicUnsignedIntType(CflatParser::BasicUnsignedIntTypeContext *ctx) = 0;
  virtual void exitBasicUnsignedIntType(CflatParser::BasicUnsignedIntTypeContext *ctx) = 0;

  virtual void enterBasicDoubleType(CflatParser::BasicDoubleTypeContext *ctx) = 0;
  virtual void exitBasicDoubleType(CflatParser::BasicDoubleTypeContext *ctx) = 0;

  virtual void enterUserType(CflatParser::UserTypeContext *ctx) = 0;
  virtual void exitUserType(CflatParser::UserTypeContext *ctx) = 0;

  virtual void enterBasicSignedLongType(CflatParser::BasicSignedLongTypeContext *ctx) = 0;
  virtual void exitBasicSignedLongType(CflatParser::BasicSignedLongTypeContext *ctx) = 0;

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

  virtual void enterInteger(CflatParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(CflatParser::IntegerContext *ctx) = 0;


};

