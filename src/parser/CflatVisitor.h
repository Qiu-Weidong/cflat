
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

    virtual antlrcpp::Any visitImportStmt(CflatParser::ImportStmtContext *context) = 0;

    virtual antlrcpp::Any visitLibid(CflatParser::LibidContext *context) = 0;

    virtual antlrcpp::Any visitName(CflatParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitDefinition(CflatParser::DefinitionContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(CflatParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariableDefinition(CflatParser::VariableDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(CflatParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitStructDefinition(CflatParser::StructDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitUnionDefinition(CflatParser::UnionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitTypeDefinition(CflatParser::TypeDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(CflatParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(CflatParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaration(CflatParser::StructDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUnionDeclaration(CflatParser::UnionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVararg(CflatParser::VarargContext *context) = 0;

    virtual antlrcpp::Any visitParams(CflatParser::ParamsContext *context) = 0;

    virtual antlrcpp::Any visitFixedParams(CflatParser::FixedParamsContext *context) = 0;

    virtual antlrcpp::Any visitParam(CflatParser::ParamContext *context) = 0;

    virtual antlrcpp::Any visitParamTypeRefs(CflatParser::ParamTypeRefsContext *context) = 0;

    virtual antlrcpp::Any visitFixedParamTypeRefs(CflatParser::FixedParamTypeRefsContext *context) = 0;

    virtual antlrcpp::Any visitParamTypeRef(CflatParser::ParamTypeRefContext *context) = 0;

    virtual antlrcpp::Any visitBlock(CflatParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitMemberList(CflatParser::MemberListContext *context) = 0;

    virtual antlrcpp::Any visitSlot(CflatParser::SlotContext *context) = 0;

    virtual antlrcpp::Any visitBasicUnsignedShortType(CflatParser::BasicUnsignedShortTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicVoidType(CflatParser::BasicVoidTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicSignedShortType(CflatParser::BasicSignedShortTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicFloatType(CflatParser::BasicFloatTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicUnionType(CflatParser::BasicUnionTypeContext *context) = 0;

    virtual antlrcpp::Any visitFunctionType(CflatParser::FunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicUnsignedLongType(CflatParser::BasicUnsignedLongTypeContext *context) = 0;

    virtual antlrcpp::Any visitPointerType(CflatParser::PointerTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicStructType(CflatParser::BasicStructTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicSignedCharType(CflatParser::BasicSignedCharTypeContext *context) = 0;

    virtual antlrcpp::Any visitArrayType(CflatParser::ArrayTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicUserType(CflatParser::BasicUserTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicSignedIntType(CflatParser::BasicSignedIntTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicUnsignedCharType(CflatParser::BasicUnsignedCharTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicUnsignedIntType(CflatParser::BasicUnsignedIntTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicDoubleType(CflatParser::BasicDoubleTypeContext *context) = 0;

    virtual antlrcpp::Any visitConstType(CflatParser::ConstTypeContext *context) = 0;

    virtual antlrcpp::Any visitBasicSignedLongType(CflatParser::BasicSignedLongTypeContext *context) = 0;

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

    virtual antlrcpp::Any visitInteger(CflatParser::IntegerContext *context) = 0;


};

