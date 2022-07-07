
// Generated from .\Cflat.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  CflatParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, HexLiteral = 71, DecimalLiteral = 72, OctalLiteral = 73, 
    BoolLiteral = 74, FloatingPointLiteral = 75, CharacterLiteral = 76, 
    StringLiteral = 77, Identifier = 78, BLOCK_COMMENT = 79, SPACES = 80, 
    LINE_COMMENT = 81
  };

  enum {
    RuleCompilationUnit = 0, RuleDeclarationFile = 1, RuleImportStmts = 2, 
    RuleImportStmt = 3, RuleLibid = 4, RuleName = 5, RuleTopDefs = 6, RuleDefVars = 7, 
    RuleDefConst = 8, RuleDefFunc = 9, RuleParams = 10, RuleFixedParams = 11, 
    RuleParam = 12, RuleBlock = 13, RuleDefVarList = 14, RuleDefStruct = 15, 
    RuleDefUnion = 16, RuleMemberList = 17, RuleSlot = 18, RuleFuncDecl = 19, 
    RuleVarDecl = 20, RuleType = 21, RuleTypeRef = 22, RuleInteger = 23, 
    RuleParamTypeRefs = 24, RuleFixedParamTypeRefs = 25, RuleTypeRefBase = 26, 
    RuleTypeDef = 27, RuleStmts = 28, RuleStmt = 29, RuleLabeledStmt = 30, 
    RuleIfStmt = 31, RuleWhileStmt = 32, RuleDowhileStmt = 33, RuleForStmt = 34, 
    RuleSwitchStmt = 35, RuleCaseClauses = 36, RuleCaseClause = 37, RuleCases = 38, 
    RuleDefaultClause = 39, RuleCaseBody = 40, RuleGotoStmt = 41, RuleBreakStmt = 42, 
    RuleContinueStmt = 43, RuleReturnStmt = 44, RuleExpr = 45, RuleExprList = 46, 
    RuleArguments = 47, RulePrimary = 48, RuleLiteral = 49
  };

  explicit CflatParser(antlr4::TokenStream *input);
  ~CflatParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class CompilationUnitContext;
  class DeclarationFileContext;
  class ImportStmtsContext;
  class ImportStmtContext;
  class LibidContext;
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

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImportStmtsContext *importStmts();
    TopDefsContext *topDefs();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  DeclarationFileContext : public antlr4::ParserRuleContext {
  public:
    DeclarationFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImportStmtsContext *importStmts();
    antlr4::tree::TerminalNode *EOF();
    std::vector<FuncDeclContext *> funcDecl();
    FuncDeclContext* funcDecl(size_t i);
    std::vector<VarDeclContext *> varDecl();
    VarDeclContext* varDecl(size_t i);
    std::vector<DefConstContext *> defConst();
    DefConstContext* defConst(size_t i);
    std::vector<DefStructContext *> defStruct();
    DefStructContext* defStruct(size_t i);
    std::vector<DefUnionContext *> defUnion();
    DefUnionContext* defUnion(size_t i);
    std::vector<TypeDefContext *> typeDef();
    TypeDefContext* typeDef(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationFileContext* declarationFile();

  class  ImportStmtsContext : public antlr4::ParserRuleContext {
  public:
    ImportStmtsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImportStmtContext *> importStmt();
    ImportStmtContext* importStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportStmtsContext* importStmts();

  class  ImportStmtContext : public antlr4::ParserRuleContext {
  public:
    ImportStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LibidContext *libid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportStmtContext* importStmt();

  class  LibidContext : public antlr4::ParserRuleContext {
  public:
    LibidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LibidContext* libid();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameContext* name();

  class  TopDefsContext : public antlr4::ParserRuleContext {
  public:
    TopDefsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DefFuncContext *> defFunc();
    DefFuncContext* defFunc(size_t i);
    std::vector<DefVarsContext *> defVars();
    DefVarsContext* defVars(size_t i);
    std::vector<DefConstContext *> defConst();
    DefConstContext* defConst(size_t i);
    std::vector<DefStructContext *> defStruct();
    DefStructContext* defStruct(size_t i);
    std::vector<DefUnionContext *> defUnion();
    DefUnionContext* defUnion(size_t i);
    std::vector<TypeDefContext *> typeDef();
    TypeDefContext* typeDef(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopDefsContext* topDefs();

  class  DefVarsContext : public antlr4::ParserRuleContext {
  public:
    DefVarsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefVarsContext* defVars();

  class  DefConstContext : public antlr4::ParserRuleContext {
  public:
    DefConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    NameContext *name();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefConstContext* defConst();

  class  DefFuncContext : public antlr4::ParserRuleContext {
  public:
    DefFuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeRefContext *typeRef();
    NameContext *name();
    ParamsContext *params();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefFuncContext* defFunc();

  class  ParamsContext : public antlr4::ParserRuleContext {
  public:
    ParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FixedParamsContext *fixedParams();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamsContext* params();

  class  FixedParamsContext : public antlr4::ParserRuleContext {
  public:
    FixedParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FixedParamsContext* fixedParams();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamContext* param();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefVarListContext *defVarList();
    StmtsContext *stmts();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  DefVarListContext : public antlr4::ParserRuleContext {
  public:
    DefVarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DefVarsContext *> defVars();
    DefVarsContext* defVars(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefVarListContext* defVarList();

  class  DefStructContext : public antlr4::ParserRuleContext {
  public:
    DefStructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    MemberListContext *memberList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefStructContext* defStruct();

  class  DefUnionContext : public antlr4::ParserRuleContext {
  public:
    DefUnionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    MemberListContext *memberList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefUnionContext* defUnion();

  class  MemberListContext : public antlr4::ParserRuleContext {
  public:
    MemberListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SlotContext *> slot();
    SlotContext* slot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberListContext* memberList();

  class  SlotContext : public antlr4::ParserRuleContext {
  public:
    SlotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SlotContext* slot();

  class  FuncDeclContext : public antlr4::ParserRuleContext {
  public:
    FuncDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeRefContext *typeRef();
    NameContext *name();
    ParamsContext *params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncDeclContext* funcDecl();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDeclContext* varDecl();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeRefContext *typeRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  TypeRefContext : public antlr4::ParserRuleContext {
  public:
    TypeRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeRefBaseContext *typeRefBase();
    std::vector<ParamTypeRefsContext *> paramTypeRefs();
    ParamTypeRefsContext* paramTypeRefs(size_t i);
    std::vector<IntegerContext *> integer();
    IntegerContext* integer(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeRefContext* typeRef();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HexLiteral();
    antlr4::tree::TerminalNode *DecimalLiteral();
    antlr4::tree::TerminalNode *OctalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntegerContext* integer();

  class  ParamTypeRefsContext : public antlr4::ParserRuleContext {
  public:
    ParamTypeRefsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FixedParamTypeRefsContext *fixedParamTypeRefs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamTypeRefsContext* paramTypeRefs();

  class  FixedParamTypeRefsContext : public antlr4::ParserRuleContext {
  public:
    FixedParamTypeRefsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeRefContext *> typeRef();
    TypeRefContext* typeRef(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FixedParamTypeRefsContext* fixedParamTypeRefs();

  class  TypeRefBaseContext : public antlr4::ParserRuleContext {
  public:
    TypeRefBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeRefBaseContext* typeRefBase();

  class  TypeDefContext : public antlr4::ParserRuleContext {
  public:
    TypeDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeRefContext *typeRef();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeDefContext* typeDef();

  class  StmtsContext : public antlr4::ParserRuleContext {
  public:
    StmtsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StmtsContext* stmts();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledStmtContext *labeledStmt();
    ExprContext *expr();
    BlockContext *block();
    IfStmtContext *ifStmt();
    WhileStmtContext *whileStmt();
    DowhileStmtContext *dowhileStmt();
    ForStmtContext *forStmt();
    SwitchStmtContext *switchStmt();
    BreakStmtContext *breakStmt();
    ContinueStmtContext *continueStmt();
    GotoStmtContext *gotoStmt();
    ReturnStmtContext *returnStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StmtContext* stmt();

  class  LabeledStmtContext : public antlr4::ParserRuleContext {
  public:
    LabeledStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    StmtContext *stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabeledStmtContext* labeledStmt();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStmtContext* ifStmt();

  class  WhileStmtContext : public antlr4::ParserRuleContext {
  public:
    WhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    StmtContext *stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStmtContext* whileStmt();

  class  DowhileStmtContext : public antlr4::ParserRuleContext {
  public:
    DowhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtContext *stmt();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DowhileStmtContext* dowhileStmt();

  class  ForStmtContext : public antlr4::ParserRuleContext {
  public:
    ForStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    StmtContext *stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStmtContext* forStmt();

  class  SwitchStmtContext : public antlr4::ParserRuleContext {
  public:
    SwitchStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    CaseClausesContext *caseClauses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchStmtContext* switchStmt();

  class  CaseClausesContext : public antlr4::ParserRuleContext {
  public:
    CaseClausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaseClauseContext *> caseClause();
    CaseClauseContext* caseClause(size_t i);
    DefaultClauseContext *defaultClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseClausesContext* caseClauses();

  class  CaseClauseContext : public antlr4::ParserRuleContext {
  public:
    CaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CasesContext *cases();
    CaseBodyContext *caseBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseClauseContext* caseClause();

  class  CasesContext : public antlr4::ParserRuleContext {
  public:
    CasesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrimaryContext *> primary();
    PrimaryContext* primary(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CasesContext* cases();

  class  DefaultClauseContext : public antlr4::ParserRuleContext {
  public:
    DefaultClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaseBodyContext *caseBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultClauseContext* defaultClause();

  class  CaseBodyContext : public antlr4::ParserRuleContext {
  public:
    CaseBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseBodyContext* caseBody();

  class  GotoStmtContext : public antlr4::ParserRuleContext {
  public:
    GotoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GotoStmtContext* gotoStmt();

  class  BreakStmtContext : public antlr4::ParserRuleContext {
  public:
    BreakStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BreakStmtContext* breakStmt();

  class  ContinueStmtContext : public antlr4::ParserRuleContext {
  public:
    ContinueStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContinueStmtContext* continueStmt();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    TypeContext *type();
    antlr4::tree::TerminalNode *Identifier();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  ExprListContext : public antlr4::ParserRuleContext {
  public:
    ExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprListContext* exprList();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprListContext *exprList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *Identifier();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryContext* primary();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HexLiteral();
    antlr4::tree::TerminalNode *DecimalLiteral();
    antlr4::tree::TerminalNode *OctalLiteral();
    antlr4::tree::TerminalNode *CharacterLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *FloatingPointLiteral();
    antlr4::tree::TerminalNode *BoolLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

