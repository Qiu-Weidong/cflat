
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

  virtual void enterImportStmt(CflatParser::ImportStmtContext * /*ctx*/) override { }
  virtual void exitImportStmt(CflatParser::ImportStmtContext * /*ctx*/) override { }

  virtual void enterLibid(CflatParser::LibidContext * /*ctx*/) override { }
  virtual void exitLibid(CflatParser::LibidContext * /*ctx*/) override { }

  virtual void enterName(CflatParser::NameContext * /*ctx*/) override { }
  virtual void exitName(CflatParser::NameContext * /*ctx*/) override { }

  virtual void enterDefinition(CflatParser::DefinitionContext * /*ctx*/) override { }
  virtual void exitDefinition(CflatParser::DefinitionContext * /*ctx*/) override { }

  virtual void enterDeclaration(CflatParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(CflatParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDefinition(CflatParser::VariableDefinitionContext * /*ctx*/) override { }
  virtual void exitVariableDefinition(CflatParser::VariableDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(CflatParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(CflatParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterStructDefinition(CflatParser::StructDefinitionContext * /*ctx*/) override { }
  virtual void exitStructDefinition(CflatParser::StructDefinitionContext * /*ctx*/) override { }

  virtual void enterUnionDefinition(CflatParser::UnionDefinitionContext * /*ctx*/) override { }
  virtual void exitUnionDefinition(CflatParser::UnionDefinitionContext * /*ctx*/) override { }

  virtual void enterTypeDefinition(CflatParser::TypeDefinitionContext * /*ctx*/) override { }
  virtual void exitTypeDefinition(CflatParser::TypeDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(CflatParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(CflatParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(CflatParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(CflatParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterStructDeclaration(CflatParser::StructDeclarationContext * /*ctx*/) override { }
  virtual void exitStructDeclaration(CflatParser::StructDeclarationContext * /*ctx*/) override { }

  virtual void enterUnionDeclaration(CflatParser::UnionDeclarationContext * /*ctx*/) override { }
  virtual void exitUnionDeclaration(CflatParser::UnionDeclarationContext * /*ctx*/) override { }

  virtual void enterVararg(CflatParser::VarargContext * /*ctx*/) override { }
  virtual void exitVararg(CflatParser::VarargContext * /*ctx*/) override { }

  virtual void enterParams(CflatParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(CflatParser::ParamsContext * /*ctx*/) override { }

  virtual void enterFixedParams(CflatParser::FixedParamsContext * /*ctx*/) override { }
  virtual void exitFixedParams(CflatParser::FixedParamsContext * /*ctx*/) override { }

  virtual void enterParam(CflatParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(CflatParser::ParamContext * /*ctx*/) override { }

  virtual void enterParamTypeRefs(CflatParser::ParamTypeRefsContext * /*ctx*/) override { }
  virtual void exitParamTypeRefs(CflatParser::ParamTypeRefsContext * /*ctx*/) override { }

  virtual void enterFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext * /*ctx*/) override { }
  virtual void exitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext * /*ctx*/) override { }

  virtual void enterParamTypeRef(CflatParser::ParamTypeRefContext * /*ctx*/) override { }
  virtual void exitParamTypeRef(CflatParser::ParamTypeRefContext * /*ctx*/) override { }

  virtual void enterBlock(CflatParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(CflatParser::BlockContext * /*ctx*/) override { }

  virtual void enterMemberList(CflatParser::MemberListContext * /*ctx*/) override { }
  virtual void exitMemberList(CflatParser::MemberListContext * /*ctx*/) override { }

  virtual void enterSlot(CflatParser::SlotContext * /*ctx*/) override { }
  virtual void exitSlot(CflatParser::SlotContext * /*ctx*/) override { }

  virtual void enterType(CflatParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(CflatParser::TypeContext * /*ctx*/) override { }

  virtual void enterBasicVoidType(CflatParser::BasicVoidTypeContext * /*ctx*/) override { }
  virtual void exitBasicVoidType(CflatParser::BasicVoidTypeContext * /*ctx*/) override { }

  virtual void enterBasicSignedCharType(CflatParser::BasicSignedCharTypeContext * /*ctx*/) override { }
  virtual void exitBasicSignedCharType(CflatParser::BasicSignedCharTypeContext * /*ctx*/) override { }

  virtual void enterBasicSignedShortType(CflatParser::BasicSignedShortTypeContext * /*ctx*/) override { }
  virtual void exitBasicSignedShortType(CflatParser::BasicSignedShortTypeContext * /*ctx*/) override { }

  virtual void enterBasicSignedIntType(CflatParser::BasicSignedIntTypeContext * /*ctx*/) override { }
  virtual void exitBasicSignedIntType(CflatParser::BasicSignedIntTypeContext * /*ctx*/) override { }

  virtual void enterBasicSignedLongType(CflatParser::BasicSignedLongTypeContext * /*ctx*/) override { }
  virtual void exitBasicSignedLongType(CflatParser::BasicSignedLongTypeContext * /*ctx*/) override { }

  virtual void enterBasicUnsignedCharType(CflatParser::BasicUnsignedCharTypeContext * /*ctx*/) override { }
  virtual void exitBasicUnsignedCharType(CflatParser::BasicUnsignedCharTypeContext * /*ctx*/) override { }

  virtual void enterBasicUnsignedShortType(CflatParser::BasicUnsignedShortTypeContext * /*ctx*/) override { }
  virtual void exitBasicUnsignedShortType(CflatParser::BasicUnsignedShortTypeContext * /*ctx*/) override { }

  virtual void enterBasicUnsignedIntType(CflatParser::BasicUnsignedIntTypeContext * /*ctx*/) override { }
  virtual void exitBasicUnsignedIntType(CflatParser::BasicUnsignedIntTypeContext * /*ctx*/) override { }

  virtual void enterBasicUnsignedLongType(CflatParser::BasicUnsignedLongTypeContext * /*ctx*/) override { }
  virtual void exitBasicUnsignedLongType(CflatParser::BasicUnsignedLongTypeContext * /*ctx*/) override { }

  virtual void enterBasicFloatType(CflatParser::BasicFloatTypeContext * /*ctx*/) override { }
  virtual void exitBasicFloatType(CflatParser::BasicFloatTypeContext * /*ctx*/) override { }

  virtual void enterBasicDoubleType(CflatParser::BasicDoubleTypeContext * /*ctx*/) override { }
  virtual void exitBasicDoubleType(CflatParser::BasicDoubleTypeContext * /*ctx*/) override { }

  virtual void enterBasicStructType(CflatParser::BasicStructTypeContext * /*ctx*/) override { }
  virtual void exitBasicStructType(CflatParser::BasicStructTypeContext * /*ctx*/) override { }

  virtual void enterBasicUnionType(CflatParser::BasicUnionTypeContext * /*ctx*/) override { }
  virtual void exitBasicUnionType(CflatParser::BasicUnionTypeContext * /*ctx*/) override { }

  virtual void enterBasicUserType(CflatParser::BasicUserTypeContext * /*ctx*/) override { }
  virtual void exitBasicUserType(CflatParser::BasicUserTypeContext * /*ctx*/) override { }

  virtual void enterPointerTypeSuffix(CflatParser::PointerTypeSuffixContext * /*ctx*/) override { }
  virtual void exitPointerTypeSuffix(CflatParser::PointerTypeSuffixContext * /*ctx*/) override { }

  virtual void enterArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext * /*ctx*/) override { }
  virtual void exitArrayTypeSuffix(CflatParser::ArrayTypeSuffixContext * /*ctx*/) override { }

  virtual void enterFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext * /*ctx*/) override { }
  virtual void exitFunctionTypeSuffix(CflatParser::FunctionTypeSuffixContext * /*ctx*/) override { }

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

  virtual void enterInteger(CflatParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(CflatParser::IntegerContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

