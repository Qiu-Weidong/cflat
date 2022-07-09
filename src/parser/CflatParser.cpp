
// Generated from .\Cflat.g4 by ANTLR 4.9.3


#include "CflatListener.h"
#include "CflatVisitor.h"

#include "CflatParser.h"


using namespace antlrcpp;
using namespace antlr4;

CflatParser::CflatParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CflatParser::~CflatParser() {
  delete _interpreter;
}

std::string CflatParser::getGrammarFileName() const {
  return "Cflat.g4";
}

const std::vector<std::string>& CflatParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CflatParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

CflatParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::ImportStmtsContext* CflatParser::CompilationUnitContext::importStmts() {
  return getRuleContext<CflatParser::ImportStmtsContext>(0);
}

CflatParser::TopDefsContext* CflatParser::CompilationUnitContext::topDefs() {
  return getRuleContext<CflatParser::TopDefsContext>(0);
}

tree::TerminalNode* CflatParser::CompilationUnitContext::EOF() {
  return getToken(CflatParser::EOF, 0);
}


size_t CflatParser::CompilationUnitContext::getRuleIndex() const {
  return CflatParser::RuleCompilationUnit;
}

void CflatParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void CflatParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any CflatParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::CompilationUnitContext* CflatParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, CflatParser::RuleCompilationUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    importStmts();
    setState(99);
    topDefs();
    setState(100);
    match(CflatParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationFileContext ------------------------------------------------------------------

CflatParser::DeclarationFileContext::DeclarationFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::ImportStmtsContext* CflatParser::DeclarationFileContext::importStmts() {
  return getRuleContext<CflatParser::ImportStmtsContext>(0);
}

tree::TerminalNode* CflatParser::DeclarationFileContext::EOF() {
  return getToken(CflatParser::EOF, 0);
}

std::vector<CflatParser::FuncDeclContext *> CflatParser::DeclarationFileContext::funcDecl() {
  return getRuleContexts<CflatParser::FuncDeclContext>();
}

CflatParser::FuncDeclContext* CflatParser::DeclarationFileContext::funcDecl(size_t i) {
  return getRuleContext<CflatParser::FuncDeclContext>(i);
}

std::vector<CflatParser::VarDeclContext *> CflatParser::DeclarationFileContext::varDecl() {
  return getRuleContexts<CflatParser::VarDeclContext>();
}

CflatParser::VarDeclContext* CflatParser::DeclarationFileContext::varDecl(size_t i) {
  return getRuleContext<CflatParser::VarDeclContext>(i);
}

std::vector<CflatParser::DefStructContext *> CflatParser::DeclarationFileContext::defStruct() {
  return getRuleContexts<CflatParser::DefStructContext>();
}

CflatParser::DefStructContext* CflatParser::DeclarationFileContext::defStruct(size_t i) {
  return getRuleContext<CflatParser::DefStructContext>(i);
}

std::vector<CflatParser::DefUnionContext *> CflatParser::DeclarationFileContext::defUnion() {
  return getRuleContexts<CflatParser::DefUnionContext>();
}

CflatParser::DefUnionContext* CflatParser::DeclarationFileContext::defUnion(size_t i) {
  return getRuleContext<CflatParser::DefUnionContext>(i);
}

std::vector<CflatParser::TypeDefContext *> CflatParser::DeclarationFileContext::typeDef() {
  return getRuleContexts<CflatParser::TypeDefContext>();
}

CflatParser::TypeDefContext* CflatParser::DeclarationFileContext::typeDef(size_t i) {
  return getRuleContext<CflatParser::TypeDefContext>(i);
}


size_t CflatParser::DeclarationFileContext::getRuleIndex() const {
  return CflatParser::RuleDeclarationFile;
}

void CflatParser::DeclarationFileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationFile(this);
}

void CflatParser::DeclarationFileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationFile(this);
}


antlrcpp::Any CflatParser::DeclarationFileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitDeclarationFile(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::DeclarationFileContext* CflatParser::declarationFile() {
  DeclarationFileContext *_localctx = _tracker.createInstance<DeclarationFileContext>(_ctx, getState());
  enterRule(_localctx, 2, CflatParser::RuleDeclarationFile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    importStmts();
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__13)
      | (1ULL << CflatParser::T__14)
      | (1ULL << CflatParser::T__15)
      | (1ULL << CflatParser::T__26))) != 0)) {
      setState(108);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(103);
        funcDecl();
        break;
      }

      case 2: {
        setState(104);
        varDecl();
        break;
      }

      case 3: {
        setState(105);
        defStruct();
        break;
      }

      case 4: {
        setState(106);
        defUnion();
        break;
      }

      case 5: {
        setState(107);
        typeDef();
        break;
      }

      default:
        break;
      }
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(113);
    match(CflatParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStmtsContext ------------------------------------------------------------------

CflatParser::ImportStmtsContext::ImportStmtsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::ImportStmtContext *> CflatParser::ImportStmtsContext::importStmt() {
  return getRuleContexts<CflatParser::ImportStmtContext>();
}

CflatParser::ImportStmtContext* CflatParser::ImportStmtsContext::importStmt(size_t i) {
  return getRuleContext<CflatParser::ImportStmtContext>(i);
}


size_t CflatParser::ImportStmtsContext::getRuleIndex() const {
  return CflatParser::RuleImportStmts;
}

void CflatParser::ImportStmtsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStmts(this);
}

void CflatParser::ImportStmtsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStmts(this);
}


antlrcpp::Any CflatParser::ImportStmtsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitImportStmts(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ImportStmtsContext* CflatParser::importStmts() {
  ImportStmtsContext *_localctx = _tracker.createInstance<ImportStmtsContext>(_ctx, getState());
  enterRule(_localctx, 4, CflatParser::RuleImportStmts);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CflatParser::T__0) {
      setState(115);
      importStmt();
      setState(120);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStmtContext ------------------------------------------------------------------

CflatParser::ImportStmtContext::ImportStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::LibidContext* CflatParser::ImportStmtContext::libid() {
  return getRuleContext<CflatParser::LibidContext>(0);
}


size_t CflatParser::ImportStmtContext::getRuleIndex() const {
  return CflatParser::RuleImportStmt;
}

void CflatParser::ImportStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStmt(this);
}

void CflatParser::ImportStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStmt(this);
}


antlrcpp::Any CflatParser::ImportStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitImportStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ImportStmtContext* CflatParser::importStmt() {
  ImportStmtContext *_localctx = _tracker.createInstance<ImportStmtContext>(_ctx, getState());
  enterRule(_localctx, 6, CflatParser::RuleImportStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(CflatParser::T__0);
    setState(122);
    libid();
    setState(123);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LibidContext ------------------------------------------------------------------

CflatParser::LibidContext::LibidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::NameContext *> CflatParser::LibidContext::name() {
  return getRuleContexts<CflatParser::NameContext>();
}

CflatParser::NameContext* CflatParser::LibidContext::name(size_t i) {
  return getRuleContext<CflatParser::NameContext>(i);
}


size_t CflatParser::LibidContext::getRuleIndex() const {
  return CflatParser::RuleLibid;
}

void CflatParser::LibidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibid(this);
}

void CflatParser::LibidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibid(this);
}


antlrcpp::Any CflatParser::LibidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitLibid(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::LibidContext* CflatParser::libid() {
  LibidContext *_localctx = _tracker.createInstance<LibidContext>(_ctx, getState());
  enterRule(_localctx, 8, CflatParser::RuleLibid);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    name();
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CflatParser::T__2) {
      setState(126);
      match(CflatParser::T__2);
      setState(127);
      name();
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

CflatParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CflatParser::NameContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}


size_t CflatParser::NameContext::getRuleIndex() const {
  return CflatParser::RuleName;
}

void CflatParser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void CflatParser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}


antlrcpp::Any CflatParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::NameContext* CflatParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 10, CflatParser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(CflatParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopDefsContext ------------------------------------------------------------------

CflatParser::TopDefsContext::TopDefsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::DefFuncContext *> CflatParser::TopDefsContext::defFunc() {
  return getRuleContexts<CflatParser::DefFuncContext>();
}

CflatParser::DefFuncContext* CflatParser::TopDefsContext::defFunc(size_t i) {
  return getRuleContext<CflatParser::DefFuncContext>(i);
}

std::vector<CflatParser::DefVarsContext *> CflatParser::TopDefsContext::defVars() {
  return getRuleContexts<CflatParser::DefVarsContext>();
}

CflatParser::DefVarsContext* CflatParser::TopDefsContext::defVars(size_t i) {
  return getRuleContext<CflatParser::DefVarsContext>(i);
}

std::vector<CflatParser::DefStructContext *> CflatParser::TopDefsContext::defStruct() {
  return getRuleContexts<CflatParser::DefStructContext>();
}

CflatParser::DefStructContext* CflatParser::TopDefsContext::defStruct(size_t i) {
  return getRuleContext<CflatParser::DefStructContext>(i);
}

std::vector<CflatParser::DefUnionContext *> CflatParser::TopDefsContext::defUnion() {
  return getRuleContexts<CflatParser::DefUnionContext>();
}

CflatParser::DefUnionContext* CflatParser::TopDefsContext::defUnion(size_t i) {
  return getRuleContext<CflatParser::DefUnionContext>(i);
}

std::vector<CflatParser::TypeDefContext *> CflatParser::TopDefsContext::typeDef() {
  return getRuleContexts<CflatParser::TypeDefContext>();
}

CflatParser::TypeDefContext* CflatParser::TopDefsContext::typeDef(size_t i) {
  return getRuleContext<CflatParser::TypeDefContext>(i);
}


size_t CflatParser::TopDefsContext::getRuleIndex() const {
  return CflatParser::RuleTopDefs;
}

void CflatParser::TopDefsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopDefs(this);
}

void CflatParser::TopDefsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopDefs(this);
}


antlrcpp::Any CflatParser::TopDefsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitTopDefs(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::TopDefsContext* CflatParser::topDefs() {
  TopDefsContext *_localctx = _tracker.createInstance<TopDefsContext>(_ctx, getState());
  enterRule(_localctx, 12, CflatParser::RuleTopDefs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__3)
      | (1ULL << CflatParser::T__4)
      | (1ULL << CflatParser::T__9)
      | (1ULL << CflatParser::T__13)
      | (1ULL << CflatParser::T__14)
      | (1ULL << CflatParser::T__19)
      | (1ULL << CflatParser::T__20)
      | (1ULL << CflatParser::T__21)
      | (1ULL << CflatParser::T__22)
      | (1ULL << CflatParser::T__23)
      | (1ULL << CflatParser::T__24)
      | (1ULL << CflatParser::T__25)
      | (1ULL << CflatParser::T__26))) != 0) || _la == CflatParser::Identifier) {
      setState(140);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1: {
        setState(135);
        defFunc();
        break;
      }

      case 2: {
        setState(136);
        defVars();
        break;
      }

      case 3: {
        setState(137);
        defStruct();
        break;
      }

      case 4: {
        setState(138);
        defUnion();
        break;
      }

      case 5: {
        setState(139);
        typeDef();
        break;
      }

      default:
        break;
      }
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefVarsContext ------------------------------------------------------------------

CflatParser::DefVarsContext::DefVarsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeContext* CflatParser::DefVarsContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}

std::vector<CflatParser::NameContext *> CflatParser::DefVarsContext::name() {
  return getRuleContexts<CflatParser::NameContext>();
}

CflatParser::NameContext* CflatParser::DefVarsContext::name(size_t i) {
  return getRuleContext<CflatParser::NameContext>(i);
}

std::vector<CflatParser::ExprContext *> CflatParser::DefVarsContext::expr() {
  return getRuleContexts<CflatParser::ExprContext>();
}

CflatParser::ExprContext* CflatParser::DefVarsContext::expr(size_t i) {
  return getRuleContext<CflatParser::ExprContext>(i);
}


size_t CflatParser::DefVarsContext::getRuleIndex() const {
  return CflatParser::RuleDefVars;
}

void CflatParser::DefVarsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefVars(this);
}

void CflatParser::DefVarsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefVars(this);
}


antlrcpp::Any CflatParser::DefVarsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitDefVars(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::DefVarsContext* CflatParser::defVars() {
  DefVarsContext *_localctx = _tracker.createInstance<DefVarsContext>(_ctx, getState());
  enterRule(_localctx, 14, CflatParser::RuleDefVars);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::T__3) {
      setState(145);
      match(CflatParser::T__3);
    }
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::T__4) {
      setState(148);
      match(CflatParser::T__4);
    }
    setState(151);
    type();
    setState(152);
    name();
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::T__5) {
      setState(153);
      match(CflatParser::T__5);
      setState(154);
      expr(0);
    }
    setState(165);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CflatParser::T__6) {
      setState(157);
      match(CflatParser::T__6);
      setState(158);
      name();
      setState(161);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CflatParser::T__5) {
        setState(159);
        match(CflatParser::T__5);
        setState(160);
        expr(0);
      }
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(168);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefFuncContext ------------------------------------------------------------------

CflatParser::DefFuncContext::DefFuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeRefContext* CflatParser::DefFuncContext::typeRef() {
  return getRuleContext<CflatParser::TypeRefContext>(0);
}

CflatParser::NameContext* CflatParser::DefFuncContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}

CflatParser::ParamsContext* CflatParser::DefFuncContext::params() {
  return getRuleContext<CflatParser::ParamsContext>(0);
}

CflatParser::BlockContext* CflatParser::DefFuncContext::block() {
  return getRuleContext<CflatParser::BlockContext>(0);
}


size_t CflatParser::DefFuncContext::getRuleIndex() const {
  return CflatParser::RuleDefFunc;
}

void CflatParser::DefFuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefFunc(this);
}

void CflatParser::DefFuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefFunc(this);
}


antlrcpp::Any CflatParser::DefFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitDefFunc(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::DefFuncContext* CflatParser::defFunc() {
  DefFuncContext *_localctx = _tracker.createInstance<DefFuncContext>(_ctx, getState());
  enterRule(_localctx, 16, CflatParser::RuleDefFunc);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::T__3) {
      setState(170);
      match(CflatParser::T__3);
    }
    setState(173);
    typeRef();
    setState(174);
    name();
    setState(175);
    match(CflatParser::T__7);
    setState(176);
    params();
    setState(177);
    match(CflatParser::T__8);
    setState(178);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

CflatParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::FixedParamsContext* CflatParser::ParamsContext::fixedParams() {
  return getRuleContext<CflatParser::FixedParamsContext>(0);
}


size_t CflatParser::ParamsContext::getRuleIndex() const {
  return CflatParser::RuleParams;
}

void CflatParser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}

void CflatParser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}


antlrcpp::Any CflatParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ParamsContext* CflatParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 18, CflatParser::RuleParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(186);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(180);
      match(CflatParser::T__9);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(181);
      fixedParams();
      setState(184);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CflatParser::T__6) {
        setState(182);
        match(CflatParser::T__6);
        setState(183);
        match(CflatParser::T__10);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FixedParamsContext ------------------------------------------------------------------

CflatParser::FixedParamsContext::FixedParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::ParamContext *> CflatParser::FixedParamsContext::param() {
  return getRuleContexts<CflatParser::ParamContext>();
}

CflatParser::ParamContext* CflatParser::FixedParamsContext::param(size_t i) {
  return getRuleContext<CflatParser::ParamContext>(i);
}


size_t CflatParser::FixedParamsContext::getRuleIndex() const {
  return CflatParser::RuleFixedParams;
}

void CflatParser::FixedParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixedParams(this);
}

void CflatParser::FixedParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixedParams(this);
}


antlrcpp::Any CflatParser::FixedParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitFixedParams(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::FixedParamsContext* CflatParser::fixedParams() {
  FixedParamsContext *_localctx = _tracker.createInstance<FixedParamsContext>(_ctx, getState());
  enterRule(_localctx, 20, CflatParser::RuleFixedParams);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(188);
    param();
    setState(193);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(189);
        match(CflatParser::T__6);
        setState(190);
        param(); 
      }
      setState(195);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

CflatParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeContext* CflatParser::ParamContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}

CflatParser::NameContext* CflatParser::ParamContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}


size_t CflatParser::ParamContext::getRuleIndex() const {
  return CflatParser::RuleParam;
}

void CflatParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void CflatParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


antlrcpp::Any CflatParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ParamContext* CflatParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 22, CflatParser::RuleParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::T__4) {
      setState(196);
      match(CflatParser::T__4);
    }
    setState(199);
    type();
    setState(200);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

CflatParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::DefVarListContext* CflatParser::BlockContext::defVarList() {
  return getRuleContext<CflatParser::DefVarListContext>(0);
}

CflatParser::StmtsContext* CflatParser::BlockContext::stmts() {
  return getRuleContext<CflatParser::StmtsContext>(0);
}


size_t CflatParser::BlockContext::getRuleIndex() const {
  return CflatParser::RuleBlock;
}

void CflatParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void CflatParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any CflatParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::BlockContext* CflatParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 24, CflatParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(CflatParser::T__11);
    setState(203);
    defVarList();
    setState(204);
    stmts();
    setState(205);
    match(CflatParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefVarListContext ------------------------------------------------------------------

CflatParser::DefVarListContext::DefVarListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::DefVarsContext *> CflatParser::DefVarListContext::defVars() {
  return getRuleContexts<CflatParser::DefVarsContext>();
}

CflatParser::DefVarsContext* CflatParser::DefVarListContext::defVars(size_t i) {
  return getRuleContext<CflatParser::DefVarsContext>(i);
}


size_t CflatParser::DefVarListContext::getRuleIndex() const {
  return CflatParser::RuleDefVarList;
}

void CflatParser::DefVarListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefVarList(this);
}

void CflatParser::DefVarListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefVarList(this);
}


antlrcpp::Any CflatParser::DefVarListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitDefVarList(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::DefVarListContext* CflatParser::defVarList() {
  DefVarListContext *_localctx = _tracker.createInstance<DefVarListContext>(_ctx, getState());
  enterRule(_localctx, 26, CflatParser::RuleDefVarList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(210);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(207);
        defVars(); 
      }
      setState(212);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefStructContext ------------------------------------------------------------------

CflatParser::DefStructContext::DefStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::NameContext* CflatParser::DefStructContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}

CflatParser::MemberListContext* CflatParser::DefStructContext::memberList() {
  return getRuleContext<CflatParser::MemberListContext>(0);
}


size_t CflatParser::DefStructContext::getRuleIndex() const {
  return CflatParser::RuleDefStruct;
}

void CflatParser::DefStructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefStruct(this);
}

void CflatParser::DefStructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefStruct(this);
}


antlrcpp::Any CflatParser::DefStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitDefStruct(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::DefStructContext* CflatParser::defStruct() {
  DefStructContext *_localctx = _tracker.createInstance<DefStructContext>(_ctx, getState());
  enterRule(_localctx, 28, CflatParser::RuleDefStruct);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(CflatParser::T__13);
    setState(214);
    name();
    setState(215);
    memberList();
    setState(216);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefUnionContext ------------------------------------------------------------------

CflatParser::DefUnionContext::DefUnionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::NameContext* CflatParser::DefUnionContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}

CflatParser::MemberListContext* CflatParser::DefUnionContext::memberList() {
  return getRuleContext<CflatParser::MemberListContext>(0);
}


size_t CflatParser::DefUnionContext::getRuleIndex() const {
  return CflatParser::RuleDefUnion;
}

void CflatParser::DefUnionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefUnion(this);
}

void CflatParser::DefUnionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefUnion(this);
}


antlrcpp::Any CflatParser::DefUnionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitDefUnion(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::DefUnionContext* CflatParser::defUnion() {
  DefUnionContext *_localctx = _tracker.createInstance<DefUnionContext>(_ctx, getState());
  enterRule(_localctx, 30, CflatParser::RuleDefUnion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(CflatParser::T__14);
    setState(219);
    name();
    setState(220);
    memberList();
    setState(221);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberListContext ------------------------------------------------------------------

CflatParser::MemberListContext::MemberListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::SlotContext *> CflatParser::MemberListContext::slot() {
  return getRuleContexts<CflatParser::SlotContext>();
}

CflatParser::SlotContext* CflatParser::MemberListContext::slot(size_t i) {
  return getRuleContext<CflatParser::SlotContext>(i);
}


size_t CflatParser::MemberListContext::getRuleIndex() const {
  return CflatParser::RuleMemberList;
}

void CflatParser::MemberListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberList(this);
}

void CflatParser::MemberListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberList(this);
}


antlrcpp::Any CflatParser::MemberListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitMemberList(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::MemberListContext* CflatParser::memberList() {
  MemberListContext *_localctx = _tracker.createInstance<MemberListContext>(_ctx, getState());
  enterRule(_localctx, 32, CflatParser::RuleMemberList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(CflatParser::T__11);
    setState(229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__9)
      | (1ULL << CflatParser::T__13)
      | (1ULL << CflatParser::T__14)
      | (1ULL << CflatParser::T__19)
      | (1ULL << CflatParser::T__20)
      | (1ULL << CflatParser::T__21)
      | (1ULL << CflatParser::T__22)
      | (1ULL << CflatParser::T__23)
      | (1ULL << CflatParser::T__24)
      | (1ULL << CflatParser::T__25))) != 0) || _la == CflatParser::Identifier) {
      setState(224);
      slot();
      setState(225);
      match(CflatParser::T__1);
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(232);
    match(CflatParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SlotContext ------------------------------------------------------------------

CflatParser::SlotContext::SlotContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeContext* CflatParser::SlotContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}

CflatParser::NameContext* CflatParser::SlotContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}


size_t CflatParser::SlotContext::getRuleIndex() const {
  return CflatParser::RuleSlot;
}

void CflatParser::SlotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSlot(this);
}

void CflatParser::SlotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSlot(this);
}


antlrcpp::Any CflatParser::SlotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitSlot(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::SlotContext* CflatParser::slot() {
  SlotContext *_localctx = _tracker.createInstance<SlotContext>(_ctx, getState());
  enterRule(_localctx, 34, CflatParser::RuleSlot);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    type();
    setState(235);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDeclContext ------------------------------------------------------------------

CflatParser::FuncDeclContext::FuncDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeRefContext* CflatParser::FuncDeclContext::typeRef() {
  return getRuleContext<CflatParser::TypeRefContext>(0);
}

CflatParser::NameContext* CflatParser::FuncDeclContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}

CflatParser::ParamsContext* CflatParser::FuncDeclContext::params() {
  return getRuleContext<CflatParser::ParamsContext>(0);
}


size_t CflatParser::FuncDeclContext::getRuleIndex() const {
  return CflatParser::RuleFuncDecl;
}

void CflatParser::FuncDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDecl(this);
}

void CflatParser::FuncDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDecl(this);
}


antlrcpp::Any CflatParser::FuncDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitFuncDecl(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::FuncDeclContext* CflatParser::funcDecl() {
  FuncDeclContext *_localctx = _tracker.createInstance<FuncDeclContext>(_ctx, getState());
  enterRule(_localctx, 36, CflatParser::RuleFuncDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(CflatParser::T__15);
    setState(238);
    typeRef();
    setState(239);
    name();
    setState(240);
    match(CflatParser::T__7);
    setState(241);
    params();
    setState(242);
    match(CflatParser::T__8);
    setState(243);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

CflatParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeContext* CflatParser::VarDeclContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}

CflatParser::NameContext* CflatParser::VarDeclContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}


size_t CflatParser::VarDeclContext::getRuleIndex() const {
  return CflatParser::RuleVarDecl;
}

void CflatParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void CflatParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


antlrcpp::Any CflatParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::VarDeclContext* CflatParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 38, CflatParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(CflatParser::T__15);
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::T__4) {
      setState(246);
      match(CflatParser::T__4);
    }
    setState(249);
    type();
    setState(250);
    name();
    setState(251);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

CflatParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeRefContext* CflatParser::TypeContext::typeRef() {
  return getRuleContext<CflatParser::TypeRefContext>(0);
}


size_t CflatParser::TypeContext::getRuleIndex() const {
  return CflatParser::RuleType;
}

void CflatParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void CflatParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any CflatParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::TypeContext* CflatParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 40, CflatParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    typeRef();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeRefContext ------------------------------------------------------------------

CflatParser::TypeRefContext::TypeRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeRefBaseContext* CflatParser::TypeRefContext::typeRefBase() {
  return getRuleContext<CflatParser::TypeRefBaseContext>(0);
}

std::vector<CflatParser::ParamTypeRefsContext *> CflatParser::TypeRefContext::paramTypeRefs() {
  return getRuleContexts<CflatParser::ParamTypeRefsContext>();
}

CflatParser::ParamTypeRefsContext* CflatParser::TypeRefContext::paramTypeRefs(size_t i) {
  return getRuleContext<CflatParser::ParamTypeRefsContext>(i);
}

std::vector<CflatParser::IntegerContext *> CflatParser::TypeRefContext::integer() {
  return getRuleContexts<CflatParser::IntegerContext>();
}

CflatParser::IntegerContext* CflatParser::TypeRefContext::integer(size_t i) {
  return getRuleContext<CflatParser::IntegerContext>(i);
}


size_t CflatParser::TypeRefContext::getRuleIndex() const {
  return CflatParser::RuleTypeRef;
}

void CflatParser::TypeRefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeRef(this);
}

void CflatParser::TypeRefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeRef(this);
}


antlrcpp::Any CflatParser::TypeRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitTypeRef(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::TypeRefContext* CflatParser::typeRef() {
  TypeRefContext *_localctx = _tracker.createInstance<TypeRefContext>(_ctx, getState());
  enterRule(_localctx, 42, CflatParser::RuleTypeRef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(255);
    typeRefBase();
    setState(268);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(266);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case CflatParser::T__16: {
            setState(256);
            match(CflatParser::T__16);
            setState(258);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 71) & ~ 0x3fULL) == 0) &&
              ((1ULL << (_la - 71)) & ((1ULL << (CflatParser::HexLiteral - 71))
              | (1ULL << (CflatParser::DecimalLiteral - 71))
              | (1ULL << (CflatParser::OctalLiteral - 71)))) != 0)) {
              setState(257);
              integer();
            }
            setState(260);
            match(CflatParser::T__17);
            break;
          }

          case CflatParser::T__18: {
            setState(261);
            match(CflatParser::T__18);
            break;
          }

          case CflatParser::T__7: {
            setState(262);
            match(CflatParser::T__7);
            setState(263);
            paramTypeRefs();
            setState(264);
            match(CflatParser::T__8);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(270);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerContext ------------------------------------------------------------------

CflatParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CflatParser::IntegerContext::HexLiteral() {
  return getToken(CflatParser::HexLiteral, 0);
}

tree::TerminalNode* CflatParser::IntegerContext::DecimalLiteral() {
  return getToken(CflatParser::DecimalLiteral, 0);
}

tree::TerminalNode* CflatParser::IntegerContext::OctalLiteral() {
  return getToken(CflatParser::OctalLiteral, 0);
}


size_t CflatParser::IntegerContext::getRuleIndex() const {
  return CflatParser::RuleInteger;
}

void CflatParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}

void CflatParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}


antlrcpp::Any CflatParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::IntegerContext* CflatParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 44, CflatParser::RuleInteger);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    _la = _input->LA(1);
    if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CflatParser::HexLiteral - 71))
      | (1ULL << (CflatParser::DecimalLiteral - 71))
      | (1ULL << (CflatParser::OctalLiteral - 71)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamTypeRefsContext ------------------------------------------------------------------

CflatParser::ParamTypeRefsContext::ParamTypeRefsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::FixedParamTypeRefsContext* CflatParser::ParamTypeRefsContext::fixedParamTypeRefs() {
  return getRuleContext<CflatParser::FixedParamTypeRefsContext>(0);
}


size_t CflatParser::ParamTypeRefsContext::getRuleIndex() const {
  return CflatParser::RuleParamTypeRefs;
}

void CflatParser::ParamTypeRefsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamTypeRefs(this);
}

void CflatParser::ParamTypeRefsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamTypeRefs(this);
}


antlrcpp::Any CflatParser::ParamTypeRefsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitParamTypeRefs(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ParamTypeRefsContext* CflatParser::paramTypeRefs() {
  ParamTypeRefsContext *_localctx = _tracker.createInstance<ParamTypeRefsContext>(_ctx, getState());
  enterRule(_localctx, 46, CflatParser::RuleParamTypeRefs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(273);
      match(CflatParser::T__9);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(274);
      fixedParamTypeRefs();
      setState(277);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CflatParser::T__6) {
        setState(275);
        match(CflatParser::T__6);
        setState(276);
        match(CflatParser::T__10);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FixedParamTypeRefsContext ------------------------------------------------------------------

CflatParser::FixedParamTypeRefsContext::FixedParamTypeRefsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::TypeRefContext *> CflatParser::FixedParamTypeRefsContext::typeRef() {
  return getRuleContexts<CflatParser::TypeRefContext>();
}

CflatParser::TypeRefContext* CflatParser::FixedParamTypeRefsContext::typeRef(size_t i) {
  return getRuleContext<CflatParser::TypeRefContext>(i);
}


size_t CflatParser::FixedParamTypeRefsContext::getRuleIndex() const {
  return CflatParser::RuleFixedParamTypeRefs;
}

void CflatParser::FixedParamTypeRefsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixedParamTypeRefs(this);
}

void CflatParser::FixedParamTypeRefsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixedParamTypeRefs(this);
}


antlrcpp::Any CflatParser::FixedParamTypeRefsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitFixedParamTypeRefs(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::FixedParamTypeRefsContext* CflatParser::fixedParamTypeRefs() {
  FixedParamTypeRefsContext *_localctx = _tracker.createInstance<FixedParamTypeRefsContext>(_ctx, getState());
  enterRule(_localctx, 48, CflatParser::RuleFixedParamTypeRefs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(282);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::T__4) {
      setState(281);
      match(CflatParser::T__4);
    }
    setState(284);
    typeRef();
    setState(292);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(285);
        match(CflatParser::T__6);
        setState(287);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CflatParser::T__4) {
          setState(286);
          match(CflatParser::T__4);
        }
        setState(289);
        typeRef(); 
      }
      setState(294);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeRefBaseContext ------------------------------------------------------------------

CflatParser::TypeRefBaseContext::TypeRefBaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CflatParser::TypeRefBaseContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}


size_t CflatParser::TypeRefBaseContext::getRuleIndex() const {
  return CflatParser::RuleTypeRefBase;
}

void CflatParser::TypeRefBaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeRefBase(this);
}

void CflatParser::TypeRefBaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeRefBase(this);
}


antlrcpp::Any CflatParser::TypeRefBaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitTypeRefBase(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::TypeRefBaseContext* CflatParser::typeRefBase() {
  TypeRefBaseContext *_localctx = _tracker.createInstance<TypeRefBaseContext>(_ctx, getState());
  enterRule(_localctx, 50, CflatParser::RuleTypeRefBase);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(315);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(295);
      match(CflatParser::T__9);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(296);
      match(CflatParser::T__19);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(297);
      match(CflatParser::T__20);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(298);
      match(CflatParser::T__21);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(299);
      match(CflatParser::T__22);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(300);
      match(CflatParser::T__23);
      setState(301);
      match(CflatParser::T__19);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(302);
      match(CflatParser::T__23);
      setState(303);
      match(CflatParser::T__20);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(304);
      match(CflatParser::T__23);
      setState(305);
      match(CflatParser::T__21);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(306);
      match(CflatParser::T__23);
      setState(307);
      match(CflatParser::T__22);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(308);
      match(CflatParser::T__24);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(309);
      match(CflatParser::T__25);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(310);
      match(CflatParser::T__13);
      setState(311);
      match(CflatParser::Identifier);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(312);
      match(CflatParser::T__14);
      setState(313);
      match(CflatParser::Identifier);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(314);
      match(CflatParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefContext ------------------------------------------------------------------

CflatParser::TypeDefContext::TypeDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeRefContext* CflatParser::TypeDefContext::typeRef() {
  return getRuleContext<CflatParser::TypeRefContext>(0);
}

tree::TerminalNode* CflatParser::TypeDefContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}


size_t CflatParser::TypeDefContext::getRuleIndex() const {
  return CflatParser::RuleTypeDef;
}

void CflatParser::TypeDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDef(this);
}

void CflatParser::TypeDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDef(this);
}


antlrcpp::Any CflatParser::TypeDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitTypeDef(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::TypeDefContext* CflatParser::typeDef() {
  TypeDefContext *_localctx = _tracker.createInstance<TypeDefContext>(_ctx, getState());
  enterRule(_localctx, 52, CflatParser::RuleTypeDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    match(CflatParser::T__26);
    setState(318);
    typeRef();
    setState(319);
    match(CflatParser::Identifier);
    setState(320);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtsContext ------------------------------------------------------------------

CflatParser::StmtsContext::StmtsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::StmtContext *> CflatParser::StmtsContext::stmt() {
  return getRuleContexts<CflatParser::StmtContext>();
}

CflatParser::StmtContext* CflatParser::StmtsContext::stmt(size_t i) {
  return getRuleContext<CflatParser::StmtContext>(i);
}


size_t CflatParser::StmtsContext::getRuleIndex() const {
  return CflatParser::RuleStmts;
}

void CflatParser::StmtsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmts(this);
}

void CflatParser::StmtsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmts(this);
}


antlrcpp::Any CflatParser::StmtsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitStmts(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::StmtsContext* CflatParser::stmts() {
  StmtsContext *_localctx = _tracker.createInstance<StmtsContext>(_ctx, getState());
  enterRule(_localctx, 54, CflatParser::RuleStmts);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__1)
      | (1ULL << CflatParser::T__7)
      | (1ULL << CflatParser::T__11)
      | (1ULL << CflatParser::T__18)
      | (1ULL << CflatParser::T__28)
      | (1ULL << CflatParser::T__30)
      | (1ULL << CflatParser::T__31)
      | (1ULL << CflatParser::T__32)
      | (1ULL << CflatParser::T__33)
      | (1ULL << CflatParser::T__36)
      | (1ULL << CflatParser::T__37)
      | (1ULL << CflatParser::T__38)
      | (1ULL << CflatParser::T__39)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46)
      | (1ULL << CflatParser::T__47))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (CflatParser::T__68 - 69))
      | (1ULL << (CflatParser::T__69 - 69))
      | (1ULL << (CflatParser::HexLiteral - 69))
      | (1ULL << (CflatParser::DecimalLiteral - 69))
      | (1ULL << (CflatParser::OctalLiteral - 69))
      | (1ULL << (CflatParser::BoolLiteral - 69))
      | (1ULL << (CflatParser::FloatingPointLiteral - 69))
      | (1ULL << (CflatParser::CharacterLiteral - 69))
      | (1ULL << (CflatParser::StringLiteral - 69))
      | (1ULL << (CflatParser::Identifier - 69)))) != 0)) {
      setState(322);
      stmt();
      setState(327);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

CflatParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::LabeledStmtContext* CflatParser::StmtContext::labeledStmt() {
  return getRuleContext<CflatParser::LabeledStmtContext>(0);
}

CflatParser::ExprContext* CflatParser::StmtContext::expr() {
  return getRuleContext<CflatParser::ExprContext>(0);
}

CflatParser::BlockContext* CflatParser::StmtContext::block() {
  return getRuleContext<CflatParser::BlockContext>(0);
}

CflatParser::IfStmtContext* CflatParser::StmtContext::ifStmt() {
  return getRuleContext<CflatParser::IfStmtContext>(0);
}

CflatParser::WhileStmtContext* CflatParser::StmtContext::whileStmt() {
  return getRuleContext<CflatParser::WhileStmtContext>(0);
}

CflatParser::DowhileStmtContext* CflatParser::StmtContext::dowhileStmt() {
  return getRuleContext<CflatParser::DowhileStmtContext>(0);
}

CflatParser::ForStmtContext* CflatParser::StmtContext::forStmt() {
  return getRuleContext<CflatParser::ForStmtContext>(0);
}

CflatParser::SwitchStmtContext* CflatParser::StmtContext::switchStmt() {
  return getRuleContext<CflatParser::SwitchStmtContext>(0);
}

CflatParser::BreakStmtContext* CflatParser::StmtContext::breakStmt() {
  return getRuleContext<CflatParser::BreakStmtContext>(0);
}

CflatParser::ContinueStmtContext* CflatParser::StmtContext::continueStmt() {
  return getRuleContext<CflatParser::ContinueStmtContext>(0);
}

CflatParser::GotoStmtContext* CflatParser::StmtContext::gotoStmt() {
  return getRuleContext<CflatParser::GotoStmtContext>(0);
}

CflatParser::ReturnStmtContext* CflatParser::StmtContext::returnStmt() {
  return getRuleContext<CflatParser::ReturnStmtContext>(0);
}


size_t CflatParser::StmtContext::getRuleIndex() const {
  return CflatParser::RuleStmt;
}

void CflatParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void CflatParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any CflatParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::StmtContext* CflatParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 56, CflatParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(343);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(328);
      match(CflatParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(329);
      labeledStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(330);
      expr(0);
      setState(331);
      match(CflatParser::T__1);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(333);
      block();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(334);
      ifStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(335);
      whileStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(336);
      dowhileStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(337);
      forStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(338);
      switchStmt();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(339);
      breakStmt();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(340);
      continueStmt();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(341);
      gotoStmt();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(342);
      returnStmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStmtContext ------------------------------------------------------------------

CflatParser::LabeledStmtContext::LabeledStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CflatParser::LabeledStmtContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}

CflatParser::StmtContext* CflatParser::LabeledStmtContext::stmt() {
  return getRuleContext<CflatParser::StmtContext>(0);
}


size_t CflatParser::LabeledStmtContext::getRuleIndex() const {
  return CflatParser::RuleLabeledStmt;
}

void CflatParser::LabeledStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStmt(this);
}

void CflatParser::LabeledStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStmt(this);
}


antlrcpp::Any CflatParser::LabeledStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitLabeledStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::LabeledStmtContext* CflatParser::labeledStmt() {
  LabeledStmtContext *_localctx = _tracker.createInstance<LabeledStmtContext>(_ctx, getState());
  enterRule(_localctx, 58, CflatParser::RuleLabeledStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    match(CflatParser::Identifier);
    setState(346);
    match(CflatParser::T__27);
    setState(347);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

CflatParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::ExprContext* CflatParser::IfStmtContext::expr() {
  return getRuleContext<CflatParser::ExprContext>(0);
}

std::vector<CflatParser::StmtContext *> CflatParser::IfStmtContext::stmt() {
  return getRuleContexts<CflatParser::StmtContext>();
}

CflatParser::StmtContext* CflatParser::IfStmtContext::stmt(size_t i) {
  return getRuleContext<CflatParser::StmtContext>(i);
}


size_t CflatParser::IfStmtContext::getRuleIndex() const {
  return CflatParser::RuleIfStmt;
}

void CflatParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}

void CflatParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}


antlrcpp::Any CflatParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::IfStmtContext* CflatParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 60, CflatParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    match(CflatParser::T__28);
    setState(350);
    match(CflatParser::T__7);
    setState(351);
    expr(0);
    setState(352);
    match(CflatParser::T__8);
    setState(353);
    stmt();
    setState(356);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(354);
      match(CflatParser::T__29);
      setState(355);
      stmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

CflatParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::ExprContext* CflatParser::WhileStmtContext::expr() {
  return getRuleContext<CflatParser::ExprContext>(0);
}

CflatParser::StmtContext* CflatParser::WhileStmtContext::stmt() {
  return getRuleContext<CflatParser::StmtContext>(0);
}


size_t CflatParser::WhileStmtContext::getRuleIndex() const {
  return CflatParser::RuleWhileStmt;
}

void CflatParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}

void CflatParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}


antlrcpp::Any CflatParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::WhileStmtContext* CflatParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 62, CflatParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    match(CflatParser::T__30);
    setState(359);
    match(CflatParser::T__7);
    setState(360);
    expr(0);
    setState(361);
    match(CflatParser::T__8);
    setState(362);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DowhileStmtContext ------------------------------------------------------------------

CflatParser::DowhileStmtContext::DowhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::StmtContext* CflatParser::DowhileStmtContext::stmt() {
  return getRuleContext<CflatParser::StmtContext>(0);
}

CflatParser::ExprContext* CflatParser::DowhileStmtContext::expr() {
  return getRuleContext<CflatParser::ExprContext>(0);
}


size_t CflatParser::DowhileStmtContext::getRuleIndex() const {
  return CflatParser::RuleDowhileStmt;
}

void CflatParser::DowhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDowhileStmt(this);
}

void CflatParser::DowhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDowhileStmt(this);
}


antlrcpp::Any CflatParser::DowhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitDowhileStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::DowhileStmtContext* CflatParser::dowhileStmt() {
  DowhileStmtContext *_localctx = _tracker.createInstance<DowhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 64, CflatParser::RuleDowhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    match(CflatParser::T__31);
    setState(365);
    stmt();
    setState(366);
    match(CflatParser::T__30);
    setState(367);
    match(CflatParser::T__7);
    setState(368);
    expr(0);
    setState(369);
    match(CflatParser::T__8);
    setState(370);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

CflatParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::ExprContext *> CflatParser::ForStmtContext::expr() {
  return getRuleContexts<CflatParser::ExprContext>();
}

CflatParser::ExprContext* CflatParser::ForStmtContext::expr(size_t i) {
  return getRuleContext<CflatParser::ExprContext>(i);
}

CflatParser::StmtContext* CflatParser::ForStmtContext::stmt() {
  return getRuleContext<CflatParser::StmtContext>(0);
}


size_t CflatParser::ForStmtContext::getRuleIndex() const {
  return CflatParser::RuleForStmt;
}

void CflatParser::ForStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStmt(this);
}

void CflatParser::ForStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStmt(this);
}


antlrcpp::Any CflatParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ForStmtContext* CflatParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 66, CflatParser::RuleForStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    match(CflatParser::T__32);
    setState(373);
    match(CflatParser::T__7);
    setState(375);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__7)
      | (1ULL << CflatParser::T__18)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46)
      | (1ULL << CflatParser::T__47))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (CflatParser::T__68 - 69))
      | (1ULL << (CflatParser::T__69 - 69))
      | (1ULL << (CflatParser::HexLiteral - 69))
      | (1ULL << (CflatParser::DecimalLiteral - 69))
      | (1ULL << (CflatParser::OctalLiteral - 69))
      | (1ULL << (CflatParser::BoolLiteral - 69))
      | (1ULL << (CflatParser::FloatingPointLiteral - 69))
      | (1ULL << (CflatParser::CharacterLiteral - 69))
      | (1ULL << (CflatParser::StringLiteral - 69))
      | (1ULL << (CflatParser::Identifier - 69)))) != 0)) {
      setState(374);
      expr(0);
    }
    setState(377);
    match(CflatParser::T__1);
    setState(379);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__7)
      | (1ULL << CflatParser::T__18)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46)
      | (1ULL << CflatParser::T__47))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (CflatParser::T__68 - 69))
      | (1ULL << (CflatParser::T__69 - 69))
      | (1ULL << (CflatParser::HexLiteral - 69))
      | (1ULL << (CflatParser::DecimalLiteral - 69))
      | (1ULL << (CflatParser::OctalLiteral - 69))
      | (1ULL << (CflatParser::BoolLiteral - 69))
      | (1ULL << (CflatParser::FloatingPointLiteral - 69))
      | (1ULL << (CflatParser::CharacterLiteral - 69))
      | (1ULL << (CflatParser::StringLiteral - 69))
      | (1ULL << (CflatParser::Identifier - 69)))) != 0)) {
      setState(378);
      expr(0);
    }
    setState(381);
    match(CflatParser::T__1);
    setState(382);
    expr(0);
    setState(383);
    match(CflatParser::T__8);
    setState(384);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStmtContext ------------------------------------------------------------------

CflatParser::SwitchStmtContext::SwitchStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::ExprContext* CflatParser::SwitchStmtContext::expr() {
  return getRuleContext<CflatParser::ExprContext>(0);
}

CflatParser::CaseClausesContext* CflatParser::SwitchStmtContext::caseClauses() {
  return getRuleContext<CflatParser::CaseClausesContext>(0);
}


size_t CflatParser::SwitchStmtContext::getRuleIndex() const {
  return CflatParser::RuleSwitchStmt;
}

void CflatParser::SwitchStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStmt(this);
}

void CflatParser::SwitchStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStmt(this);
}


antlrcpp::Any CflatParser::SwitchStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitSwitchStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::SwitchStmtContext* CflatParser::switchStmt() {
  SwitchStmtContext *_localctx = _tracker.createInstance<SwitchStmtContext>(_ctx, getState());
  enterRule(_localctx, 68, CflatParser::RuleSwitchStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    match(CflatParser::T__33);
    setState(387);
    match(CflatParser::T__7);
    setState(388);
    expr(0);
    setState(389);
    match(CflatParser::T__8);
    setState(390);
    match(CflatParser::T__11);
    setState(391);
    caseClauses();
    setState(392);
    match(CflatParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseClausesContext ------------------------------------------------------------------

CflatParser::CaseClausesContext::CaseClausesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::CaseClauseContext *> CflatParser::CaseClausesContext::caseClause() {
  return getRuleContexts<CflatParser::CaseClauseContext>();
}

CflatParser::CaseClauseContext* CflatParser::CaseClausesContext::caseClause(size_t i) {
  return getRuleContext<CflatParser::CaseClauseContext>(i);
}

CflatParser::DefaultClauseContext* CflatParser::CaseClausesContext::defaultClause() {
  return getRuleContext<CflatParser::DefaultClauseContext>(0);
}


size_t CflatParser::CaseClausesContext::getRuleIndex() const {
  return CflatParser::RuleCaseClauses;
}

void CflatParser::CaseClausesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseClauses(this);
}

void CflatParser::CaseClausesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseClauses(this);
}


antlrcpp::Any CflatParser::CaseClausesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitCaseClauses(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::CaseClausesContext* CflatParser::caseClauses() {
  CaseClausesContext *_localctx = _tracker.createInstance<CaseClausesContext>(_ctx, getState());
  enterRule(_localctx, 70, CflatParser::RuleCaseClauses);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CflatParser::T__34) {
      setState(394);
      caseClause();
      setState(399);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::T__35) {
      setState(400);
      defaultClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseClauseContext ------------------------------------------------------------------

CflatParser::CaseClauseContext::CaseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::CasesContext* CflatParser::CaseClauseContext::cases() {
  return getRuleContext<CflatParser::CasesContext>(0);
}

CflatParser::CaseBodyContext* CflatParser::CaseClauseContext::caseBody() {
  return getRuleContext<CflatParser::CaseBodyContext>(0);
}


size_t CflatParser::CaseClauseContext::getRuleIndex() const {
  return CflatParser::RuleCaseClause;
}

void CflatParser::CaseClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseClause(this);
}

void CflatParser::CaseClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseClause(this);
}


antlrcpp::Any CflatParser::CaseClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitCaseClause(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::CaseClauseContext* CflatParser::caseClause() {
  CaseClauseContext *_localctx = _tracker.createInstance<CaseClauseContext>(_ctx, getState());
  enterRule(_localctx, 72, CflatParser::RuleCaseClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    cases();
    setState(404);
    caseBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CasesContext ------------------------------------------------------------------

CflatParser::CasesContext::CasesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::PrimaryContext *> CflatParser::CasesContext::primary() {
  return getRuleContexts<CflatParser::PrimaryContext>();
}

CflatParser::PrimaryContext* CflatParser::CasesContext::primary(size_t i) {
  return getRuleContext<CflatParser::PrimaryContext>(i);
}


size_t CflatParser::CasesContext::getRuleIndex() const {
  return CflatParser::RuleCases;
}

void CflatParser::CasesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCases(this);
}

void CflatParser::CasesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCases(this);
}


antlrcpp::Any CflatParser::CasesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitCases(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::CasesContext* CflatParser::cases() {
  CasesContext *_localctx = _tracker.createInstance<CasesContext>(_ctx, getState());
  enterRule(_localctx, 74, CflatParser::RuleCases);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(410); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(406);
      match(CflatParser::T__34);
      setState(407);
      primary();
      setState(408);
      match(CflatParser::T__27);
      setState(412); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CflatParser::T__34);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultClauseContext ------------------------------------------------------------------

CflatParser::DefaultClauseContext::DefaultClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::CaseBodyContext* CflatParser::DefaultClauseContext::caseBody() {
  return getRuleContext<CflatParser::CaseBodyContext>(0);
}


size_t CflatParser::DefaultClauseContext::getRuleIndex() const {
  return CflatParser::RuleDefaultClause;
}

void CflatParser::DefaultClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultClause(this);
}

void CflatParser::DefaultClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultClause(this);
}


antlrcpp::Any CflatParser::DefaultClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitDefaultClause(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::DefaultClauseContext* CflatParser::defaultClause() {
  DefaultClauseContext *_localctx = _tracker.createInstance<DefaultClauseContext>(_ctx, getState());
  enterRule(_localctx, 76, CflatParser::RuleDefaultClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    match(CflatParser::T__35);
    setState(415);
    match(CflatParser::T__27);
    setState(416);
    caseBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseBodyContext ------------------------------------------------------------------

CflatParser::CaseBodyContext::CaseBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::StmtContext *> CflatParser::CaseBodyContext::stmt() {
  return getRuleContexts<CflatParser::StmtContext>();
}

CflatParser::StmtContext* CflatParser::CaseBodyContext::stmt(size_t i) {
  return getRuleContext<CflatParser::StmtContext>(i);
}


size_t CflatParser::CaseBodyContext::getRuleIndex() const {
  return CflatParser::RuleCaseBody;
}

void CflatParser::CaseBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseBody(this);
}

void CflatParser::CaseBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseBody(this);
}


antlrcpp::Any CflatParser::CaseBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitCaseBody(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::CaseBodyContext* CflatParser::caseBody() {
  CaseBodyContext *_localctx = _tracker.createInstance<CaseBodyContext>(_ctx, getState());
  enterRule(_localctx, 78, CflatParser::RuleCaseBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(418);
      stmt();
      setState(421); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__1)
      | (1ULL << CflatParser::T__7)
      | (1ULL << CflatParser::T__11)
      | (1ULL << CflatParser::T__18)
      | (1ULL << CflatParser::T__28)
      | (1ULL << CflatParser::T__30)
      | (1ULL << CflatParser::T__31)
      | (1ULL << CflatParser::T__32)
      | (1ULL << CflatParser::T__33)
      | (1ULL << CflatParser::T__36)
      | (1ULL << CflatParser::T__37)
      | (1ULL << CflatParser::T__38)
      | (1ULL << CflatParser::T__39)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46)
      | (1ULL << CflatParser::T__47))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (CflatParser::T__68 - 69))
      | (1ULL << (CflatParser::T__69 - 69))
      | (1ULL << (CflatParser::HexLiteral - 69))
      | (1ULL << (CflatParser::DecimalLiteral - 69))
      | (1ULL << (CflatParser::OctalLiteral - 69))
      | (1ULL << (CflatParser::BoolLiteral - 69))
      | (1ULL << (CflatParser::FloatingPointLiteral - 69))
      | (1ULL << (CflatParser::CharacterLiteral - 69))
      | (1ULL << (CflatParser::StringLiteral - 69))
      | (1ULL << (CflatParser::Identifier - 69)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStmtContext ------------------------------------------------------------------

CflatParser::GotoStmtContext::GotoStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CflatParser::GotoStmtContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}


size_t CflatParser::GotoStmtContext::getRuleIndex() const {
  return CflatParser::RuleGotoStmt;
}

void CflatParser::GotoStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStmt(this);
}

void CflatParser::GotoStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStmt(this);
}


antlrcpp::Any CflatParser::GotoStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitGotoStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::GotoStmtContext* CflatParser::gotoStmt() {
  GotoStmtContext *_localctx = _tracker.createInstance<GotoStmtContext>(_ctx, getState());
  enterRule(_localctx, 80, CflatParser::RuleGotoStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    match(CflatParser::T__36);
    setState(424);
    match(CflatParser::Identifier);
    setState(425);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStmtContext ------------------------------------------------------------------

CflatParser::BreakStmtContext::BreakStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CflatParser::BreakStmtContext::getRuleIndex() const {
  return CflatParser::RuleBreakStmt;
}

void CflatParser::BreakStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStmt(this);
}

void CflatParser::BreakStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStmt(this);
}


antlrcpp::Any CflatParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::BreakStmtContext* CflatParser::breakStmt() {
  BreakStmtContext *_localctx = _tracker.createInstance<BreakStmtContext>(_ctx, getState());
  enterRule(_localctx, 82, CflatParser::RuleBreakStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    match(CflatParser::T__37);
    setState(428);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStmtContext ------------------------------------------------------------------

CflatParser::ContinueStmtContext::ContinueStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CflatParser::ContinueStmtContext::getRuleIndex() const {
  return CflatParser::RuleContinueStmt;
}

void CflatParser::ContinueStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStmt(this);
}

void CflatParser::ContinueStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStmt(this);
}


antlrcpp::Any CflatParser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ContinueStmtContext* CflatParser::continueStmt() {
  ContinueStmtContext *_localctx = _tracker.createInstance<ContinueStmtContext>(_ctx, getState());
  enterRule(_localctx, 84, CflatParser::RuleContinueStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    match(CflatParser::T__38);
    setState(431);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

CflatParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::ExprContext* CflatParser::ReturnStmtContext::expr() {
  return getRuleContext<CflatParser::ExprContext>(0);
}


size_t CflatParser::ReturnStmtContext::getRuleIndex() const {
  return CflatParser::RuleReturnStmt;
}

void CflatParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}

void CflatParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}


antlrcpp::Any CflatParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ReturnStmtContext* CflatParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 86, CflatParser::RuleReturnStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    match(CflatParser::T__39);
    setState(435);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__7)
      | (1ULL << CflatParser::T__18)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46)
      | (1ULL << CflatParser::T__47))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (CflatParser::T__68 - 69))
      | (1ULL << (CflatParser::T__69 - 69))
      | (1ULL << (CflatParser::HexLiteral - 69))
      | (1ULL << (CflatParser::DecimalLiteral - 69))
      | (1ULL << (CflatParser::OctalLiteral - 69))
      | (1ULL << (CflatParser::BoolLiteral - 69))
      | (1ULL << (CflatParser::FloatingPointLiteral - 69))
      | (1ULL << (CflatParser::CharacterLiteral - 69))
      | (1ULL << (CflatParser::StringLiteral - 69))
      | (1ULL << (CflatParser::Identifier - 69)))) != 0)) {
      setState(434);
      expr(0);
    }
    setState(437);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CflatParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::PrimaryContext* CflatParser::ExprContext::primary() {
  return getRuleContext<CflatParser::PrimaryContext>(0);
}

std::vector<CflatParser::ExprContext *> CflatParser::ExprContext::expr() {
  return getRuleContexts<CflatParser::ExprContext>();
}

CflatParser::ExprContext* CflatParser::ExprContext::expr(size_t i) {
  return getRuleContext<CflatParser::ExprContext>(i);
}

CflatParser::TypeContext* CflatParser::ExprContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}

tree::TerminalNode* CflatParser::ExprContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}

CflatParser::ArgumentsContext* CflatParser::ExprContext::arguments() {
  return getRuleContext<CflatParser::ArgumentsContext>(0);
}


size_t CflatParser::ExprContext::getRuleIndex() const {
  return CflatParser::RuleExpr;
}

void CflatParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void CflatParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


antlrcpp::Any CflatParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


CflatParser::ExprContext* CflatParser::expr() {
   return expr(0);
}

CflatParser::ExprContext* CflatParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CflatParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CflatParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 88;
  enterRecursionRule(_localctx, 88, CflatParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(457);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(440);
      primary();
      break;
    }

    case 2: {
      setState(441);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CflatParser::T__41)
        | (1ULL << CflatParser::T__42)
        | (1ULL << CflatParser::T__43)
        | (1ULL << CflatParser::T__44))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(442);
      expr(18);
      break;
    }

    case 3: {
      setState(443);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CflatParser::T__18)
        | (1ULL << CflatParser::T__43)
        | (1ULL << CflatParser::T__44)
        | (1ULL << CflatParser::T__45)
        | (1ULL << CflatParser::T__46)
        | (1ULL << CflatParser::T__47))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(444);
      expr(17);
      break;
    }

    case 4: {
      setState(445);
      match(CflatParser::T__7);
      setState(446);
      type();
      setState(447);
      match(CflatParser::T__8);
      setState(448);
      expr(16);
      break;
    }

    case 5: {
      setState(450);
      match(CflatParser::T__68);
      setState(451);
      match(CflatParser::T__7);
      setState(452);
      type();
      setState(453);
      match(CflatParser::T__8);
      break;
    }

    case 6: {
      setState(455);
      match(CflatParser::T__68);
      setState(456);
      expr(1);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(553);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(551);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(459);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(460);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CflatParser::T__18)
            | (1ULL << CflatParser::T__48)
            | (1ULL << CflatParser::T__49))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(461);
          expr(16);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(462);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(463);
          _la = _input->LA(1);
          if (!(_la == CflatParser::T__43

          || _la == CflatParser::T__44)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(464);
          expr(15);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(465);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(473);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
          case 1: {
            setState(466);
            match(CflatParser::T__50);
            setState(467);
            match(CflatParser::T__50);
            break;
          }

          case 2: {
            setState(468);
            match(CflatParser::T__51);
            setState(469);
            match(CflatParser::T__51);
            setState(470);
            match(CflatParser::T__51);
            break;
          }

          case 3: {
            setState(471);
            match(CflatParser::T__51);
            setState(472);
            match(CflatParser::T__51);
            break;
          }

          default:
            break;
          }
          setState(475);
          expr(14);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(476);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(483);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
          case 1: {
            setState(477);
            match(CflatParser::T__50);
            setState(478);
            match(CflatParser::T__5);
            break;
          }

          case 2: {
            setState(479);
            match(CflatParser::T__51);
            setState(480);
            match(CflatParser::T__5);
            break;
          }

          case 3: {
            setState(481);
            match(CflatParser::T__51);
            break;
          }

          case 4: {
            setState(482);
            match(CflatParser::T__50);
            break;
          }

          default:
            break;
          }
          setState(485);
          expr(13);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(486);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(487);
          _la = _input->LA(1);
          if (!(_la == CflatParser::T__53

          || _la == CflatParser::T__54)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(488);
          expr(11);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(489);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(490);
          match(CflatParser::T__47);
          setState(491);
          expr(10);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(492);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(493);
          match(CflatParser::T__55);
          setState(494);
          expr(9);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(495);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(496);
          match(CflatParser::T__56);
          setState(497);
          expr(8);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(498);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(499);
          match(CflatParser::T__57);
          setState(500);
          expr(7);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(501);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(502);
          match(CflatParser::T__58);
          setState(503);
          expr(6);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(504);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(505);
          match(CflatParser::T__59);
          setState(506);
          expr(0);
          setState(507);
          match(CflatParser::T__27);
          setState(508);
          expr(5);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(510);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(530);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
          case 1: {
            setState(511);
            match(CflatParser::T__60);
            break;
          }

          case 2: {
            setState(512);
            match(CflatParser::T__61);
            break;
          }

          case 3: {
            setState(513);
            match(CflatParser::T__62);
            break;
          }

          case 4: {
            setState(514);
            match(CflatParser::T__63);
            break;
          }

          case 5: {
            setState(515);
            match(CflatParser::T__64);
            break;
          }

          case 6: {
            setState(516);
            match(CflatParser::T__65);
            break;
          }

          case 7: {
            setState(517);
            match(CflatParser::T__66);
            break;
          }

          case 8: {
            setState(518);
            match(CflatParser::T__5);
            break;
          }

          case 9: {
            setState(519);
            match(CflatParser::T__51);
            setState(520);
            match(CflatParser::T__51);
            setState(521);
            match(CflatParser::T__5);
            break;
          }

          case 10: {
            setState(522);
            match(CflatParser::T__51);
            setState(523);
            match(CflatParser::T__51);
            setState(524);
            match(CflatParser::T__51);
            setState(525);
            match(CflatParser::T__5);
            break;
          }

          case 11: {
            setState(526);
            match(CflatParser::T__50);
            setState(527);
            match(CflatParser::T__50);
            setState(528);
            match(CflatParser::T__5);
            break;
          }

          case 12: {
            setState(529);
            match(CflatParser::T__67);
            break;
          }

          default:
            break;
          }
          setState(532);
          expr(3);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(533);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(534);
          match(CflatParser::T__2);
          setState(535);
          match(CflatParser::Identifier);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(536);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(537);
          match(CflatParser::T__40);
          setState(538);
          match(CflatParser::Identifier);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(539);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(540);
          match(CflatParser::T__16);
          setState(541);
          expr(0);
          setState(542);
          match(CflatParser::T__17);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(544);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(545);
          arguments();
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(546);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(547);
          _la = _input->LA(1);
          if (!(_la == CflatParser::T__41

          || _la == CflatParser::T__42)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(548);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(549);
          match(CflatParser::T__52);
          setState(550);
          type();
          break;
        }

        default:
          break;
        } 
      }
      setState(555);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExprListContext ------------------------------------------------------------------

CflatParser::ExprListContext::ExprListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CflatParser::ExprContext *> CflatParser::ExprListContext::expr() {
  return getRuleContexts<CflatParser::ExprContext>();
}

CflatParser::ExprContext* CflatParser::ExprListContext::expr(size_t i) {
  return getRuleContext<CflatParser::ExprContext>(i);
}


size_t CflatParser::ExprListContext::getRuleIndex() const {
  return CflatParser::RuleExprList;
}

void CflatParser::ExprListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprList(this);
}

void CflatParser::ExprListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprList(this);
}


antlrcpp::Any CflatParser::ExprListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitExprList(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ExprListContext* CflatParser::exprList() {
  ExprListContext *_localctx = _tracker.createInstance<ExprListContext>(_ctx, getState());
  enterRule(_localctx, 90, CflatParser::RuleExprList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    expr(0);
    setState(561);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CflatParser::T__6) {
      setState(557);
      match(CflatParser::T__6);
      setState(558);
      expr(0);
      setState(563);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

CflatParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::ExprListContext* CflatParser::ArgumentsContext::exprList() {
  return getRuleContext<CflatParser::ExprListContext>(0);
}


size_t CflatParser::ArgumentsContext::getRuleIndex() const {
  return CflatParser::RuleArguments;
}

void CflatParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void CflatParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}


antlrcpp::Any CflatParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ArgumentsContext* CflatParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 92, CflatParser::RuleArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    match(CflatParser::T__7);
    setState(566);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__7)
      | (1ULL << CflatParser::T__18)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46)
      | (1ULL << CflatParser::T__47))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (CflatParser::T__68 - 69))
      | (1ULL << (CflatParser::T__69 - 69))
      | (1ULL << (CflatParser::HexLiteral - 69))
      | (1ULL << (CflatParser::DecimalLiteral - 69))
      | (1ULL << (CflatParser::OctalLiteral - 69))
      | (1ULL << (CflatParser::BoolLiteral - 69))
      | (1ULL << (CflatParser::FloatingPointLiteral - 69))
      | (1ULL << (CflatParser::CharacterLiteral - 69))
      | (1ULL << (CflatParser::StringLiteral - 69))
      | (1ULL << (CflatParser::Identifier - 69)))) != 0)) {
      setState(565);
      exprList();
    }
    setState(568);
    match(CflatParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

CflatParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::LiteralContext* CflatParser::PrimaryContext::literal() {
  return getRuleContext<CflatParser::LiteralContext>(0);
}

tree::TerminalNode* CflatParser::PrimaryContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}

CflatParser::ExprContext* CflatParser::PrimaryContext::expr() {
  return getRuleContext<CflatParser::ExprContext>(0);
}


size_t CflatParser::PrimaryContext::getRuleIndex() const {
  return CflatParser::RulePrimary;
}

void CflatParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void CflatParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}


antlrcpp::Any CflatParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::PrimaryContext* CflatParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 94, CflatParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(576);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CflatParser::T__69:
      case CflatParser::HexLiteral:
      case CflatParser::DecimalLiteral:
      case CflatParser::OctalLiteral:
      case CflatParser::BoolLiteral:
      case CflatParser::FloatingPointLiteral:
      case CflatParser::CharacterLiteral:
      case CflatParser::StringLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(570);
        literal();
        break;
      }

      case CflatParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(571);
        match(CflatParser::Identifier);
        break;
      }

      case CflatParser::T__7: {
        enterOuterAlt(_localctx, 3);
        setState(572);
        match(CflatParser::T__7);
        setState(573);
        expr(0);
        setState(574);
        match(CflatParser::T__8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

CflatParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CflatParser::LiteralContext::HexLiteral() {
  return getToken(CflatParser::HexLiteral, 0);
}

tree::TerminalNode* CflatParser::LiteralContext::DecimalLiteral() {
  return getToken(CflatParser::DecimalLiteral, 0);
}

tree::TerminalNode* CflatParser::LiteralContext::OctalLiteral() {
  return getToken(CflatParser::OctalLiteral, 0);
}

tree::TerminalNode* CflatParser::LiteralContext::CharacterLiteral() {
  return getToken(CflatParser::CharacterLiteral, 0);
}

tree::TerminalNode* CflatParser::LiteralContext::StringLiteral() {
  return getToken(CflatParser::StringLiteral, 0);
}

tree::TerminalNode* CflatParser::LiteralContext::FloatingPointLiteral() {
  return getToken(CflatParser::FloatingPointLiteral, 0);
}

tree::TerminalNode* CflatParser::LiteralContext::BoolLiteral() {
  return getToken(CflatParser::BoolLiteral, 0);
}


size_t CflatParser::LiteralContext::getRuleIndex() const {
  return CflatParser::RuleLiteral;
}

void CflatParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void CflatParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any CflatParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::LiteralContext* CflatParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 96, CflatParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    _la = _input->LA(1);
    if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (CflatParser::T__69 - 70))
      | (1ULL << (CflatParser::HexLiteral - 70))
      | (1ULL << (CflatParser::DecimalLiteral - 70))
      | (1ULL << (CflatParser::OctalLiteral - 70))
      | (1ULL << (CflatParser::BoolLiteral - 70))
      | (1ULL << (CflatParser::FloatingPointLiteral - 70))
      | (1ULL << (CflatParser::CharacterLiteral - 70))
      | (1ULL << (CflatParser::StringLiteral - 70)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CflatParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 44: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CflatParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 15);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 10);
    case 5: return precpred(_ctx, 9);
    case 6: return precpred(_ctx, 8);
    case 7: return precpred(_ctx, 7);
    case 8: return precpred(_ctx, 6);
    case 9: return precpred(_ctx, 5);
    case 10: return precpred(_ctx, 4);
    case 11: return precpred(_ctx, 3);
    case 12: return precpred(_ctx, 23);
    case 13: return precpred(_ctx, 22);
    case 14: return precpred(_ctx, 21);
    case 15: return precpred(_ctx, 20);
    case 16: return precpred(_ctx, 19);
    case 17: return precpred(_ctx, 11);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CflatParser::_decisionToDFA;
atn::PredictionContextCache CflatParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CflatParser::_atn;
std::vector<uint16_t> CflatParser::_serializedATN;

std::vector<std::string> CflatParser::_ruleNames = {
  "compilationUnit", "declarationFile", "importStmts", "importStmt", "libid", 
  "name", "topDefs", "defVars", "defFunc", "params", "fixedParams", "param", 
  "block", "defVarList", "defStruct", "defUnion", "memberList", "slot", 
  "funcDecl", "varDecl", "type", "typeRef", "integer", "paramTypeRefs", 
  "fixedParamTypeRefs", "typeRefBase", "typeDef", "stmts", "stmt", "labeledStmt", 
  "ifStmt", "whileStmt", "dowhileStmt", "forStmt", "switchStmt", "caseClauses", 
  "caseClause", "cases", "defaultClause", "caseBody", "gotoStmt", "breakStmt", 
  "continueStmt", "returnStmt", "expr", "exprList", "arguments", "primary", 
  "literal"
};

std::vector<std::string> CflatParser::_literalNames = {
  "", "'import'", "';'", "'.'", "'static'", "'const'", "'='", "','", "'('", 
  "')'", "'void'", "'...'", "'{'", "'}'", "'struct'", "'union'", "'extern'", 
  "'['", "']'", "'*'", "'char'", "'short'", "'int'", "'long'", "'unsigned'", 
  "'float'", "'double'", "'typedef'", "':'", "'if'", "'else'", "'while'", 
  "'do'", "'for'", "'switch'", "'case'", "'default'", "'goto'", "'break'", 
  "'continue'", "'return'", "'->'", "'++'", "'--'", "'+'", "'-'", "'!'", 
  "'~'", "'&'", "'/'", "'%'", "'<'", "'>'", "'instanceof'", "'=='", "'!='", 
  "'^'", "'|'", "'&&'", "'||'", "'\u003F'", "'^='", "'+='", "'-='", "'*='", 
  "'/='", "'&='", "'|='", "'%='", "'sizeof'", "'null'"
};

std::vector<std::string> CflatParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "HexLiteral", 
  "DecimalLiteral", "OctalLiteral", "BoolLiteral", "FloatingPointLiteral", 
  "CharacterLiteral", "StringLiteral", "Identifier", "BLOCK_COMMENT", "SPACES", 
  "LINE_COMMENT"
};

dfa::Vocabulary CflatParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CflatParser::_tokenNames;

CflatParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x53, 0x247, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x6f, 0xa, 
       0x3, 0xc, 0x3, 0xe, 0x3, 0x72, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x4, 0x7, 0x4, 0x77, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x7a, 0xb, 0x4, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x7, 0x6, 0x83, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x86, 0xb, 0x6, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x7, 0x8, 0x8f, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x92, 0xb, 0x8, 
       0x3, 0x9, 0x5, 0x9, 0x95, 0xa, 0x9, 0x3, 0x9, 0x5, 0x9, 0x98, 0xa, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x9e, 0xa, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xa4, 0xa, 
       0x9, 0x7, 0x9, 0xa6, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0xa9, 0xb, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x5, 0xa, 0xae, 0xa, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xbb, 0xa, 0xb, 0x5, 
       0xb, 0xbd, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xc2, 
       0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xc5, 0xb, 0xc, 0x3, 0xd, 0x5, 0xd, 
       0xc8, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x7, 0xf, 0xd3, 0xa, 0xf, 
       0xc, 0xf, 0xe, 0xf, 0xd6, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 
       0xe6, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xe9, 0xb, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xfa, 0xa, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x5, 0x17, 0x105, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x10d, 0xa, 
       0x17, 0xc, 0x17, 0xe, 0x17, 0x110, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x118, 0xa, 
       0x19, 0x5, 0x19, 0x11a, 0xa, 0x19, 0x3, 0x1a, 0x5, 0x1a, 0x11d, 0xa, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x122, 0xa, 0x1a, 
       0x3, 0x1a, 0x7, 0x1a, 0x125, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x128, 
       0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x13e, 0xa, 0x1b, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x7, 
       0x1d, 0x146, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x149, 0xb, 0x1d, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x15a, 0xa, 0x1e, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x167, 0xa, 
       0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 
       0x23, 0x17a, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x17e, 0xa, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x25, 0x7, 0x25, 0x18e, 0xa, 0x25, 0xc, 0x25, 
       0xe, 0x25, 0x191, 0xb, 0x25, 0x3, 0x25, 0x5, 0x25, 0x194, 0xa, 0x25, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x6, 0x27, 0x19d, 0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 0x19e, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x6, 0x29, 
       0x1a6, 0xa, 0x29, 0xd, 0x29, 0xe, 0x29, 0x1a7, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1b6, 0xa, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x1cc, 0xa, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x5, 0x2e, 0x1dc, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 
       0x2e, 0x1e6, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 
       0x215, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x22a, 0xa, 0x2e, 0xc, 0x2e, 
       0xe, 0x2e, 0x22d, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 
       0x2f, 0x232, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x235, 0xb, 0x2f, 0x3, 
       0x30, 0x3, 0x30, 0x5, 0x30, 0x239, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x5, 0x31, 0x243, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x2, 
       0x3, 0x5a, 0x33, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
       0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
       0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
       0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x2, 0xa, 0x3, 0x2, 0x49, 0x4b, 
       0x3, 0x2, 0x2c, 0x2f, 0x4, 0x2, 0x15, 0x15, 0x2e, 0x32, 0x4, 0x2, 
       0x15, 0x15, 0x33, 0x34, 0x3, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x38, 0x39, 
       0x3, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x48, 0x4f, 0x2, 0x284, 0x2, 0x64, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6, 0x78, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0x7b, 0x3, 0x2, 0x2, 0x2, 0xa, 0x7f, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0x87, 0x3, 0x2, 0x2, 0x2, 0xe, 0x90, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0x94, 0x3, 0x2, 0x2, 0x2, 0x12, 0xad, 0x3, 0x2, 0x2, 0x2, 
       0x14, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x16, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0xc7, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xd4, 
       0x3, 0x2, 0x2, 0x2, 0x1e, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x20, 0xdc, 0x3, 
       0x2, 0x2, 0x2, 0x22, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x24, 0xec, 0x3, 0x2, 
       0x2, 0x2, 0x26, 0xef, 0x3, 0x2, 0x2, 0x2, 0x28, 0xf7, 0x3, 0x2, 0x2, 
       0x2, 0x2a, 0xff, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x101, 0x3, 0x2, 0x2, 
       0x2, 0x2e, 0x111, 0x3, 0x2, 0x2, 0x2, 0x30, 0x119, 0x3, 0x2, 0x2, 
       0x2, 0x32, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x34, 0x13d, 0x3, 0x2, 0x2, 
       0x2, 0x36, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x38, 0x147, 0x3, 0x2, 0x2, 
       0x2, 0x3a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x15b, 0x3, 0x2, 0x2, 
       0x2, 0x3e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x40, 0x168, 0x3, 0x2, 0x2, 
       0x2, 0x42, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x44, 0x176, 0x3, 0x2, 0x2, 
       0x2, 0x46, 0x184, 0x3, 0x2, 0x2, 0x2, 0x48, 0x18f, 0x3, 0x2, 0x2, 
       0x2, 0x4a, 0x195, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x19c, 0x3, 0x2, 0x2, 
       0x2, 0x4e, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1a5, 0x3, 0x2, 0x2, 
       0x2, 0x52, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1ad, 0x3, 0x2, 0x2, 
       0x2, 0x56, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1b3, 0x3, 0x2, 0x2, 
       0x2, 0x5a, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x22e, 0x3, 0x2, 0x2, 
       0x2, 0x5e, 0x236, 0x3, 0x2, 0x2, 0x2, 0x60, 0x242, 0x3, 0x2, 0x2, 
       0x2, 0x62, 0x244, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x5, 0x6, 0x4, 
       0x2, 0x65, 0x66, 0x5, 0xe, 0x8, 0x2, 0x66, 0x67, 0x7, 0x2, 0x2, 0x3, 
       0x67, 0x3, 0x3, 0x2, 0x2, 0x2, 0x68, 0x70, 0x5, 0x6, 0x4, 0x2, 0x69, 
       0x6f, 0x5, 0x26, 0x14, 0x2, 0x6a, 0x6f, 0x5, 0x28, 0x15, 0x2, 0x6b, 
       0x6f, 0x5, 0x1e, 0x10, 0x2, 0x6c, 0x6f, 0x5, 0x20, 0x11, 0x2, 0x6d, 
       0x6f, 0x5, 0x36, 0x1c, 0x2, 0x6e, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6e, 
       0x6a, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 
       0x3, 0x2, 0x2, 0x2, 0x6e, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x72, 0x3, 
       0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 
       0x2, 0x2, 0x71, 0x73, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 
       0x2, 0x73, 0x74, 0x7, 0x2, 0x2, 0x3, 0x74, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0x75, 0x77, 0x5, 0x8, 0x5, 0x2, 0x76, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 
       0x7a, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 
       0x3, 0x2, 0x2, 0x2, 0x79, 0x7, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 
       0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x3, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0xa, 
       0x6, 0x2, 0x7d, 0x7e, 0x7, 0x4, 0x2, 0x2, 0x7e, 0x9, 0x3, 0x2, 0x2, 
       0x2, 0x7f, 0x84, 0x5, 0xc, 0x7, 0x2, 0x80, 0x81, 0x7, 0x5, 0x2, 0x2, 
       0x81, 0x83, 0x5, 0xc, 0x7, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 
       0x86, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x85, 0xb, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 
       0x2, 0x2, 0x2, 0x87, 0x88, 0x7, 0x50, 0x2, 0x2, 0x88, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0x89, 0x8f, 0x5, 0x12, 0xa, 0x2, 0x8a, 0x8f, 0x5, 0x10, 
       0x9, 0x2, 0x8b, 0x8f, 0x5, 0x1e, 0x10, 0x2, 0x8c, 0x8f, 0x5, 0x20, 
       0x11, 0x2, 0x8d, 0x8f, 0x5, 0x36, 0x1c, 0x2, 0x8e, 0x89, 0x3, 0x2, 
       0x2, 0x2, 0x8e, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8b, 0x3, 0x2, 0x2, 
       0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 
       0x8f, 0x92, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 
       0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0xf, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 
       0x3, 0x2, 0x2, 0x2, 0x93, 0x95, 0x7, 0x6, 0x2, 0x2, 0x94, 0x93, 0x3, 
       0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x97, 0x3, 0x2, 
       0x2, 0x2, 0x96, 0x98, 0x7, 0x7, 0x2, 0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 
       0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 
       0x99, 0x9a, 0x5, 0x2a, 0x16, 0x2, 0x9a, 0x9d, 0x5, 0xc, 0x7, 0x2, 
       0x9b, 0x9c, 0x7, 0x8, 0x2, 0x2, 0x9c, 0x9e, 0x5, 0x5a, 0x2e, 0x2, 
       0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 
       0xa7, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x9, 0x2, 0x2, 0xa0, 0xa3, 
       0x5, 0xc, 0x7, 0x2, 0xa1, 0xa2, 0x7, 0x8, 0x2, 0x2, 0xa2, 0xa4, 0x5, 
       0x5a, 0x2e, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 
       0x2, 0x2, 0x2, 0xa4, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x9f, 0x3, 0x2, 
       0x2, 0x2, 0xa6, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 
       0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 
       0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x4, 0x2, 0x2, 0xab, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0x7, 0x6, 0x2, 0x2, 0xad, 0xac, 
       0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 
       0x2, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x2c, 0x17, 0x2, 0xb0, 0xb1, 0x5, 
       0xc, 0x7, 0x2, 0xb1, 0xb2, 0x7, 0xa, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x14, 
       0xb, 0x2, 0xb3, 0xb4, 0x7, 0xb, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x1a, 
       0xe, 0x2, 0xb5, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xbd, 0x7, 0xc, 0x2, 
       0x2, 0xb7, 0xba, 0x5, 0x16, 0xc, 0x2, 0xb8, 0xb9, 0x7, 0x9, 0x2, 
       0x2, 0xb9, 0xbb, 0x7, 0xd, 0x2, 0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 
       0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbc, 
       0xb6, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0xbe, 0xc3, 0x5, 0x18, 0xd, 0x2, 0xbf, 0xc0, 
       0x7, 0x9, 0x2, 0x2, 0xc0, 0xc2, 0x5, 0x18, 0xd, 0x2, 0xc1, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0xc2, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 
       0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x17, 0x3, 0x2, 
       0x2, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc8, 0x7, 0x7, 0x2, 
       0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 
       0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x5, 0x2a, 0x16, 0x2, 
       0xca, 0xcb, 0x5, 0xc, 0x7, 0x2, 0xcb, 0x19, 0x3, 0x2, 0x2, 0x2, 0xcc, 
       0xcd, 0x7, 0xe, 0x2, 0x2, 0xcd, 0xce, 0x5, 0x1c, 0xf, 0x2, 0xce, 
       0xcf, 0x5, 0x38, 0x1d, 0x2, 0xcf, 0xd0, 0x7, 0xf, 0x2, 0x2, 0xd0, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd3, 0x5, 0x10, 0x9, 0x2, 0xd2, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 
       0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0x1d, 0x3, 
       0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x10, 
       0x2, 0x2, 0xd8, 0xd9, 0x5, 0xc, 0x7, 0x2, 0xd9, 0xda, 0x5, 0x22, 
       0x12, 0x2, 0xda, 0xdb, 0x7, 0x4, 0x2, 0x2, 0xdb, 0x1f, 0x3, 0x2, 
       0x2, 0x2, 0xdc, 0xdd, 0x7, 0x11, 0x2, 0x2, 0xdd, 0xde, 0x5, 0xc, 
       0x7, 0x2, 0xde, 0xdf, 0x5, 0x22, 0x12, 0x2, 0xdf, 0xe0, 0x7, 0x4, 
       0x2, 0x2, 0xe0, 0x21, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe7, 0x7, 0xe, 0x2, 
       0x2, 0xe2, 0xe3, 0x5, 0x24, 0x13, 0x2, 0xe3, 0xe4, 0x7, 0x4, 0x2, 
       0x2, 0xe4, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe2, 0x3, 0x2, 0x2, 0x2, 
       0xe6, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 
       0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 
       0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 0xf, 0x2, 0x2, 0xeb, 0x23, 0x3, 
       0x2, 0x2, 0x2, 0xec, 0xed, 0x5, 0x2a, 0x16, 0x2, 0xed, 0xee, 0x5, 
       0xc, 0x7, 0x2, 0xee, 0x25, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x12, 
       0x2, 0x2, 0xf0, 0xf1, 0x5, 0x2c, 0x17, 0x2, 0xf1, 0xf2, 0x5, 0xc, 
       0x7, 0x2, 0xf2, 0xf3, 0x7, 0xa, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0x14, 
       0xb, 0x2, 0xf4, 0xf5, 0x7, 0xb, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x4, 0x2, 
       0x2, 0xf6, 0x27, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf9, 0x7, 0x12, 0x2, 
       0x2, 0xf8, 0xfa, 0x7, 0x7, 0x2, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 
       0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 
       0xfc, 0x5, 0x2a, 0x16, 0x2, 0xfc, 0xfd, 0x5, 0xc, 0x7, 0x2, 0xfd, 
       0xfe, 0x7, 0x4, 0x2, 0x2, 0xfe, 0x29, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 
       0x5, 0x2c, 0x17, 0x2, 0x100, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x101, 0x10e, 
       0x5, 0x34, 0x1b, 0x2, 0x102, 0x104, 0x7, 0x13, 0x2, 0x2, 0x103, 0x105, 
       0x5, 0x2e, 0x18, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 
       0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x10d, 
       0x7, 0x14, 0x2, 0x2, 0x107, 0x10d, 0x7, 0x15, 0x2, 0x2, 0x108, 0x109, 
       0x7, 0xa, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x30, 0x19, 0x2, 0x10a, 0x10b, 
       0x7, 0xb, 0x2, 0x2, 0x10b, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x102, 
       0x3, 0x2, 0x2, 0x2, 0x10c, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x108, 
       0x3, 0x2, 0x2, 0x2, 0x10d, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 
       0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 
       0x9, 0x2, 0x2, 0x2, 0x112, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x113, 0x11a, 
       0x7, 0xc, 0x2, 0x2, 0x114, 0x117, 0x5, 0x32, 0x1a, 0x2, 0x115, 0x116, 
       0x7, 0x9, 0x2, 0x2, 0x116, 0x118, 0x7, 0xd, 0x2, 0x2, 0x117, 0x115, 
       0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11a, 
       0x3, 0x2, 0x2, 0x2, 0x119, 0x113, 0x3, 0x2, 0x2, 0x2, 0x119, 0x114, 
       0x3, 0x2, 0x2, 0x2, 0x11a, 0x31, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 
       0x7, 0x7, 0x2, 0x2, 0x11c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 
       0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x126, 
       0x5, 0x2c, 0x17, 0x2, 0x11f, 0x121, 0x7, 0x9, 0x2, 0x2, 0x120, 0x122, 
       0x7, 0x7, 0x2, 0x2, 0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x125, 
       0x5, 0x2c, 0x17, 0x2, 0x124, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x125, 0x128, 
       0x3, 0x2, 0x2, 0x2, 0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 
       0x3, 0x2, 0x2, 0x2, 0x127, 0x33, 0x3, 0x2, 0x2, 0x2, 0x128, 0x126, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x13e, 0x7, 0xc, 0x2, 0x2, 0x12a, 0x13e, 
       0x7, 0x16, 0x2, 0x2, 0x12b, 0x13e, 0x7, 0x17, 0x2, 0x2, 0x12c, 0x13e, 
       0x7, 0x18, 0x2, 0x2, 0x12d, 0x13e, 0x7, 0x19, 0x2, 0x2, 0x12e, 0x12f, 
       0x7, 0x1a, 0x2, 0x2, 0x12f, 0x13e, 0x7, 0x16, 0x2, 0x2, 0x130, 0x131, 
       0x7, 0x1a, 0x2, 0x2, 0x131, 0x13e, 0x7, 0x17, 0x2, 0x2, 0x132, 0x133, 
       0x7, 0x1a, 0x2, 0x2, 0x133, 0x13e, 0x7, 0x18, 0x2, 0x2, 0x134, 0x135, 
       0x7, 0x1a, 0x2, 0x2, 0x135, 0x13e, 0x7, 0x19, 0x2, 0x2, 0x136, 0x13e, 
       0x7, 0x1b, 0x2, 0x2, 0x137, 0x13e, 0x7, 0x1c, 0x2, 0x2, 0x138, 0x139, 
       0x7, 0x10, 0x2, 0x2, 0x139, 0x13e, 0x7, 0x50, 0x2, 0x2, 0x13a, 0x13b, 
       0x7, 0x11, 0x2, 0x2, 0x13b, 0x13e, 0x7, 0x50, 0x2, 0x2, 0x13c, 0x13e, 
       0x7, 0x50, 0x2, 0x2, 0x13d, 0x129, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x12a, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x12c, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x12e, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x130, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x132, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x134, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x136, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x138, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13c, 
       0x3, 0x2, 0x2, 0x2, 0x13e, 0x35, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 
       0x7, 0x1d, 0x2, 0x2, 0x140, 0x141, 0x5, 0x2c, 0x17, 0x2, 0x141, 0x142, 
       0x7, 0x50, 0x2, 0x2, 0x142, 0x143, 0x7, 0x4, 0x2, 0x2, 0x143, 0x37, 
       0x3, 0x2, 0x2, 0x2, 0x144, 0x146, 0x5, 0x3a, 0x1e, 0x2, 0x145, 0x144, 
       0x3, 0x2, 0x2, 0x2, 0x146, 0x149, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x15a, 
       0x7, 0x4, 0x2, 0x2, 0x14b, 0x15a, 0x5, 0x3c, 0x1f, 0x2, 0x14c, 0x14d, 
       0x5, 0x5a, 0x2e, 0x2, 0x14d, 0x14e, 0x7, 0x4, 0x2, 0x2, 0x14e, 0x15a, 
       0x3, 0x2, 0x2, 0x2, 0x14f, 0x15a, 0x5, 0x1a, 0xe, 0x2, 0x150, 0x15a, 
       0x5, 0x3e, 0x20, 0x2, 0x151, 0x15a, 0x5, 0x40, 0x21, 0x2, 0x152, 
       0x15a, 0x5, 0x42, 0x22, 0x2, 0x153, 0x15a, 0x5, 0x44, 0x23, 0x2, 
       0x154, 0x15a, 0x5, 0x46, 0x24, 0x2, 0x155, 0x15a, 0x5, 0x54, 0x2b, 
       0x2, 0x156, 0x15a, 0x5, 0x56, 0x2c, 0x2, 0x157, 0x15a, 0x5, 0x52, 
       0x2a, 0x2, 0x158, 0x15a, 0x5, 0x58, 0x2d, 0x2, 0x159, 0x14a, 0x3, 
       0x2, 0x2, 0x2, 0x159, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x159, 0x14c, 0x3, 
       0x2, 0x2, 0x2, 0x159, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x159, 0x150, 0x3, 
       0x2, 0x2, 0x2, 0x159, 0x151, 0x3, 0x2, 0x2, 0x2, 0x159, 0x152, 0x3, 
       0x2, 0x2, 0x2, 0x159, 0x153, 0x3, 0x2, 0x2, 0x2, 0x159, 0x154, 0x3, 
       0x2, 0x2, 0x2, 0x159, 0x155, 0x3, 0x2, 0x2, 0x2, 0x159, 0x156, 0x3, 
       0x2, 0x2, 0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 0x158, 0x3, 
       0x2, 0x2, 0x2, 0x15a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x7, 
       0x50, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0x1e, 0x2, 0x2, 0x15d, 0x15e, 
       0x5, 0x3a, 0x1e, 0x2, 0x15e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 
       0x7, 0x1f, 0x2, 0x2, 0x160, 0x161, 0x7, 0xa, 0x2, 0x2, 0x161, 0x162, 
       0x5, 0x5a, 0x2e, 0x2, 0x162, 0x163, 0x7, 0xb, 0x2, 0x2, 0x163, 0x166, 
       0x5, 0x3a, 0x1e, 0x2, 0x164, 0x165, 0x7, 0x20, 0x2, 0x2, 0x165, 0x167, 
       0x5, 0x3a, 0x1e, 0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 
       0x3, 0x2, 0x2, 0x2, 0x167, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 
       0x7, 0x21, 0x2, 0x2, 0x169, 0x16a, 0x7, 0xa, 0x2, 0x2, 0x16a, 0x16b, 
       0x5, 0x5a, 0x2e, 0x2, 0x16b, 0x16c, 0x7, 0xb, 0x2, 0x2, 0x16c, 0x16d, 
       0x5, 0x3a, 0x1e, 0x2, 0x16d, 0x41, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 
       0x7, 0x22, 0x2, 0x2, 0x16f, 0x170, 0x5, 0x3a, 0x1e, 0x2, 0x170, 0x171, 
       0x7, 0x21, 0x2, 0x2, 0x171, 0x172, 0x7, 0xa, 0x2, 0x2, 0x172, 0x173, 
       0x5, 0x5a, 0x2e, 0x2, 0x173, 0x174, 0x7, 0xb, 0x2, 0x2, 0x174, 0x175, 
       0x7, 0x4, 0x2, 0x2, 0x175, 0x43, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 
       0x7, 0x23, 0x2, 0x2, 0x177, 0x179, 0x7, 0xa, 0x2, 0x2, 0x178, 0x17a, 
       0x5, 0x5a, 0x2e, 0x2, 0x179, 0x178, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 
       0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17d, 
       0x7, 0x4, 0x2, 0x2, 0x17c, 0x17e, 0x5, 0x5a, 0x2e, 0x2, 0x17d, 0x17c, 
       0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 
       0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x7, 0x4, 0x2, 0x2, 0x180, 0x181, 
       0x5, 0x5a, 0x2e, 0x2, 0x181, 0x182, 0x7, 0xb, 0x2, 0x2, 0x182, 0x183, 
       0x5, 0x3a, 0x1e, 0x2, 0x183, 0x45, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 
       0x7, 0x24, 0x2, 0x2, 0x185, 0x186, 0x7, 0xa, 0x2, 0x2, 0x186, 0x187, 
       0x5, 0x5a, 0x2e, 0x2, 0x187, 0x188, 0x7, 0xb, 0x2, 0x2, 0x188, 0x189, 
       0x7, 0xe, 0x2, 0x2, 0x189, 0x18a, 0x5, 0x48, 0x25, 0x2, 0x18a, 0x18b, 
       0x7, 0xf, 0x2, 0x2, 0x18b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18e, 
       0x5, 0x4a, 0x26, 0x2, 0x18d, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 
       0x3, 0x2, 0x2, 0x2, 0x190, 0x193, 0x3, 0x2, 0x2, 0x2, 0x191, 0x18f, 
       0x3, 0x2, 0x2, 0x2, 0x192, 0x194, 0x5, 0x4e, 0x28, 0x2, 0x193, 0x192, 
       0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x5, 0x4c, 0x27, 0x2, 0x196, 0x197, 
       0x5, 0x50, 0x29, 0x2, 0x197, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 
       0x7, 0x25, 0x2, 0x2, 0x199, 0x19a, 0x5, 0x60, 0x31, 0x2, 0x19a, 0x19b, 
       0x7, 0x1e, 0x2, 0x2, 0x19b, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x198, 
       0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19c, 
       0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x4d, 
       0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x7, 0x26, 0x2, 0x2, 0x1a1, 0x1a2, 
       0x7, 0x1e, 0x2, 0x2, 0x1a2, 0x1a3, 0x5, 0x50, 0x29, 0x2, 0x1a3, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a6, 0x5, 0x3a, 0x1e, 0x2, 0x1a5, 0x1a4, 
       0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 
       0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x7, 0x27, 0x2, 0x2, 0x1aa, 0x1ab, 
       0x7, 0x50, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x4, 0x2, 0x2, 0x1ac, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x28, 0x2, 0x2, 0x1ae, 0x1af, 
       0x7, 0x4, 0x2, 0x2, 0x1af, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 
       0x7, 0x29, 0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x4, 0x2, 0x2, 0x1b2, 0x57, 
       0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b5, 0x7, 0x2a, 0x2, 0x2, 0x1b4, 0x1b6, 
       0x5, 0x5a, 0x2e, 0x2, 0x1b5, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 
       0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 
       0x7, 0x4, 0x2, 0x2, 0x1b8, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 
       0x8, 0x2e, 0x1, 0x2, 0x1ba, 0x1cc, 0x5, 0x60, 0x31, 0x2, 0x1bb, 0x1bc, 
       0x9, 0x3, 0x2, 0x2, 0x1bc, 0x1cc, 0x5, 0x5a, 0x2e, 0x14, 0x1bd, 0x1be, 
       0x9, 0x4, 0x2, 0x2, 0x1be, 0x1cc, 0x5, 0x5a, 0x2e, 0x13, 0x1bf, 0x1c0, 
       0x7, 0xa, 0x2, 0x2, 0x1c0, 0x1c1, 0x5, 0x2a, 0x16, 0x2, 0x1c1, 0x1c2, 
       0x7, 0xb, 0x2, 0x2, 0x1c2, 0x1c3, 0x5, 0x5a, 0x2e, 0x12, 0x1c3, 0x1cc, 
       0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x7, 0x47, 0x2, 0x2, 0x1c5, 0x1c6, 
       0x7, 0xa, 0x2, 0x2, 0x1c6, 0x1c7, 0x5, 0x2a, 0x16, 0x2, 0x1c7, 0x1c8, 
       0x7, 0xb, 0x2, 0x2, 0x1c8, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 
       0x7, 0x47, 0x2, 0x2, 0x1ca, 0x1cc, 0x5, 0x5a, 0x2e, 0x3, 0x1cb, 0x1b9, 
       0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1bd, 
       0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c4, 
       0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x22b, 
       0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0xc, 0x11, 0x2, 0x2, 0x1ce, 0x1cf, 
       0x9, 0x5, 0x2, 0x2, 0x1cf, 0x22a, 0x5, 0x5a, 0x2e, 0x12, 0x1d0, 0x1d1, 
       0xc, 0x10, 0x2, 0x2, 0x1d1, 0x1d2, 0x9, 0x6, 0x2, 0x2, 0x1d2, 0x22a, 
       0x5, 0x5a, 0x2e, 0x11, 0x1d3, 0x1db, 0xc, 0xf, 0x2, 0x2, 0x1d4, 0x1d5, 
       0x7, 0x35, 0x2, 0x2, 0x1d5, 0x1dc, 0x7, 0x35, 0x2, 0x2, 0x1d6, 0x1d7, 
       0x7, 0x36, 0x2, 0x2, 0x1d7, 0x1d8, 0x7, 0x36, 0x2, 0x2, 0x1d8, 0x1dc, 
       0x7, 0x36, 0x2, 0x2, 0x1d9, 0x1da, 0x7, 0x36, 0x2, 0x2, 0x1da, 0x1dc, 
       0x7, 0x36, 0x2, 0x2, 0x1db, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1d6, 
       0x3, 0x2, 0x2, 0x2, 0x1db, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 
       0x3, 0x2, 0x2, 0x2, 0x1dd, 0x22a, 0x5, 0x5a, 0x2e, 0x10, 0x1de, 0x1e5, 
       0xc, 0xe, 0x2, 0x2, 0x1df, 0x1e0, 0x7, 0x35, 0x2, 0x2, 0x1e0, 0x1e6, 
       0x7, 0x8, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x36, 0x2, 0x2, 0x1e2, 0x1e6, 
       0x7, 0x8, 0x2, 0x2, 0x1e3, 0x1e6, 0x7, 0x36, 0x2, 0x2, 0x1e4, 0x1e6, 
       0x7, 0x35, 0x2, 0x2, 0x1e5, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e1, 
       0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e4, 
       0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x22a, 
       0x5, 0x5a, 0x2e, 0xf, 0x1e8, 0x1e9, 0xc, 0xc, 0x2, 0x2, 0x1e9, 0x1ea, 
       0x9, 0x7, 0x2, 0x2, 0x1ea, 0x22a, 0x5, 0x5a, 0x2e, 0xd, 0x1eb, 0x1ec, 
       0xc, 0xb, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x32, 0x2, 0x2, 0x1ed, 0x22a, 
       0x5, 0x5a, 0x2e, 0xc, 0x1ee, 0x1ef, 0xc, 0xa, 0x2, 0x2, 0x1ef, 0x1f0, 
       0x7, 0x3a, 0x2, 0x2, 0x1f0, 0x22a, 0x5, 0x5a, 0x2e, 0xb, 0x1f1, 0x1f2, 
       0xc, 0x9, 0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x3b, 0x2, 0x2, 0x1f3, 0x22a, 
       0x5, 0x5a, 0x2e, 0xa, 0x1f4, 0x1f5, 0xc, 0x8, 0x2, 0x2, 0x1f5, 0x1f6, 
       0x7, 0x3c, 0x2, 0x2, 0x1f6, 0x22a, 0x5, 0x5a, 0x2e, 0x9, 0x1f7, 0x1f8, 
       0xc, 0x7, 0x2, 0x2, 0x1f8, 0x1f9, 0x7, 0x3d, 0x2, 0x2, 0x1f9, 0x22a, 
       0x5, 0x5a, 0x2e, 0x8, 0x1fa, 0x1fb, 0xc, 0x6, 0x2, 0x2, 0x1fb, 0x1fc, 
       0x7, 0x3e, 0x2, 0x2, 0x1fc, 0x1fd, 0x5, 0x5a, 0x2e, 0x2, 0x1fd, 0x1fe, 
       0x7, 0x1e, 0x2, 0x2, 0x1fe, 0x1ff, 0x5, 0x5a, 0x2e, 0x7, 0x1ff, 0x22a, 
       0x3, 0x2, 0x2, 0x2, 0x200, 0x214, 0xc, 0x5, 0x2, 0x2, 0x201, 0x215, 
       0x7, 0x3f, 0x2, 0x2, 0x202, 0x215, 0x7, 0x40, 0x2, 0x2, 0x203, 0x215, 
       0x7, 0x41, 0x2, 0x2, 0x204, 0x215, 0x7, 0x42, 0x2, 0x2, 0x205, 0x215, 
       0x7, 0x43, 0x2, 0x2, 0x206, 0x215, 0x7, 0x44, 0x2, 0x2, 0x207, 0x215, 
       0x7, 0x45, 0x2, 0x2, 0x208, 0x215, 0x7, 0x8, 0x2, 0x2, 0x209, 0x20a, 
       0x7, 0x36, 0x2, 0x2, 0x20a, 0x20b, 0x7, 0x36, 0x2, 0x2, 0x20b, 0x215, 
       0x7, 0x8, 0x2, 0x2, 0x20c, 0x20d, 0x7, 0x36, 0x2, 0x2, 0x20d, 0x20e, 
       0x7, 0x36, 0x2, 0x2, 0x20e, 0x20f, 0x7, 0x36, 0x2, 0x2, 0x20f, 0x215, 
       0x7, 0x8, 0x2, 0x2, 0x210, 0x211, 0x7, 0x35, 0x2, 0x2, 0x211, 0x212, 
       0x7, 0x35, 0x2, 0x2, 0x212, 0x215, 0x7, 0x8, 0x2, 0x2, 0x213, 0x215, 
       0x7, 0x46, 0x2, 0x2, 0x214, 0x201, 0x3, 0x2, 0x2, 0x2, 0x214, 0x202, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x203, 0x3, 0x2, 0x2, 0x2, 0x214, 0x204, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x205, 0x3, 0x2, 0x2, 0x2, 0x214, 0x206, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x207, 0x3, 0x2, 0x2, 0x2, 0x214, 0x208, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x209, 0x3, 0x2, 0x2, 0x2, 0x214, 0x20c, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x210, 0x3, 0x2, 0x2, 0x2, 0x214, 0x213, 
       0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x3, 0x2, 0x2, 0x2, 0x216, 0x22a, 
       0x5, 0x5a, 0x2e, 0x5, 0x217, 0x218, 0xc, 0x19, 0x2, 0x2, 0x218, 0x219, 
       0x7, 0x5, 0x2, 0x2, 0x219, 0x22a, 0x7, 0x50, 0x2, 0x2, 0x21a, 0x21b, 
       0xc, 0x18, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x2b, 0x2, 0x2, 0x21c, 0x22a, 
       0x7, 0x50, 0x2, 0x2, 0x21d, 0x21e, 0xc, 0x17, 0x2, 0x2, 0x21e, 0x21f, 
       0x7, 0x13, 0x2, 0x2, 0x21f, 0x220, 0x5, 0x5a, 0x2e, 0x2, 0x220, 0x221, 
       0x7, 0x14, 0x2, 0x2, 0x221, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 
       0xc, 0x16, 0x2, 0x2, 0x223, 0x22a, 0x5, 0x5e, 0x30, 0x2, 0x224, 0x225, 
       0xc, 0x15, 0x2, 0x2, 0x225, 0x22a, 0x9, 0x8, 0x2, 0x2, 0x226, 0x227, 
       0xc, 0xd, 0x2, 0x2, 0x227, 0x228, 0x7, 0x37, 0x2, 0x2, 0x228, 0x22a, 
       0x5, 0x2a, 0x16, 0x2, 0x229, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x229, 0x1d0, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x229, 0x1de, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x229, 0x1eb, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x229, 0x1f1, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x229, 0x1f7, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x229, 0x200, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x217, 0x3, 0x2, 0x2, 0x2, 0x229, 0x21a, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x229, 0x222, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x224, 0x3, 0x2, 0x2, 0x2, 0x229, 0x226, 
       0x3, 0x2, 0x2, 0x2, 0x22a, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x229, 
       0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x22d, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x233, 
       0x5, 0x5a, 0x2e, 0x2, 0x22f, 0x230, 0x7, 0x9, 0x2, 0x2, 0x230, 0x232, 
       0x5, 0x5a, 0x2e, 0x2, 0x231, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x232, 0x235, 
       0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x235, 0x233, 
       0x3, 0x2, 0x2, 0x2, 0x236, 0x238, 0x7, 0xa, 0x2, 0x2, 0x237, 0x239, 
       0x5, 0x5c, 0x2f, 0x2, 0x238, 0x237, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 
       0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 
       0x7, 0xb, 0x2, 0x2, 0x23b, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x243, 
       0x5, 0x62, 0x32, 0x2, 0x23d, 0x243, 0x7, 0x50, 0x2, 0x2, 0x23e, 0x23f, 
       0x7, 0xa, 0x2, 0x2, 0x23f, 0x240, 0x5, 0x5a, 0x2e, 0x2, 0x240, 0x241, 
       0x7, 0xb, 0x2, 0x2, 0x241, 0x243, 0x3, 0x2, 0x2, 0x2, 0x242, 0x23c, 
       0x3, 0x2, 0x2, 0x2, 0x242, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x242, 0x23e, 
       0x3, 0x2, 0x2, 0x2, 0x243, 0x61, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 
       0x9, 0x9, 0x2, 0x2, 0x245, 0x63, 0x3, 0x2, 0x2, 0x2, 0x31, 0x6e, 
       0x70, 0x78, 0x84, 0x8e, 0x90, 0x94, 0x97, 0x9d, 0xa3, 0xa7, 0xad, 
       0xba, 0xbc, 0xc3, 0xc7, 0xd4, 0xe7, 0xf9, 0x104, 0x10c, 0x10e, 0x117, 
       0x119, 0x11c, 0x121, 0x126, 0x13d, 0x147, 0x159, 0x166, 0x179, 0x17d, 
       0x18f, 0x193, 0x19e, 0x1a7, 0x1b5, 0x1cb, 0x1db, 0x1e5, 0x214, 0x229, 
       0x22b, 0x233, 0x238, 0x242, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CflatParser::Initializer CflatParser::_init;
