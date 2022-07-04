
// Generated from .\Cflat.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "CflatVisitor.h"


/**
 * This class provides an empty implementation of CflatVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CflatBaseVisitor : public CflatVisitor {
public:

  virtual antlrcpp::Any visitCompilationUnit(CflatParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationFile(CflatParser::DeclarationFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportStmts(CflatParser::ImportStmtsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportStmt(CflatParser::ImportStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(CflatParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTopDefs(CflatParser::TopDefsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefVars(CflatParser::DefVarsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefConst(CflatParser::DefConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefFunc(CflatParser::DefFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParams(CflatParser::ParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFixedParams(CflatParser::FixedParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam(CflatParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(CflatParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefVarList(CflatParser::DefVarListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefStruct(CflatParser::DefStructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefUnion(CflatParser::DefUnionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberList(CflatParser::MemberListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSlot(CflatParser::SlotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncDecl(CflatParser::FuncDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDecl(CflatParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(CflatParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeRef(CflatParser::TypeRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger(CflatParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamTypeRefs(CflatParser::ParamTypeRefsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeRefBase(CflatParser::TypeRefBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDef(CflatParser::TypeDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmts(CflatParser::StmtsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(CflatParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabeledStmt(CflatParser::LabeledStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt(CflatParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStmt(CflatParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDowhileStmt(CflatParser::DowhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStmt(CflatParser::ForStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchStmt(CflatParser::SwitchStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseClauses(CflatParser::CaseClausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseClause(CflatParser::CaseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCases(CflatParser::CasesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultClause(CflatParser::DefaultClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseBody(CflatParser::CaseBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGotoStmt(CflatParser::GotoStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStmt(CflatParser::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStmt(CflatParser::ContinueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStmt(CflatParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(CflatParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprList(CflatParser::ExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArguments(CflatParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimary(CflatParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(CflatParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

