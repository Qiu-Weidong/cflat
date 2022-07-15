
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

tree::TerminalNode* CflatParser::CompilationUnitContext::EOF() {
  return getToken(CflatParser::EOF, 0);
}

std::vector<CflatParser::ImportStmtContext *> CflatParser::CompilationUnitContext::importStmt() {
  return getRuleContexts<CflatParser::ImportStmtContext>();
}

CflatParser::ImportStmtContext* CflatParser::CompilationUnitContext::importStmt(size_t i) {
  return getRuleContext<CflatParser::ImportStmtContext>(i);
}

std::vector<CflatParser::DefinitionContext *> CflatParser::CompilationUnitContext::definition() {
  return getRuleContexts<CflatParser::DefinitionContext>();
}

CflatParser::DefinitionContext* CflatParser::CompilationUnitContext::definition(size_t i) {
  return getRuleContext<CflatParser::DefinitionContext>(i);
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
    setState(106);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__0)
      | (1ULL << CflatParser::T__7)
      | (1ULL << CflatParser::T__8)
      | (1ULL << CflatParser::T__9)
      | (1ULL << CflatParser::T__12)
      | (1ULL << CflatParser::T__15)
      | (1ULL << CflatParser::T__16)
      | (1ULL << CflatParser::T__17)
      | (1ULL << CflatParser::T__18)
      | (1ULL << CflatParser::T__19)
      | (1ULL << CflatParser::T__20)
      | (1ULL << CflatParser::T__21)
      | (1ULL << CflatParser::T__22))) != 0) || _la == CflatParser::Identifier

    || _la == CflatParser::StaticKeyWord) {
      setState(104);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CflatParser::T__0: {
          setState(102);
          importStmt();
          break;
        }

        case CflatParser::T__7:
        case CflatParser::T__8:
        case CflatParser::T__9:
        case CflatParser::T__12:
        case CflatParser::T__15:
        case CflatParser::T__16:
        case CflatParser::T__17:
        case CflatParser::T__18:
        case CflatParser::T__19:
        case CflatParser::T__20:
        case CflatParser::T__21:
        case CflatParser::T__22:
        case CflatParser::Identifier:
        case CflatParser::StaticKeyWord: {
          setState(103);
          definition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(109);
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

tree::TerminalNode* CflatParser::DeclarationFileContext::EOF() {
  return getToken(CflatParser::EOF, 0);
}

std::vector<CflatParser::ImportStmtContext *> CflatParser::DeclarationFileContext::importStmt() {
  return getRuleContexts<CflatParser::ImportStmtContext>();
}

CflatParser::ImportStmtContext* CflatParser::DeclarationFileContext::importStmt(size_t i) {
  return getRuleContext<CflatParser::ImportStmtContext>(i);
}

std::vector<CflatParser::DeclarationContext *> CflatParser::DeclarationFileContext::declaration() {
  return getRuleContexts<CflatParser::DeclarationContext>();
}

CflatParser::DeclarationContext* CflatParser::DeclarationFileContext::declaration(size_t i) {
  return getRuleContext<CflatParser::DeclarationContext>(i);
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
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__0)
      | (1ULL << CflatParser::T__7)
      | (1ULL << CflatParser::T__8)
      | (1ULL << CflatParser::T__9)
      | (1ULL << CflatParser::T__10))) != 0)) {
      setState(113);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CflatParser::T__0: {
          setState(111);
          importStmt();
          break;
        }

        case CflatParser::T__7:
        case CflatParser::T__8:
        case CflatParser::T__9:
        case CflatParser::T__10: {
          setState(112);
          declaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(118);
    match(CflatParser::EOF);
   
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
  enterRule(_localctx, 4, CflatParser::RuleImportStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(CflatParser::T__0);
    setState(121);
    libid();
    setState(122);
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
  enterRule(_localctx, 6, CflatParser::RuleLibid);
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
    setState(124);
    name();
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CflatParser::T__2) {
      setState(125);
      match(CflatParser::T__2);
      setState(126);
      name();
      setState(131);
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
  enterRule(_localctx, 8, CflatParser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(CflatParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

CflatParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::FunctionDefinitionContext* CflatParser::DefinitionContext::functionDefinition() {
  return getRuleContext<CflatParser::FunctionDefinitionContext>(0);
}

CflatParser::VariableDefinitionContext* CflatParser::DefinitionContext::variableDefinition() {
  return getRuleContext<CflatParser::VariableDefinitionContext>(0);
}

CflatParser::StructDefinitionContext* CflatParser::DefinitionContext::structDefinition() {
  return getRuleContext<CflatParser::StructDefinitionContext>(0);
}

CflatParser::UnionDefinitionContext* CflatParser::DefinitionContext::unionDefinition() {
  return getRuleContext<CflatParser::UnionDefinitionContext>(0);
}

CflatParser::TypeDefinitionContext* CflatParser::DefinitionContext::typeDefinition() {
  return getRuleContext<CflatParser::TypeDefinitionContext>(0);
}


size_t CflatParser::DefinitionContext::getRuleIndex() const {
  return CflatParser::RuleDefinition;
}

void CflatParser::DefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinition(this);
}

void CflatParser::DefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinition(this);
}


antlrcpp::Any CflatParser::DefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitDefinition(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::DefinitionContext* CflatParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 10, CflatParser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(139);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(134);
      functionDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(135);
      variableDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(136);
      structDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(137);
      unionDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(138);
      typeDefinition();
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

//----------------- DeclarationContext ------------------------------------------------------------------

CflatParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::FunctionDeclarationContext* CflatParser::DeclarationContext::functionDeclaration() {
  return getRuleContext<CflatParser::FunctionDeclarationContext>(0);
}

CflatParser::VariableDeclarationContext* CflatParser::DeclarationContext::variableDeclaration() {
  return getRuleContext<CflatParser::VariableDeclarationContext>(0);
}

CflatParser::StructDeclarationContext* CflatParser::DeclarationContext::structDeclaration() {
  return getRuleContext<CflatParser::StructDeclarationContext>(0);
}

CflatParser::UnionDeclarationContext* CflatParser::DeclarationContext::unionDeclaration() {
  return getRuleContext<CflatParser::UnionDeclarationContext>(0);
}

CflatParser::TypeDefinitionContext* CflatParser::DeclarationContext::typeDefinition() {
  return getRuleContext<CflatParser::TypeDefinitionContext>(0);
}


size_t CflatParser::DeclarationContext::getRuleIndex() const {
  return CflatParser::RuleDeclaration;
}

void CflatParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void CflatParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any CflatParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::DeclarationContext* CflatParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, CflatParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(141);
      functionDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(142);
      variableDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(143);
      structDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(144);
      unionDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(145);
      typeDefinition();
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

//----------------- VariableDefinitionContext ------------------------------------------------------------------

CflatParser::VariableDefinitionContext::VariableDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeContext* CflatParser::VariableDefinitionContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}

std::vector<CflatParser::NameContext *> CflatParser::VariableDefinitionContext::name() {
  return getRuleContexts<CflatParser::NameContext>();
}

CflatParser::NameContext* CflatParser::VariableDefinitionContext::name(size_t i) {
  return getRuleContext<CflatParser::NameContext>(i);
}

tree::TerminalNode* CflatParser::VariableDefinitionContext::StaticKeyWord() {
  return getToken(CflatParser::StaticKeyWord, 0);
}

std::vector<CflatParser::ExprContext *> CflatParser::VariableDefinitionContext::expr() {
  return getRuleContexts<CflatParser::ExprContext>();
}

CflatParser::ExprContext* CflatParser::VariableDefinitionContext::expr(size_t i) {
  return getRuleContext<CflatParser::ExprContext>(i);
}


size_t CflatParser::VariableDefinitionContext::getRuleIndex() const {
  return CflatParser::RuleVariableDefinition;
}

void CflatParser::VariableDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDefinition(this);
}

void CflatParser::VariableDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDefinition(this);
}


antlrcpp::Any CflatParser::VariableDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitVariableDefinition(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::VariableDefinitionContext* CflatParser::variableDefinition() {
  VariableDefinitionContext *_localctx = _tracker.createInstance<VariableDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 14, CflatParser::RuleVariableDefinition);
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
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::StaticKeyWord) {
      setState(148);
      match(CflatParser::StaticKeyWord);
    }
    setState(151);
    type();
    setState(152);
    name();
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::T__3) {
      setState(153);
      match(CflatParser::T__3);
      setState(154);
      expr(0);
    }
    setState(165);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CflatParser::T__4) {
      setState(157);
      match(CflatParser::T__4);
      setState(158);
      name();
      setState(161);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CflatParser::T__3) {
        setState(159);
        match(CflatParser::T__3);
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

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

CflatParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeContext* CflatParser::FunctionDefinitionContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}

CflatParser::NameContext* CflatParser::FunctionDefinitionContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}

CflatParser::ParamsContext* CflatParser::FunctionDefinitionContext::params() {
  return getRuleContext<CflatParser::ParamsContext>(0);
}

CflatParser::BlockContext* CflatParser::FunctionDefinitionContext::block() {
  return getRuleContext<CflatParser::BlockContext>(0);
}

tree::TerminalNode* CflatParser::FunctionDefinitionContext::StaticKeyWord() {
  return getToken(CflatParser::StaticKeyWord, 0);
}


size_t CflatParser::FunctionDefinitionContext::getRuleIndex() const {
  return CflatParser::RuleFunctionDefinition;
}

void CflatParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void CflatParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any CflatParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::FunctionDefinitionContext* CflatParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 16, CflatParser::RuleFunctionDefinition);
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
    if (_la == CflatParser::StaticKeyWord) {
      setState(170);
      match(CflatParser::StaticKeyWord);
    }
    setState(173);
    type();
    setState(174);
    name();
    setState(175);
    match(CflatParser::T__5);
    setState(176);
    params();
    setState(177);
    match(CflatParser::T__6);
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

//----------------- StructDefinitionContext ------------------------------------------------------------------

CflatParser::StructDefinitionContext::StructDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::NameContext* CflatParser::StructDefinitionContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}

CflatParser::MemberListContext* CflatParser::StructDefinitionContext::memberList() {
  return getRuleContext<CflatParser::MemberListContext>(0);
}


size_t CflatParser::StructDefinitionContext::getRuleIndex() const {
  return CflatParser::RuleStructDefinition;
}

void CflatParser::StructDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDefinition(this);
}

void CflatParser::StructDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDefinition(this);
}


antlrcpp::Any CflatParser::StructDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitStructDefinition(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::StructDefinitionContext* CflatParser::structDefinition() {
  StructDefinitionContext *_localctx = _tracker.createInstance<StructDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 18, CflatParser::RuleStructDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(CflatParser::T__7);
    setState(181);
    name();
    setState(182);
    memberList();
    setState(183);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionDefinitionContext ------------------------------------------------------------------

CflatParser::UnionDefinitionContext::UnionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::NameContext* CflatParser::UnionDefinitionContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}

CflatParser::MemberListContext* CflatParser::UnionDefinitionContext::memberList() {
  return getRuleContext<CflatParser::MemberListContext>(0);
}


size_t CflatParser::UnionDefinitionContext::getRuleIndex() const {
  return CflatParser::RuleUnionDefinition;
}

void CflatParser::UnionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnionDefinition(this);
}

void CflatParser::UnionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnionDefinition(this);
}


antlrcpp::Any CflatParser::UnionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitUnionDefinition(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::UnionDefinitionContext* CflatParser::unionDefinition() {
  UnionDefinitionContext *_localctx = _tracker.createInstance<UnionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 20, CflatParser::RuleUnionDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(CflatParser::T__8);
    setState(186);
    name();
    setState(187);
    memberList();
    setState(188);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionContext ------------------------------------------------------------------

CflatParser::TypeDefinitionContext::TypeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeContext* CflatParser::TypeDefinitionContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}

tree::TerminalNode* CflatParser::TypeDefinitionContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}


size_t CflatParser::TypeDefinitionContext::getRuleIndex() const {
  return CflatParser::RuleTypeDefinition;
}

void CflatParser::TypeDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDefinition(this);
}

void CflatParser::TypeDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDefinition(this);
}


antlrcpp::Any CflatParser::TypeDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitTypeDefinition(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::TypeDefinitionContext* CflatParser::typeDefinition() {
  TypeDefinitionContext *_localctx = _tracker.createInstance<TypeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 22, CflatParser::RuleTypeDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(CflatParser::T__9);
    setState(191);
    type();
    setState(192);
    match(CflatParser::Identifier);
    setState(193);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

CflatParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeContext* CflatParser::FunctionDeclarationContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}

CflatParser::NameContext* CflatParser::FunctionDeclarationContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}

CflatParser::ParamsContext* CflatParser::FunctionDeclarationContext::params() {
  return getRuleContext<CflatParser::ParamsContext>(0);
}

CflatParser::ParamTypeRefsContext* CflatParser::FunctionDeclarationContext::paramTypeRefs() {
  return getRuleContext<CflatParser::ParamTypeRefsContext>(0);
}


size_t CflatParser::FunctionDeclarationContext::getRuleIndex() const {
  return CflatParser::RuleFunctionDeclaration;
}

void CflatParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void CflatParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any CflatParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::FunctionDeclarationContext* CflatParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, CflatParser::RuleFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(CflatParser::T__10);
    setState(196);
    type();
    setState(197);
    name();
    setState(198);
    match(CflatParser::T__5);
    setState(201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(199);
      params();
      break;
    }

    case 2: {
      setState(200);
      paramTypeRefs();
      break;
    }

    default:
      break;
    }
    setState(203);
    match(CflatParser::T__6);
    setState(204);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

CflatParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeContext* CflatParser::VariableDeclarationContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}

CflatParser::NameContext* CflatParser::VariableDeclarationContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}


size_t CflatParser::VariableDeclarationContext::getRuleIndex() const {
  return CflatParser::RuleVariableDeclaration;
}

void CflatParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void CflatParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


antlrcpp::Any CflatParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::VariableDeclarationContext* CflatParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, CflatParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(CflatParser::T__10);
    setState(207);
    type();
    setState(208);
    name();
    setState(209);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

CflatParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::NameContext* CflatParser::StructDeclarationContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}


size_t CflatParser::StructDeclarationContext::getRuleIndex() const {
  return CflatParser::RuleStructDeclaration;
}

void CflatParser::StructDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaration(this);
}

void CflatParser::StructDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaration(this);
}


antlrcpp::Any CflatParser::StructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::StructDeclarationContext* CflatParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, CflatParser::RuleStructDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(CflatParser::T__7);
    setState(212);
    name();
    setState(213);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionDeclarationContext ------------------------------------------------------------------

CflatParser::UnionDeclarationContext::UnionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::NameContext* CflatParser::UnionDeclarationContext::name() {
  return getRuleContext<CflatParser::NameContext>(0);
}


size_t CflatParser::UnionDeclarationContext::getRuleIndex() const {
  return CflatParser::RuleUnionDeclaration;
}

void CflatParser::UnionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnionDeclaration(this);
}

void CflatParser::UnionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnionDeclaration(this);
}


antlrcpp::Any CflatParser::UnionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitUnionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::UnionDeclarationContext* CflatParser::unionDeclaration() {
  UnionDeclarationContext *_localctx = _tracker.createInstance<UnionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 30, CflatParser::RuleUnionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(CflatParser::T__8);
    setState(216);
    name();
    setState(217);
    match(CflatParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarargContext ------------------------------------------------------------------

CflatParser::VarargContext::VarargContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CflatParser::VarargContext::getRuleIndex() const {
  return CflatParser::RuleVararg;
}

void CflatParser::VarargContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVararg(this);
}

void CflatParser::VarargContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVararg(this);
}


antlrcpp::Any CflatParser::VarargContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitVararg(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::VarargContext* CflatParser::vararg() {
  VarargContext *_localctx = _tracker.createInstance<VarargContext>(_ctx, getState());
  enterRule(_localctx, 32, CflatParser::RuleVararg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(CflatParser::T__4);
    setState(220);
    match(CflatParser::T__11);
   
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

CflatParser::VarargContext* CflatParser::ParamsContext::vararg() {
  return getRuleContext<CflatParser::VarargContext>(0);
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
  enterRule(_localctx, 34, CflatParser::RuleParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(227);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(222);
      match(CflatParser::T__12);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(223);
      fixedParams();
      setState(225);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CflatParser::T__4) {
        setState(224);
        vararg();
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
  enterRule(_localctx, 36, CflatParser::RuleFixedParams);

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
    setState(229);
    param();
    setState(234);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(230);
        match(CflatParser::T__4);
        setState(231);
        param(); 
      }
      setState(236);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
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
  enterRule(_localctx, 38, CflatParser::RuleParam);

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
    type();
    setState(238);
    name();
   
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

CflatParser::VarargContext* CflatParser::ParamTypeRefsContext::vararg() {
  return getRuleContext<CflatParser::VarargContext>(0);
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
  enterRule(_localctx, 40, CflatParser::RuleParamTypeRefs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(245);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(240);
      match(CflatParser::T__12);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(241);
      fixedParamTypeRefs();
      setState(243);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CflatParser::T__4) {
        setState(242);
        vararg();
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

std::vector<CflatParser::ParamTypeRefContext *> CflatParser::FixedParamTypeRefsContext::paramTypeRef() {
  return getRuleContexts<CflatParser::ParamTypeRefContext>();
}

CflatParser::ParamTypeRefContext* CflatParser::FixedParamTypeRefsContext::paramTypeRef(size_t i) {
  return getRuleContext<CflatParser::ParamTypeRefContext>(i);
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
  enterRule(_localctx, 42, CflatParser::RuleFixedParamTypeRefs);

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
    setState(247);
    paramTypeRef();
    setState(252);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(248);
        match(CflatParser::T__4);
        setState(249);
        paramTypeRef(); 
      }
      setState(254);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamTypeRefContext ------------------------------------------------------------------

CflatParser::ParamTypeRefContext::ParamTypeRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CflatParser::TypeContext* CflatParser::ParamTypeRefContext::type() {
  return getRuleContext<CflatParser::TypeContext>(0);
}


size_t CflatParser::ParamTypeRefContext::getRuleIndex() const {
  return CflatParser::RuleParamTypeRef;
}

void CflatParser::ParamTypeRefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamTypeRef(this);
}

void CflatParser::ParamTypeRefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamTypeRef(this);
}


antlrcpp::Any CflatParser::ParamTypeRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitParamTypeRef(this);
  else
    return visitor->visitChildren(this);
}

CflatParser::ParamTypeRefContext* CflatParser::paramTypeRef() {
  ParamTypeRefContext *_localctx = _tracker.createInstance<ParamTypeRefContext>(_ctx, getState());
  enterRule(_localctx, 44, CflatParser::RuleParamTypeRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    type();
   
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

std::vector<CflatParser::VariableDefinitionContext *> CflatParser::BlockContext::variableDefinition() {
  return getRuleContexts<CflatParser::VariableDefinitionContext>();
}

CflatParser::VariableDefinitionContext* CflatParser::BlockContext::variableDefinition(size_t i) {
  return getRuleContext<CflatParser::VariableDefinitionContext>(i);
}

std::vector<CflatParser::StmtContext *> CflatParser::BlockContext::stmt() {
  return getRuleContexts<CflatParser::StmtContext>();
}

CflatParser::StmtContext* CflatParser::BlockContext::stmt(size_t i) {
  return getRuleContext<CflatParser::StmtContext>(i);
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
  enterRule(_localctx, 46, CflatParser::RuleBlock);
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
    setState(257);
    match(CflatParser::T__13);
    setState(262);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__1)
      | (1ULL << CflatParser::T__5)
      | (1ULL << CflatParser::T__7)
      | (1ULL << CflatParser::T__8)
      | (1ULL << CflatParser::T__12)
      | (1ULL << CflatParser::T__13)
      | (1ULL << CflatParser::T__15)
      | (1ULL << CflatParser::T__16)
      | (1ULL << CflatParser::T__17)
      | (1ULL << CflatParser::T__18)
      | (1ULL << CflatParser::T__19)
      | (1ULL << CflatParser::T__20)
      | (1ULL << CflatParser::T__21)
      | (1ULL << CflatParser::T__22)
      | (1ULL << CflatParser::T__23)
      | (1ULL << CflatParser::T__27)
      | (1ULL << CflatParser::T__29)
      | (1ULL << CflatParser::T__30)
      | (1ULL << CflatParser::T__31)
      | (1ULL << CflatParser::T__32)
      | (1ULL << CflatParser::T__35)
      | (1ULL << CflatParser::T__36)
      | (1ULL << CflatParser::T__37)
      | (1ULL << CflatParser::T__38)
      | (1ULL << CflatParser::T__40)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CflatParser::T__67 - 68))
      | (1ULL << (CflatParser::T__68 - 68))
      | (1ULL << (CflatParser::HexLiteral - 68))
      | (1ULL << (CflatParser::DecimalLiteral - 68))
      | (1ULL << (CflatParser::OctalLiteral - 68))
      | (1ULL << (CflatParser::BoolLiteral - 68))
      | (1ULL << (CflatParser::FloatingPointLiteral - 68))
      | (1ULL << (CflatParser::CharacterLiteral - 68))
      | (1ULL << (CflatParser::StringLiteral - 68))
      | (1ULL << (CflatParser::Identifier - 68))
      | (1ULL << (CflatParser::StaticKeyWord - 68)))) != 0)) {
      setState(260);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(258);
        variableDefinition();
        break;
      }

      case 2: {
        setState(259);
        stmt();
        break;
      }

      default:
        break;
      }
      setState(264);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(265);
    match(CflatParser::T__14);
   
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
  enterRule(_localctx, 48, CflatParser::RuleMemberList);
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
    setState(267);
    match(CflatParser::T__13);
    setState(273);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__7)
      | (1ULL << CflatParser::T__8)
      | (1ULL << CflatParser::T__12)
      | (1ULL << CflatParser::T__15)
      | (1ULL << CflatParser::T__16)
      | (1ULL << CflatParser::T__17)
      | (1ULL << CflatParser::T__18)
      | (1ULL << CflatParser::T__19)
      | (1ULL << CflatParser::T__20)
      | (1ULL << CflatParser::T__21)
      | (1ULL << CflatParser::T__22))) != 0) || _la == CflatParser::Identifier) {
      setState(268);
      slot();
      setState(269);
      match(CflatParser::T__1);
      setState(275);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(276);
    match(CflatParser::T__14);
   
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
  enterRule(_localctx, 50, CflatParser::RuleSlot);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    type();
    setState(279);
    name();
   
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

CflatParser::BasicTypeContext* CflatParser::TypeContext::basicType() {
  return getRuleContext<CflatParser::BasicTypeContext>(0);
}

std::vector<CflatParser::TypeSuffixContext *> CflatParser::TypeContext::typeSuffix() {
  return getRuleContexts<CflatParser::TypeSuffixContext>();
}

CflatParser::TypeSuffixContext* CflatParser::TypeContext::typeSuffix(size_t i) {
  return getRuleContext<CflatParser::TypeSuffixContext>(i);
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
  enterRule(_localctx, 52, CflatParser::RuleType);

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
    setState(281);
    basicType();
    setState(285);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(282);
        typeSuffix(); 
      }
      setState(287);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicTypeContext ------------------------------------------------------------------

CflatParser::BasicTypeContext::BasicTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CflatParser::BasicTypeContext::getRuleIndex() const {
  return CflatParser::RuleBasicType;
}

void CflatParser::BasicTypeContext::copyFrom(BasicTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BasicUnsignedShortTypeContext ------------------------------------------------------------------

CflatParser::BasicUnsignedShortTypeContext::BasicUnsignedShortTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicUnsignedShortTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicUnsignedShortType(this);
}
void CflatParser::BasicUnsignedShortTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicUnsignedShortType(this);
}

antlrcpp::Any CflatParser::BasicUnsignedShortTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicUnsignedShortType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicVoidTypeContext ------------------------------------------------------------------

CflatParser::BasicVoidTypeContext::BasicVoidTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicVoidTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicVoidType(this);
}
void CflatParser::BasicVoidTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicVoidType(this);
}

antlrcpp::Any CflatParser::BasicVoidTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicVoidType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicSignedShortTypeContext ------------------------------------------------------------------

CflatParser::BasicSignedShortTypeContext::BasicSignedShortTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicSignedShortTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicSignedShortType(this);
}
void CflatParser::BasicSignedShortTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicSignedShortType(this);
}

antlrcpp::Any CflatParser::BasicSignedShortTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicSignedShortType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicFloatTypeContext ------------------------------------------------------------------

CflatParser::BasicFloatTypeContext::BasicFloatTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicFloatTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicFloatType(this);
}
void CflatParser::BasicFloatTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicFloatType(this);
}

antlrcpp::Any CflatParser::BasicFloatTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicFloatType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicUnionTypeContext ------------------------------------------------------------------

tree::TerminalNode* CflatParser::BasicUnionTypeContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}

CflatParser::BasicUnionTypeContext::BasicUnionTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicUnionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicUnionType(this);
}
void CflatParser::BasicUnionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicUnionType(this);
}

antlrcpp::Any CflatParser::BasicUnionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicUnionType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicUnsignedLongTypeContext ------------------------------------------------------------------

CflatParser::BasicUnsignedLongTypeContext::BasicUnsignedLongTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicUnsignedLongTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicUnsignedLongType(this);
}
void CflatParser::BasicUnsignedLongTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicUnsignedLongType(this);
}

antlrcpp::Any CflatParser::BasicUnsignedLongTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicUnsignedLongType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicStructTypeContext ------------------------------------------------------------------

tree::TerminalNode* CflatParser::BasicStructTypeContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}

CflatParser::BasicStructTypeContext::BasicStructTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicStructTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicStructType(this);
}
void CflatParser::BasicStructTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicStructType(this);
}

antlrcpp::Any CflatParser::BasicStructTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicStructType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicSignedCharTypeContext ------------------------------------------------------------------

CflatParser::BasicSignedCharTypeContext::BasicSignedCharTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicSignedCharTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicSignedCharType(this);
}
void CflatParser::BasicSignedCharTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicSignedCharType(this);
}

antlrcpp::Any CflatParser::BasicSignedCharTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicSignedCharType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicUserTypeContext ------------------------------------------------------------------

tree::TerminalNode* CflatParser::BasicUserTypeContext::Identifier() {
  return getToken(CflatParser::Identifier, 0);
}

CflatParser::BasicUserTypeContext::BasicUserTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicUserTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicUserType(this);
}
void CflatParser::BasicUserTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicUserType(this);
}

antlrcpp::Any CflatParser::BasicUserTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicUserType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicSignedIntTypeContext ------------------------------------------------------------------

CflatParser::BasicSignedIntTypeContext::BasicSignedIntTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicSignedIntTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicSignedIntType(this);
}
void CflatParser::BasicSignedIntTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicSignedIntType(this);
}

antlrcpp::Any CflatParser::BasicSignedIntTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicSignedIntType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicUnsignedCharTypeContext ------------------------------------------------------------------

CflatParser::BasicUnsignedCharTypeContext::BasicUnsignedCharTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicUnsignedCharTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicUnsignedCharType(this);
}
void CflatParser::BasicUnsignedCharTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicUnsignedCharType(this);
}

antlrcpp::Any CflatParser::BasicUnsignedCharTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicUnsignedCharType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicUnsignedIntTypeContext ------------------------------------------------------------------

CflatParser::BasicUnsignedIntTypeContext::BasicUnsignedIntTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicUnsignedIntTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicUnsignedIntType(this);
}
void CflatParser::BasicUnsignedIntTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicUnsignedIntType(this);
}

antlrcpp::Any CflatParser::BasicUnsignedIntTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicUnsignedIntType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicDoubleTypeContext ------------------------------------------------------------------

CflatParser::BasicDoubleTypeContext::BasicDoubleTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicDoubleTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicDoubleType(this);
}
void CflatParser::BasicDoubleTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicDoubleType(this);
}

antlrcpp::Any CflatParser::BasicDoubleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicDoubleType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BasicSignedLongTypeContext ------------------------------------------------------------------

CflatParser::BasicSignedLongTypeContext::BasicSignedLongTypeContext(BasicTypeContext *ctx) { copyFrom(ctx); }

void CflatParser::BasicSignedLongTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicSignedLongType(this);
}
void CflatParser::BasicSignedLongTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicSignedLongType(this);
}

antlrcpp::Any CflatParser::BasicSignedLongTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitBasicSignedLongType(this);
  else
    return visitor->visitChildren(this);
}
CflatParser::BasicTypeContext* CflatParser::basicType() {
  BasicTypeContext *_localctx = _tracker.createInstance<BasicTypeContext>(_ctx, getState());
  enterRule(_localctx, 54, CflatParser::RuleBasicType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CflatParser::BasicVoidTypeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(288);
      match(CflatParser::T__12);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CflatParser::BasicSignedCharTypeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(290);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CflatParser::T__15) {
        setState(289);
        match(CflatParser::T__15);
      }
      setState(292);
      match(CflatParser::T__16);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CflatParser::BasicSignedShortTypeContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(294);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CflatParser::T__15) {
        setState(293);
        match(CflatParser::T__15);
      }
      setState(296);
      match(CflatParser::T__17);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CflatParser::BasicSignedIntTypeContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(302);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(298);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CflatParser::T__15) {
          setState(297);
          match(CflatParser::T__15);
        }
        setState(300);
        match(CflatParser::T__18);
        break;
      }

      case 2: {
        setState(301);
        match(CflatParser::T__15);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CflatParser::BasicSignedLongTypeContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(305);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CflatParser::T__15) {
        setState(304);
        match(CflatParser::T__15);
      }
      setState(307);
      match(CflatParser::T__19);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CflatParser::BasicUnsignedCharTypeContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(308);
      match(CflatParser::T__20);
      setState(309);
      match(CflatParser::T__16);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CflatParser::BasicUnsignedShortTypeContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(310);
      match(CflatParser::T__20);
      setState(311);
      match(CflatParser::T__17);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<CflatParser::BasicUnsignedIntTypeContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(312);
      match(CflatParser::T__20);
      setState(314);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(313);
        match(CflatParser::T__18);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<CflatParser::BasicUnsignedLongTypeContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(316);
      match(CflatParser::T__20);
      setState(317);
      match(CflatParser::T__19);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<CflatParser::BasicFloatTypeContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(318);
      match(CflatParser::T__21);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<CflatParser::BasicDoubleTypeContext>(_localctx);
      enterOuterAlt(_localctx, 11);
      setState(319);
      match(CflatParser::T__22);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<CflatParser::BasicStructTypeContext>(_localctx);
      enterOuterAlt(_localctx, 12);
      setState(320);
      match(CflatParser::T__7);
      setState(321);
      match(CflatParser::Identifier);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<CflatParser::BasicUnionTypeContext>(_localctx);
      enterOuterAlt(_localctx, 13);
      setState(322);
      match(CflatParser::T__8);
      setState(323);
      match(CflatParser::Identifier);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<CflatParser::BasicUserTypeContext>(_localctx);
      enterOuterAlt(_localctx, 14);
      setState(324);
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

//----------------- TypeSuffixContext ------------------------------------------------------------------

CflatParser::TypeSuffixContext::TypeSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CflatParser::TypeSuffixContext::getRuleIndex() const {
  return CflatParser::RuleTypeSuffix;
}

void CflatParser::TypeSuffixContext::copyFrom(TypeSuffixContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionTypeSuffixContext ------------------------------------------------------------------

CflatParser::ParamTypeRefsContext* CflatParser::FunctionTypeSuffixContext::paramTypeRefs() {
  return getRuleContext<CflatParser::ParamTypeRefsContext>(0);
}

CflatParser::FunctionTypeSuffixContext::FunctionTypeSuffixContext(TypeSuffixContext *ctx) { copyFrom(ctx); }

void CflatParser::FunctionTypeSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionTypeSuffix(this);
}
void CflatParser::FunctionTypeSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionTypeSuffix(this);
}

antlrcpp::Any CflatParser::FunctionTypeSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitFunctionTypeSuffix(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PointerTypeSuffixContext ------------------------------------------------------------------

CflatParser::PointerTypeSuffixContext::PointerTypeSuffixContext(TypeSuffixContext *ctx) { copyFrom(ctx); }

void CflatParser::PointerTypeSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerTypeSuffix(this);
}
void CflatParser::PointerTypeSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerTypeSuffix(this);
}

antlrcpp::Any CflatParser::PointerTypeSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitPointerTypeSuffix(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayTypeSuffixContext ------------------------------------------------------------------

CflatParser::IntegerContext* CflatParser::ArrayTypeSuffixContext::integer() {
  return getRuleContext<CflatParser::IntegerContext>(0);
}

CflatParser::ArrayTypeSuffixContext::ArrayTypeSuffixContext(TypeSuffixContext *ctx) { copyFrom(ctx); }

void CflatParser::ArrayTypeSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayTypeSuffix(this);
}
void CflatParser::ArrayTypeSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CflatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayTypeSuffix(this);
}

antlrcpp::Any CflatParser::ArrayTypeSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CflatVisitor*>(visitor))
    return parserVisitor->visitArrayTypeSuffix(this);
  else
    return visitor->visitChildren(this);
}
CflatParser::TypeSuffixContext* CflatParser::typeSuffix() {
  TypeSuffixContext *_localctx = _tracker.createInstance<TypeSuffixContext>(_ctx, getState());
  enterRule(_localctx, 56, CflatParser::RuleTypeSuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(337);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CflatParser::T__23: {
        _localctx = _tracker.createInstance<CflatParser::PointerTypeSuffixContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(327);
        match(CflatParser::T__23);
        break;
      }

      case CflatParser::T__24: {
        _localctx = _tracker.createInstance<CflatParser::ArrayTypeSuffixContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(328);
        match(CflatParser::T__24);
        setState(330);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & ((1ULL << (CflatParser::HexLiteral - 70))
          | (1ULL << (CflatParser::DecimalLiteral - 70))
          | (1ULL << (CflatParser::OctalLiteral - 70)))) != 0)) {
          setState(329);
          integer();
        }
        setState(332);
        match(CflatParser::T__25);
        break;
      }

      case CflatParser::T__5: {
        _localctx = _tracker.createInstance<CflatParser::FunctionTypeSuffixContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(333);
        match(CflatParser::T__5);
        setState(334);
        paramTypeRefs();
        setState(335);
        match(CflatParser::T__6);
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
  enterRule(_localctx, 58, CflatParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(354);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(339);
      match(CflatParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(340);
      labeledStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(341);
      expr(0);
      setState(342);
      match(CflatParser::T__1);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(344);
      block();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(345);
      ifStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(346);
      whileStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(347);
      dowhileStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(348);
      forStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(349);
      switchStmt();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(350);
      breakStmt();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(351);
      continueStmt();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(352);
      gotoStmt();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(353);
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
  enterRule(_localctx, 60, CflatParser::RuleLabeledStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    match(CflatParser::Identifier);
    setState(357);
    match(CflatParser::T__26);
    setState(358);
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
  enterRule(_localctx, 62, CflatParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    match(CflatParser::T__27);
    setState(361);
    match(CflatParser::T__5);
    setState(362);
    expr(0);
    setState(363);
    match(CflatParser::T__6);
    setState(364);
    stmt();
    setState(367);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(365);
      match(CflatParser::T__28);
      setState(366);
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
  enterRule(_localctx, 64, CflatParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    match(CflatParser::T__29);
    setState(370);
    match(CflatParser::T__5);
    setState(371);
    expr(0);
    setState(372);
    match(CflatParser::T__6);
    setState(373);
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
  enterRule(_localctx, 66, CflatParser::RuleDowhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    match(CflatParser::T__30);
    setState(376);
    stmt();
    setState(377);
    match(CflatParser::T__29);
    setState(378);
    match(CflatParser::T__5);
    setState(379);
    expr(0);
    setState(380);
    match(CflatParser::T__6);
    setState(381);
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
  enterRule(_localctx, 68, CflatParser::RuleForStmt);
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
    setState(383);
    match(CflatParser::T__31);
    setState(384);
    match(CflatParser::T__5);
    setState(386);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__5)
      | (1ULL << CflatParser::T__23)
      | (1ULL << CflatParser::T__40)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CflatParser::T__67 - 68))
      | (1ULL << (CflatParser::T__68 - 68))
      | (1ULL << (CflatParser::HexLiteral - 68))
      | (1ULL << (CflatParser::DecimalLiteral - 68))
      | (1ULL << (CflatParser::OctalLiteral - 68))
      | (1ULL << (CflatParser::BoolLiteral - 68))
      | (1ULL << (CflatParser::FloatingPointLiteral - 68))
      | (1ULL << (CflatParser::CharacterLiteral - 68))
      | (1ULL << (CflatParser::StringLiteral - 68))
      | (1ULL << (CflatParser::Identifier - 68)))) != 0)) {
      setState(385);
      expr(0);
    }
    setState(388);
    match(CflatParser::T__1);
    setState(390);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__5)
      | (1ULL << CflatParser::T__23)
      | (1ULL << CflatParser::T__40)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CflatParser::T__67 - 68))
      | (1ULL << (CflatParser::T__68 - 68))
      | (1ULL << (CflatParser::HexLiteral - 68))
      | (1ULL << (CflatParser::DecimalLiteral - 68))
      | (1ULL << (CflatParser::OctalLiteral - 68))
      | (1ULL << (CflatParser::BoolLiteral - 68))
      | (1ULL << (CflatParser::FloatingPointLiteral - 68))
      | (1ULL << (CflatParser::CharacterLiteral - 68))
      | (1ULL << (CflatParser::StringLiteral - 68))
      | (1ULL << (CflatParser::Identifier - 68)))) != 0)) {
      setState(389);
      expr(0);
    }
    setState(392);
    match(CflatParser::T__1);
    setState(393);
    expr(0);
    setState(394);
    match(CflatParser::T__6);
    setState(395);
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
  enterRule(_localctx, 70, CflatParser::RuleSwitchStmt);

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
    match(CflatParser::T__32);
    setState(398);
    match(CflatParser::T__5);
    setState(399);
    expr(0);
    setState(400);
    match(CflatParser::T__6);
    setState(401);
    match(CflatParser::T__13);
    setState(402);
    caseClauses();
    setState(403);
    match(CflatParser::T__14);
   
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
  enterRule(_localctx, 72, CflatParser::RuleCaseClauses);
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
    setState(408);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CflatParser::T__33) {
      setState(405);
      caseClause();
      setState(410);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(412);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CflatParser::T__34) {
      setState(411);
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
  enterRule(_localctx, 74, CflatParser::RuleCaseClause);

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
    cases();
    setState(415);
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
  enterRule(_localctx, 76, CflatParser::RuleCases);
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
    setState(421); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(417);
      match(CflatParser::T__33);
      setState(418);
      primary();
      setState(419);
      match(CflatParser::T__26);
      setState(423); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CflatParser::T__33);
   
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
  enterRule(_localctx, 78, CflatParser::RuleDefaultClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    match(CflatParser::T__34);
    setState(426);
    match(CflatParser::T__26);
    setState(427);
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
  enterRule(_localctx, 80, CflatParser::RuleCaseBody);
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
    setState(430); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(429);
      stmt();
      setState(432); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__1)
      | (1ULL << CflatParser::T__5)
      | (1ULL << CflatParser::T__13)
      | (1ULL << CflatParser::T__23)
      | (1ULL << CflatParser::T__27)
      | (1ULL << CflatParser::T__29)
      | (1ULL << CflatParser::T__30)
      | (1ULL << CflatParser::T__31)
      | (1ULL << CflatParser::T__32)
      | (1ULL << CflatParser::T__35)
      | (1ULL << CflatParser::T__36)
      | (1ULL << CflatParser::T__37)
      | (1ULL << CflatParser::T__38)
      | (1ULL << CflatParser::T__40)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CflatParser::T__67 - 68))
      | (1ULL << (CflatParser::T__68 - 68))
      | (1ULL << (CflatParser::HexLiteral - 68))
      | (1ULL << (CflatParser::DecimalLiteral - 68))
      | (1ULL << (CflatParser::OctalLiteral - 68))
      | (1ULL << (CflatParser::BoolLiteral - 68))
      | (1ULL << (CflatParser::FloatingPointLiteral - 68))
      | (1ULL << (CflatParser::CharacterLiteral - 68))
      | (1ULL << (CflatParser::StringLiteral - 68))
      | (1ULL << (CflatParser::Identifier - 68)))) != 0));
   
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
  enterRule(_localctx, 82, CflatParser::RuleGotoStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(CflatParser::T__35);
    setState(435);
    match(CflatParser::Identifier);
    setState(436);
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
  enterRule(_localctx, 84, CflatParser::RuleBreakStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    match(CflatParser::T__36);
    setState(439);
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
  enterRule(_localctx, 86, CflatParser::RuleContinueStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    match(CflatParser::T__37);
    setState(442);
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
  enterRule(_localctx, 88, CflatParser::RuleReturnStmt);
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
    setState(444);
    match(CflatParser::T__38);
    setState(446);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__5)
      | (1ULL << CflatParser::T__23)
      | (1ULL << CflatParser::T__40)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CflatParser::T__67 - 68))
      | (1ULL << (CflatParser::T__68 - 68))
      | (1ULL << (CflatParser::HexLiteral - 68))
      | (1ULL << (CflatParser::DecimalLiteral - 68))
      | (1ULL << (CflatParser::OctalLiteral - 68))
      | (1ULL << (CflatParser::BoolLiteral - 68))
      | (1ULL << (CflatParser::FloatingPointLiteral - 68))
      | (1ULL << (CflatParser::CharacterLiteral - 68))
      | (1ULL << (CflatParser::StringLiteral - 68))
      | (1ULL << (CflatParser::Identifier - 68)))) != 0)) {
      setState(445);
      expr(0);
    }
    setState(448);
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
  size_t startState = 90;
  enterRecursionRule(_localctx, 90, CflatParser::RuleExpr, precedence);

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
    setState(468);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(451);
      primary();
      break;
    }

    case 2: {
      setState(452);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CflatParser::T__40)
        | (1ULL << CflatParser::T__41)
        | (1ULL << CflatParser::T__42)
        | (1ULL << CflatParser::T__43))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(453);
      expr(18);
      break;
    }

    case 3: {
      setState(454);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CflatParser::T__23)
        | (1ULL << CflatParser::T__42)
        | (1ULL << CflatParser::T__43)
        | (1ULL << CflatParser::T__44)
        | (1ULL << CflatParser::T__45)
        | (1ULL << CflatParser::T__46))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(455);
      expr(17);
      break;
    }

    case 4: {
      setState(456);
      match(CflatParser::T__5);
      setState(457);
      type();
      setState(458);
      match(CflatParser::T__6);
      setState(459);
      expr(16);
      break;
    }

    case 5: {
      setState(461);
      match(CflatParser::T__67);
      setState(462);
      match(CflatParser::T__5);
      setState(463);
      type();
      setState(464);
      match(CflatParser::T__6);
      break;
    }

    case 6: {
      setState(466);
      match(CflatParser::T__67);
      setState(467);
      expr(1);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(564);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(562);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(470);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(471);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CflatParser::T__23)
            | (1ULL << CflatParser::T__47)
            | (1ULL << CflatParser::T__48))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(472);
          expr(16);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(473);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(474);
          _la = _input->LA(1);
          if (!(_la == CflatParser::T__42

          || _la == CflatParser::T__43)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(475);
          expr(15);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(476);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(484);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
          case 1: {
            setState(477);
            match(CflatParser::T__49);
            setState(478);
            match(CflatParser::T__49);
            break;
          }

          case 2: {
            setState(479);
            match(CflatParser::T__50);
            setState(480);
            match(CflatParser::T__50);
            setState(481);
            match(CflatParser::T__50);
            break;
          }

          case 3: {
            setState(482);
            match(CflatParser::T__50);
            setState(483);
            match(CflatParser::T__50);
            break;
          }

          default:
            break;
          }
          setState(486);
          expr(14);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(487);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(494);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
          case 1: {
            setState(488);
            match(CflatParser::T__49);
            setState(489);
            match(CflatParser::T__3);
            break;
          }

          case 2: {
            setState(490);
            match(CflatParser::T__50);
            setState(491);
            match(CflatParser::T__3);
            break;
          }

          case 3: {
            setState(492);
            match(CflatParser::T__50);
            break;
          }

          case 4: {
            setState(493);
            match(CflatParser::T__49);
            break;
          }

          default:
            break;
          }
          setState(496);
          expr(13);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(497);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(498);
          _la = _input->LA(1);
          if (!(_la == CflatParser::T__52

          || _la == CflatParser::T__53)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(499);
          expr(11);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(500);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(501);
          match(CflatParser::T__46);
          setState(502);
          expr(10);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(503);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(504);
          match(CflatParser::T__54);
          setState(505);
          expr(9);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(506);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(507);
          match(CflatParser::T__55);
          setState(508);
          expr(8);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(509);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(510);
          match(CflatParser::T__56);
          setState(511);
          expr(7);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(512);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(513);
          match(CflatParser::T__57);
          setState(514);
          expr(6);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(515);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(516);
          match(CflatParser::T__58);
          setState(517);
          expr(0);
          setState(518);
          match(CflatParser::T__26);
          setState(519);
          expr(5);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(521);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(541);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
          case 1: {
            setState(522);
            match(CflatParser::T__59);
            break;
          }

          case 2: {
            setState(523);
            match(CflatParser::T__60);
            break;
          }

          case 3: {
            setState(524);
            match(CflatParser::T__61);
            break;
          }

          case 4: {
            setState(525);
            match(CflatParser::T__62);
            break;
          }

          case 5: {
            setState(526);
            match(CflatParser::T__63);
            break;
          }

          case 6: {
            setState(527);
            match(CflatParser::T__64);
            break;
          }

          case 7: {
            setState(528);
            match(CflatParser::T__65);
            break;
          }

          case 8: {
            setState(529);
            match(CflatParser::T__3);
            break;
          }

          case 9: {
            setState(530);
            match(CflatParser::T__50);
            setState(531);
            match(CflatParser::T__50);
            setState(532);
            match(CflatParser::T__3);
            break;
          }

          case 10: {
            setState(533);
            match(CflatParser::T__50);
            setState(534);
            match(CflatParser::T__50);
            setState(535);
            match(CflatParser::T__50);
            setState(536);
            match(CflatParser::T__3);
            break;
          }

          case 11: {
            setState(537);
            match(CflatParser::T__49);
            setState(538);
            match(CflatParser::T__49);
            setState(539);
            match(CflatParser::T__3);
            break;
          }

          case 12: {
            setState(540);
            match(CflatParser::T__66);
            break;
          }

          default:
            break;
          }
          setState(543);
          expr(3);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(544);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(545);
          match(CflatParser::T__2);
          setState(546);
          match(CflatParser::Identifier);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(547);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(548);
          match(CflatParser::T__39);
          setState(549);
          match(CflatParser::Identifier);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(550);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(551);
          match(CflatParser::T__24);
          setState(552);
          expr(0);
          setState(553);
          match(CflatParser::T__25);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(555);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(556);
          arguments();
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(557);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(558);
          _la = _input->LA(1);
          if (!(_la == CflatParser::T__40

          || _la == CflatParser::T__41)) {
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
          setState(559);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(560);
          match(CflatParser::T__51);
          setState(561);
          type();
          break;
        }

        default:
          break;
        } 
      }
      setState(566);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
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
  enterRule(_localctx, 92, CflatParser::RuleExprList);
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
    setState(567);
    expr(0);
    setState(572);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CflatParser::T__4) {
      setState(568);
      match(CflatParser::T__4);
      setState(569);
      expr(0);
      setState(574);
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
  enterRule(_localctx, 94, CflatParser::RuleArguments);
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
    setState(575);
    match(CflatParser::T__5);
    setState(577);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CflatParser::T__5)
      | (1ULL << CflatParser::T__23)
      | (1ULL << CflatParser::T__40)
      | (1ULL << CflatParser::T__41)
      | (1ULL << CflatParser::T__42)
      | (1ULL << CflatParser::T__43)
      | (1ULL << CflatParser::T__44)
      | (1ULL << CflatParser::T__45)
      | (1ULL << CflatParser::T__46))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CflatParser::T__67 - 68))
      | (1ULL << (CflatParser::T__68 - 68))
      | (1ULL << (CflatParser::HexLiteral - 68))
      | (1ULL << (CflatParser::DecimalLiteral - 68))
      | (1ULL << (CflatParser::OctalLiteral - 68))
      | (1ULL << (CflatParser::BoolLiteral - 68))
      | (1ULL << (CflatParser::FloatingPointLiteral - 68))
      | (1ULL << (CflatParser::CharacterLiteral - 68))
      | (1ULL << (CflatParser::StringLiteral - 68))
      | (1ULL << (CflatParser::Identifier - 68)))) != 0)) {
      setState(576);
      exprList();
    }
    setState(579);
    match(CflatParser::T__6);
   
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
  enterRule(_localctx, 96, CflatParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(587);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CflatParser::T__68:
      case CflatParser::HexLiteral:
      case CflatParser::DecimalLiteral:
      case CflatParser::OctalLiteral:
      case CflatParser::BoolLiteral:
      case CflatParser::FloatingPointLiteral:
      case CflatParser::CharacterLiteral:
      case CflatParser::StringLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(581);
        literal();
        break;
      }

      case CflatParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(582);
        match(CflatParser::Identifier);
        break;
      }

      case CflatParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(583);
        match(CflatParser::T__5);
        setState(584);
        expr(0);
        setState(585);
        match(CflatParser::T__6);
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
  enterRule(_localctx, 98, CflatParser::RuleLiteral);
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
    setState(589);
    _la = _input->LA(1);
    if (!(((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (CflatParser::T__68 - 69))
      | (1ULL << (CflatParser::HexLiteral - 69))
      | (1ULL << (CflatParser::DecimalLiteral - 69))
      | (1ULL << (CflatParser::OctalLiteral - 69))
      | (1ULL << (CflatParser::BoolLiteral - 69))
      | (1ULL << (CflatParser::FloatingPointLiteral - 69))
      | (1ULL << (CflatParser::CharacterLiteral - 69))
      | (1ULL << (CflatParser::StringLiteral - 69)))) != 0))) {
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
  enterRule(_localctx, 100, CflatParser::RuleInteger);
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
    setState(591);
    _la = _input->LA(1);
    if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (CflatParser::HexLiteral - 70))
      | (1ULL << (CflatParser::DecimalLiteral - 70))
      | (1ULL << (CflatParser::OctalLiteral - 70)))) != 0))) {
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
    case 45: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
  "compilationUnit", "declarationFile", "importStmt", "libid", "name", "definition", 
  "declaration", "variableDefinition", "functionDefinition", "structDefinition", 
  "unionDefinition", "typeDefinition", "functionDeclaration", "variableDeclaration", 
  "structDeclaration", "unionDeclaration", "vararg", "params", "fixedParams", 
  "param", "paramTypeRefs", "fixedParamTypeRefs", "paramTypeRef", "block", 
  "memberList", "slot", "type", "basicType", "typeSuffix", "stmt", "labeledStmt", 
  "ifStmt", "whileStmt", "dowhileStmt", "forStmt", "switchStmt", "caseClauses", 
  "caseClause", "cases", "defaultClause", "caseBody", "gotoStmt", "breakStmt", 
  "continueStmt", "returnStmt", "expr", "exprList", "arguments", "primary", 
  "literal", "integer"
};

std::vector<std::string> CflatParser::_literalNames = {
  "", "'import'", "';'", "'.'", "'='", "','", "'('", "')'", "'struct'", 
  "'union'", "'typedef'", "'extern'", "'...'", "'void'", "'{'", "'}'", "'signed'", 
  "'char'", "'short'", "'int'", "'long'", "'unsigned'", "'float'", "'double'", 
  "'*'", "'['", "']'", "':'", "'if'", "'else'", "'while'", "'do'", "'for'", 
  "'switch'", "'case'", "'default'", "'goto'", "'break'", "'continue'", 
  "'return'", "'->'", "'++'", "'--'", "'+'", "'-'", "'!'", "'~'", "'&'", 
  "'/'", "'%'", "'<'", "'>'", "'instanceof'", "'=='", "'!='", "'^'", "'|'", 
  "'&&'", "'||'", "'\u003F'", "'^='", "'+='", "'-='", "'*='", "'/='", "'&='", 
  "'|='", "'%='", "'sizeof'", "'null'", "", "", "", "", "", "", "", "", 
  "'static'"
};

std::vector<std::string> CflatParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "HexLiteral", 
  "DecimalLiteral", "OctalLiteral", "BoolLiteral", "FloatingPointLiteral", 
  "CharacterLiteral", "StringLiteral", "Identifier", "StaticKeyWord", "BLOCK_COMMENT", 
  "SPACES", "LINE_COMMENT"
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
       0x3, 0x53, 0x254, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x3, 0x2, 
       0x3, 0x2, 0x7, 0x2, 0x6b, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x6e, 0xb, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x74, 0xa, 
       0x3, 0xc, 0x3, 0xe, 0x3, 0x77, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x7, 0x5, 0x82, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x85, 0xb, 0x5, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x5, 0x7, 0x8e, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x5, 0x8, 0x95, 0xa, 0x8, 0x3, 0x9, 0x5, 0x9, 0x98, 0xa, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x9e, 0xa, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xa4, 0xa, 
       0x9, 0x7, 0x9, 0xa6, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0xa9, 0xb, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x5, 0xa, 0xae, 0xa, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x5, 0xe, 0xcc, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x5, 0x13, 0xe4, 0xa, 0x13, 0x5, 0x13, 0xe6, 0xa, 0x13, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xeb, 0xa, 0x14, 0xc, 0x14, 
       0xe, 0x14, 0xee, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xf6, 0xa, 0x16, 0x5, 0x16, 
       0xf8, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0xfd, 
       0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x100, 0xb, 0x17, 0x3, 0x18, 0x3, 
       0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x107, 0xa, 0x19, 
       0xc, 0x19, 0xe, 0x19, 0x10a, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x112, 0xa, 0x1a, 
       0xc, 0x1a, 0xe, 0x1a, 0x115, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x11e, 
       0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x121, 0xb, 0x1c, 0x3, 0x1d, 0x3, 
       0x1d, 0x5, 0x1d, 0x125, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
       0x129, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x12d, 0xa, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x131, 0xa, 0x1d, 0x3, 0x1d, 0x5, 
       0x1d, 0x134, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x13d, 0xa, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x148, 0xa, 0x1d, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x14d, 0xa, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x154, 0xa, 0x1e, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x165, 0xa, 0x1f, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x172, 
       0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x5, 0x24, 0x185, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x189, 
       0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x7, 0x26, 0x199, 0xa, 0x26, 0xc, 
       0x26, 0xe, 0x26, 0x19c, 0xb, 0x26, 0x3, 0x26, 0x5, 0x26, 0x19f, 0xa, 
       0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x6, 0x28, 0x1a8, 0xa, 0x28, 0xd, 0x28, 0xe, 0x28, 
       0x1a9, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x6, 
       0x2a, 0x1b1, 0xa, 0x2a, 0xd, 0x2a, 0xe, 0x2a, 0x1b2, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x1c1, 
       0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x1d7, 0xa, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x1e7, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x5, 0x2f, 0x1f1, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 
       0x2f, 0x220, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x235, 0xa, 0x2f, 0xc, 
       0x2f, 0xe, 0x2f, 0x238, 0xb, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
       0x7, 0x30, 0x23d, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x240, 0xb, 0x30, 
       0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x244, 0xa, 0x31, 0x3, 0x31, 0x3, 
       0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
       0x32, 0x5, 0x32, 0x24e, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 
       0x3, 0x34, 0x3, 0x34, 0x2, 0x3, 0x5c, 0x35, 0x2, 0x4, 0x6, 0x8, 0xa, 
       0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
       0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
       0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 
       0x66, 0x2, 0xa, 0x3, 0x2, 0x2b, 0x2e, 0x4, 0x2, 0x1a, 0x1a, 0x2d, 
       0x31, 0x4, 0x2, 0x1a, 0x1a, 0x32, 0x33, 0x3, 0x2, 0x2d, 0x2e, 0x3, 
       0x2, 0x37, 0x38, 0x3, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x47, 0x4e, 0x3, 
       0x2, 0x48, 0x4a, 0x2, 0x292, 0x2, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x4, 
       0x75, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x7e, 
       0x3, 0x2, 0x2, 0x2, 0xa, 0x86, 0x3, 0x2, 0x2, 0x2, 0xc, 0x8d, 0x3, 
       0x2, 0x2, 0x2, 0xe, 0x94, 0x3, 0x2, 0x2, 0x2, 0x10, 0x97, 0x3, 0x2, 
       0x2, 0x2, 0x12, 0xad, 0x3, 0x2, 0x2, 0x2, 0x14, 0xb6, 0x3, 0x2, 0x2, 
       0x2, 0x16, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc0, 0x3, 0x2, 0x2, 0x2, 
       0x1a, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x1e, 
       0xd5, 0x3, 0x2, 0x2, 0x2, 0x20, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x22, 0xdd, 
       0x3, 0x2, 0x2, 0x2, 0x24, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x26, 0xe7, 0x3, 
       0x2, 0x2, 0x2, 0x28, 0xef, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xf7, 0x3, 0x2, 
       0x2, 0x2, 0x2c, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x101, 0x3, 0x2, 
       0x2, 0x2, 0x30, 0x103, 0x3, 0x2, 0x2, 0x2, 0x32, 0x10d, 0x3, 0x2, 
       0x2, 0x2, 0x34, 0x118, 0x3, 0x2, 0x2, 0x2, 0x36, 0x11b, 0x3, 0x2, 
       0x2, 0x2, 0x38, 0x147, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x153, 0x3, 0x2, 
       0x2, 0x2, 0x3c, 0x164, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x166, 0x3, 0x2, 
       0x2, 0x2, 0x40, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x42, 0x173, 0x3, 0x2, 
       0x2, 0x2, 0x44, 0x179, 0x3, 0x2, 0x2, 0x2, 0x46, 0x181, 0x3, 0x2, 
       0x2, 0x2, 0x48, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x19a, 0x3, 0x2, 
       0x2, 0x2, 0x4c, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1a7, 0x3, 0x2, 
       0x2, 0x2, 0x50, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1b0, 0x3, 0x2, 
       0x2, 0x2, 0x54, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1b8, 0x3, 0x2, 
       0x2, 0x2, 0x58, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1be, 0x3, 0x2, 
       0x2, 0x2, 0x5c, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x239, 0x3, 0x2, 
       0x2, 0x2, 0x60, 0x241, 0x3, 0x2, 0x2, 0x2, 0x62, 0x24d, 0x3, 0x2, 
       0x2, 0x2, 0x64, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x66, 0x251, 0x3, 0x2, 
       0x2, 0x2, 0x68, 0x6b, 0x5, 0x6, 0x4, 0x2, 0x69, 0x6b, 0x5, 0xc, 0x7, 
       0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 
       0x6b, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 
       0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 
       0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x2, 0x2, 0x3, 0x70, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0x71, 0x74, 0x5, 0x6, 0x4, 0x2, 0x72, 0x74, 0x5, 0xe, 
       0x8, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 
       0x2, 0x74, 0x77, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 
       0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x3, 0x2, 0x2, 0x2, 0x77, 
       0x75, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x2, 0x2, 0x3, 0x79, 0x5, 
       0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x3, 0x2, 0x2, 0x7b, 0x7c, 0x5, 
       0x8, 0x5, 0x2, 0x7c, 0x7d, 0x7, 0x4, 0x2, 0x2, 0x7d, 0x7, 0x3, 0x2, 
       0x2, 0x2, 0x7e, 0x83, 0x5, 0xa, 0x6, 0x2, 0x7f, 0x80, 0x7, 0x5, 0x2, 
       0x2, 0x80, 0x82, 0x5, 0xa, 0x6, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 
       0x82, 0x85, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 
       0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x9, 0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 0x4f, 0x2, 0x2, 0x87, 0xb, 0x3, 
       0x2, 0x2, 0x2, 0x88, 0x8e, 0x5, 0x12, 0xa, 0x2, 0x89, 0x8e, 0x5, 
       0x10, 0x9, 0x2, 0x8a, 0x8e, 0x5, 0x14, 0xb, 0x2, 0x8b, 0x8e, 0x5, 
       0x16, 0xc, 0x2, 0x8c, 0x8e, 0x5, 0x18, 0xd, 0x2, 0x8d, 0x88, 0x3, 
       0x2, 0x2, 0x2, 0x8d, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8a, 0x3, 0x2, 
       0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8c, 0x3, 0x2, 0x2, 
       0x2, 0x8e, 0xd, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x95, 0x5, 0x1a, 0xe, 0x2, 
       0x90, 0x95, 0x5, 0x1c, 0xf, 0x2, 0x91, 0x95, 0x5, 0x1e, 0x10, 0x2, 
       0x92, 0x95, 0x5, 0x20, 0x11, 0x2, 0x93, 0x95, 0x5, 0x18, 0xd, 0x2, 
       0x94, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x94, 0x90, 0x3, 0x2, 0x2, 0x2, 0x94, 
       0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x93, 
       0x3, 0x2, 0x2, 0x2, 0x95, 0xf, 0x3, 0x2, 0x2, 0x2, 0x96, 0x98, 0x7, 
       0x50, 0x2, 0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 
       0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x36, 
       0x1c, 0x2, 0x9a, 0x9d, 0x5, 0xa, 0x6, 0x2, 0x9b, 0x9c, 0x7, 0x6, 
       0x2, 0x2, 0x9c, 0x9e, 0x5, 0x5c, 0x2f, 0x2, 0x9d, 0x9b, 0x3, 0x2, 
       0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa7, 0x3, 0x2, 0x2, 
       0x2, 0x9f, 0xa0, 0x7, 0x7, 0x2, 0x2, 0xa0, 0xa3, 0x5, 0xa, 0x6, 0x2, 
       0xa1, 0xa2, 0x7, 0x6, 0x2, 0x2, 0xa2, 0xa4, 0x5, 0x5c, 0x2f, 0x2, 
       0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 
       0xa6, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa9, 
       0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 
       0x2, 0x2, 0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 
       0x2, 0x2, 0xaa, 0xab, 0x7, 0x4, 0x2, 0x2, 0xab, 0x11, 0x3, 0x2, 0x2, 
       0x2, 0xac, 0xae, 0x7, 0x50, 0x2, 0x2, 0xad, 0xac, 0x3, 0x2, 0x2, 
       0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 
       0xaf, 0xb0, 0x5, 0x36, 0x1c, 0x2, 0xb0, 0xb1, 0x5, 0xa, 0x6, 0x2, 
       0xb1, 0xb2, 0x7, 0x8, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x24, 0x13, 0x2, 
       0xb3, 0xb4, 0x7, 0x9, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x30, 0x19, 0x2, 
       0xb5, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0xa, 0x2, 0x2, 0xb7, 
       0xb8, 0x5, 0xa, 0x6, 0x2, 0xb8, 0xb9, 0x5, 0x32, 0x1a, 0x2, 0xb9, 
       0xba, 0x7, 0x4, 0x2, 0x2, 0xba, 0x15, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 
       0x7, 0xb, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0xa, 0x6, 0x2, 0xbd, 0xbe, 0x5, 
       0x32, 0x1a, 0x2, 0xbe, 0xbf, 0x7, 0x4, 0x2, 0x2, 0xbf, 0x17, 0x3, 
       0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0xc, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x36, 
       0x1c, 0x2, 0xc2, 0xc3, 0x7, 0x4f, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x4, 
       0x2, 0x2, 0xc4, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0xd, 0x2, 
       0x2, 0xc6, 0xc7, 0x5, 0x36, 0x1c, 0x2, 0xc7, 0xc8, 0x5, 0xa, 0x6, 
       0x2, 0xc8, 0xcb, 0x7, 0x8, 0x2, 0x2, 0xc9, 0xcc, 0x5, 0x24, 0x13, 
       0x2, 0xca, 0xcc, 0x5, 0x2a, 0x16, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 
       0x2, 0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 
       0xcd, 0xce, 0x7, 0x9, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x4, 0x2, 0x2, 0xcf, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0xd, 0x2, 0x2, 0xd1, 0xd2, 
       0x5, 0x36, 0x1c, 0x2, 0xd2, 0xd3, 0x5, 0xa, 0x6, 0x2, 0xd3, 0xd4, 
       0x7, 0x4, 0x2, 0x2, 0xd4, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 
       0xa, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0xa, 0x6, 0x2, 0xd7, 0xd8, 0x7, 0x4, 
       0x2, 0x2, 0xd8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0xb, 0x2, 
       0x2, 0xda, 0xdb, 0x5, 0xa, 0x6, 0x2, 0xdb, 0xdc, 0x7, 0x4, 0x2, 0x2, 
       0xdc, 0x21, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x7, 0x2, 0x2, 0xde, 
       0xdf, 0x7, 0xe, 0x2, 0x2, 0xdf, 0x23, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe6, 
       0x7, 0xf, 0x2, 0x2, 0xe1, 0xe3, 0x5, 0x26, 0x14, 0x2, 0xe2, 0xe4, 
       0x5, 0x22, 0x12, 0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 
       0x3, 0x2, 0x2, 0x2, 0xe4, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe0, 0x3, 
       0x2, 0x2, 0x2, 0xe5, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x25, 0x3, 0x2, 
       0x2, 0x2, 0xe7, 0xec, 0x5, 0x28, 0x15, 0x2, 0xe8, 0xe9, 0x7, 0x7, 
       0x2, 0x2, 0xe9, 0xeb, 0x5, 0x28, 0x15, 0x2, 0xea, 0xe8, 0x3, 0x2, 
       0x2, 0x2, 0xeb, 0xee, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 
       0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0x27, 0x3, 0x2, 0x2, 0x2, 
       0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x5, 0x36, 0x1c, 0x2, 
       0xf0, 0xf1, 0x5, 0xa, 0x6, 0x2, 0xf1, 0x29, 0x3, 0x2, 0x2, 0x2, 0xf2, 
       0xf8, 0x7, 0xf, 0x2, 0x2, 0xf3, 0xf5, 0x5, 0x2c, 0x17, 0x2, 0xf4, 
       0xf6, 0x5, 0x22, 0x12, 0x2, 0xf5, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf5, 
       0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf2, 
       0x3, 0x2, 0x2, 0x2, 0xf7, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x2b, 0x3, 
       0x2, 0x2, 0x2, 0xf9, 0xfe, 0x5, 0x2e, 0x18, 0x2, 0xfa, 0xfb, 0x7, 
       0x7, 0x2, 0x2, 0xfb, 0xfd, 0x5, 0x2e, 0x18, 0x2, 0xfc, 0xfa, 0x3, 
       0x2, 0x2, 0x2, 0xfd, 0x100, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 
       0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x2d, 0x3, 0x2, 
       0x2, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x5, 0x36, 
       0x1c, 0x2, 0x102, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x103, 0x108, 0x7, 0x10, 
       0x2, 0x2, 0x104, 0x107, 0x5, 0x10, 0x9, 0x2, 0x105, 0x107, 0x5, 0x3c, 
       0x1f, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x105, 0x3, 0x2, 
       0x2, 0x2, 0x107, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 
       0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10b, 0x3, 0x2, 
       0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x11, 
       0x2, 0x2, 0x10c, 0x31, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x113, 0x7, 0x10, 
       0x2, 0x2, 0x10e, 0x10f, 0x5, 0x34, 0x1b, 0x2, 0x10f, 0x110, 0x7, 
       0x4, 0x2, 0x2, 0x110, 0x112, 0x3, 0x2, 0x2, 0x2, 0x111, 0x10e, 0x3, 
       0x2, 0x2, 0x2, 0x112, 0x115, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 
       0x2, 0x2, 0x2, 0x113, 0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x116, 0x3, 
       0x2, 0x2, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x7, 
       0x11, 0x2, 0x2, 0x117, 0x33, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x5, 
       0x36, 0x1c, 0x2, 0x119, 0x11a, 0x5, 0xa, 0x6, 0x2, 0x11a, 0x35, 0x3, 
       0x2, 0x2, 0x2, 0x11b, 0x11f, 0x5, 0x38, 0x1d, 0x2, 0x11c, 0x11e, 
       0x5, 0x3a, 0x1e, 0x2, 0x11d, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x121, 
       0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 
       0x3, 0x2, 0x2, 0x2, 0x120, 0x37, 0x3, 0x2, 0x2, 0x2, 0x121, 0x11f, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x148, 0x7, 0xf, 0x2, 0x2, 0x123, 0x125, 
       0x7, 0x12, 0x2, 0x2, 0x124, 0x123, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 
       0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x148, 
       0x7, 0x13, 0x2, 0x2, 0x127, 0x129, 0x7, 0x12, 0x2, 0x2, 0x128, 0x127, 
       0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 
       0x3, 0x2, 0x2, 0x2, 0x12a, 0x148, 0x7, 0x14, 0x2, 0x2, 0x12b, 0x12d, 
       0x7, 0x12, 0x2, 0x2, 0x12c, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x131, 
       0x7, 0x15, 0x2, 0x2, 0x12f, 0x131, 0x7, 0x12, 0x2, 0x2, 0x130, 0x12c, 
       0x3, 0x2, 0x2, 0x2, 0x130, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x148, 
       0x3, 0x2, 0x2, 0x2, 0x132, 0x134, 0x7, 0x12, 0x2, 0x2, 0x133, 0x132, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 
       0x3, 0x2, 0x2, 0x2, 0x135, 0x148, 0x7, 0x16, 0x2, 0x2, 0x136, 0x137, 
       0x7, 0x17, 0x2, 0x2, 0x137, 0x148, 0x7, 0x13, 0x2, 0x2, 0x138, 0x139, 
       0x7, 0x17, 0x2, 0x2, 0x139, 0x148, 0x7, 0x14, 0x2, 0x2, 0x13a, 0x13c, 
       0x7, 0x17, 0x2, 0x2, 0x13b, 0x13d, 0x7, 0x15, 0x2, 0x2, 0x13c, 0x13b, 
       0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x148, 
       0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x7, 0x17, 0x2, 0x2, 0x13f, 0x148, 
       0x7, 0x16, 0x2, 0x2, 0x140, 0x148, 0x7, 0x18, 0x2, 0x2, 0x141, 0x148, 
       0x7, 0x19, 0x2, 0x2, 0x142, 0x143, 0x7, 0xa, 0x2, 0x2, 0x143, 0x148, 
       0x7, 0x4f, 0x2, 0x2, 0x144, 0x145, 0x7, 0xb, 0x2, 0x2, 0x145, 0x148, 
       0x7, 0x4f, 0x2, 0x2, 0x146, 0x148, 0x7, 0x4f, 0x2, 0x2, 0x147, 0x122, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x124, 0x3, 0x2, 0x2, 0x2, 0x147, 0x128, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x130, 0x3, 0x2, 0x2, 0x2, 0x147, 0x133, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x136, 0x3, 0x2, 0x2, 0x2, 0x147, 0x138, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x147, 0x13e, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x140, 0x3, 0x2, 0x2, 0x2, 0x147, 0x141, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x142, 0x3, 0x2, 0x2, 0x2, 0x147, 0x144, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x146, 0x3, 0x2, 0x2, 0x2, 0x148, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x149, 0x154, 0x7, 0x1a, 0x2, 0x2, 0x14a, 0x14c, 
       0x7, 0x1b, 0x2, 0x2, 0x14b, 0x14d, 0x5, 0x66, 0x34, 0x2, 0x14c, 0x14b, 
       0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 
       0x3, 0x2, 0x2, 0x2, 0x14e, 0x154, 0x7, 0x1c, 0x2, 0x2, 0x14f, 0x150, 
       0x7, 0x8, 0x2, 0x2, 0x150, 0x151, 0x5, 0x2a, 0x16, 0x2, 0x151, 0x152, 
       0x7, 0x9, 0x2, 0x2, 0x152, 0x154, 0x3, 0x2, 0x2, 0x2, 0x153, 0x149, 
       0x3, 0x2, 0x2, 0x2, 0x153, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x153, 0x14f, 
       0x3, 0x2, 0x2, 0x2, 0x154, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x155, 0x165, 
       0x7, 0x4, 0x2, 0x2, 0x156, 0x165, 0x5, 0x3e, 0x20, 0x2, 0x157, 0x158, 
       0x5, 0x5c, 0x2f, 0x2, 0x158, 0x159, 0x7, 0x4, 0x2, 0x2, 0x159, 0x165, 
       0x3, 0x2, 0x2, 0x2, 0x15a, 0x165, 0x5, 0x30, 0x19, 0x2, 0x15b, 0x165, 
       0x5, 0x40, 0x21, 0x2, 0x15c, 0x165, 0x5, 0x42, 0x22, 0x2, 0x15d, 
       0x165, 0x5, 0x44, 0x23, 0x2, 0x15e, 0x165, 0x5, 0x46, 0x24, 0x2, 
       0x15f, 0x165, 0x5, 0x48, 0x25, 0x2, 0x160, 0x165, 0x5, 0x56, 0x2c, 
       0x2, 0x161, 0x165, 0x5, 0x58, 0x2d, 0x2, 0x162, 0x165, 0x5, 0x54, 
       0x2b, 0x2, 0x163, 0x165, 0x5, 0x5a, 0x2e, 0x2, 0x164, 0x155, 0x3, 
       0x2, 0x2, 0x2, 0x164, 0x156, 0x3, 0x2, 0x2, 0x2, 0x164, 0x157, 0x3, 
       0x2, 0x2, 0x2, 0x164, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x164, 0x15b, 0x3, 
       0x2, 0x2, 0x2, 0x164, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x164, 0x15d, 0x3, 
       0x2, 0x2, 0x2, 0x164, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x164, 0x15f, 0x3, 
       0x2, 0x2, 0x2, 0x164, 0x160, 0x3, 0x2, 0x2, 0x2, 0x164, 0x161, 0x3, 
       0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 0x163, 0x3, 
       0x2, 0x2, 0x2, 0x165, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x7, 
       0x4f, 0x2, 0x2, 0x167, 0x168, 0x7, 0x1d, 0x2, 0x2, 0x168, 0x169, 
       0x5, 0x3c, 0x1f, 0x2, 0x169, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 
       0x7, 0x1e, 0x2, 0x2, 0x16b, 0x16c, 0x7, 0x8, 0x2, 0x2, 0x16c, 0x16d, 
       0x5, 0x5c, 0x2f, 0x2, 0x16d, 0x16e, 0x7, 0x9, 0x2, 0x2, 0x16e, 0x171, 
       0x5, 0x3c, 0x1f, 0x2, 0x16f, 0x170, 0x7, 0x1f, 0x2, 0x2, 0x170, 0x172, 
       0x5, 0x3c, 0x1f, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 
       0x3, 0x2, 0x2, 0x2, 0x172, 0x41, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 
       0x7, 0x20, 0x2, 0x2, 0x174, 0x175, 0x7, 0x8, 0x2, 0x2, 0x175, 0x176, 
       0x5, 0x5c, 0x2f, 0x2, 0x176, 0x177, 0x7, 0x9, 0x2, 0x2, 0x177, 0x178, 
       0x5, 0x3c, 0x1f, 0x2, 0x178, 0x43, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 
       0x7, 0x21, 0x2, 0x2, 0x17a, 0x17b, 0x5, 0x3c, 0x1f, 0x2, 0x17b, 0x17c, 
       0x7, 0x20, 0x2, 0x2, 0x17c, 0x17d, 0x7, 0x8, 0x2, 0x2, 0x17d, 0x17e, 
       0x5, 0x5c, 0x2f, 0x2, 0x17e, 0x17f, 0x7, 0x9, 0x2, 0x2, 0x17f, 0x180, 
       0x7, 0x4, 0x2, 0x2, 0x180, 0x45, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 
       0x7, 0x22, 0x2, 0x2, 0x182, 0x184, 0x7, 0x8, 0x2, 0x2, 0x183, 0x185, 
       0x5, 0x5c, 0x2f, 0x2, 0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 
       0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 0x188, 
       0x7, 0x4, 0x2, 0x2, 0x187, 0x189, 0x5, 0x5c, 0x2f, 0x2, 0x188, 0x187, 
       0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 
       0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x4, 0x2, 0x2, 0x18b, 0x18c, 
       0x5, 0x5c, 0x2f, 0x2, 0x18c, 0x18d, 0x7, 0x9, 0x2, 0x2, 0x18d, 0x18e, 
       0x5, 0x3c, 0x1f, 0x2, 0x18e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 
       0x7, 0x23, 0x2, 0x2, 0x190, 0x191, 0x7, 0x8, 0x2, 0x2, 0x191, 0x192, 
       0x5, 0x5c, 0x2f, 0x2, 0x192, 0x193, 0x7, 0x9, 0x2, 0x2, 0x193, 0x194, 
       0x7, 0x10, 0x2, 0x2, 0x194, 0x195, 0x5, 0x4a, 0x26, 0x2, 0x195, 0x196, 
       0x7, 0x11, 0x2, 0x2, 0x196, 0x49, 0x3, 0x2, 0x2, 0x2, 0x197, 0x199, 
       0x5, 0x4c, 0x27, 0x2, 0x198, 0x197, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19c, 
       0x3, 0x2, 0x2, 0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 
       0x3, 0x2, 0x2, 0x2, 0x19b, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 
       0x3, 0x2, 0x2, 0x2, 0x19d, 0x19f, 0x5, 0x50, 0x29, 0x2, 0x19e, 0x19d, 
       0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x4b, 
       0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x5, 0x4e, 0x28, 0x2, 0x1a1, 0x1a2, 
       0x5, 0x52, 0x2a, 0x2, 0x1a2, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 
       0x7, 0x24, 0x2, 0x2, 0x1a4, 0x1a5, 0x5, 0x62, 0x32, 0x2, 0x1a5, 0x1a6, 
       0x7, 0x1d, 0x2, 0x2, 0x1a6, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a3, 
       0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a7, 
       0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x25, 0x2, 0x2, 0x1ac, 0x1ad, 
       0x7, 0x1d, 0x2, 0x2, 0x1ad, 0x1ae, 0x5, 0x52, 0x2a, 0x2, 0x1ae, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b1, 0x5, 0x3c, 0x1f, 0x2, 0x1b0, 0x1af, 
       0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b0, 
       0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x26, 0x2, 0x2, 0x1b5, 0x1b6, 
       0x7, 0x4f, 0x2, 0x2, 0x1b6, 0x1b7, 0x7, 0x4, 0x2, 0x2, 0x1b7, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x7, 0x27, 0x2, 0x2, 0x1b9, 0x1ba, 
       0x7, 0x4, 0x2, 0x2, 0x1ba, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 
       0x7, 0x28, 0x2, 0x2, 0x1bc, 0x1bd, 0x7, 0x4, 0x2, 0x2, 0x1bd, 0x59, 
       0x3, 0x2, 0x2, 0x2, 0x1be, 0x1c0, 0x7, 0x29, 0x2, 0x2, 0x1bf, 0x1c1, 
       0x5, 0x5c, 0x2f, 0x2, 0x1c0, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 
       0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 
       0x7, 0x4, 0x2, 0x2, 0x1c3, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 
       0x8, 0x2f, 0x1, 0x2, 0x1c5, 0x1d7, 0x5, 0x62, 0x32, 0x2, 0x1c6, 0x1c7, 
       0x9, 0x2, 0x2, 0x2, 0x1c7, 0x1d7, 0x5, 0x5c, 0x2f, 0x14, 0x1c8, 0x1c9, 
       0x9, 0x3, 0x2, 0x2, 0x1c9, 0x1d7, 0x5, 0x5c, 0x2f, 0x13, 0x1ca, 0x1cb, 
       0x7, 0x8, 0x2, 0x2, 0x1cb, 0x1cc, 0x5, 0x36, 0x1c, 0x2, 0x1cc, 0x1cd, 
       0x7, 0x9, 0x2, 0x2, 0x1cd, 0x1ce, 0x5, 0x5c, 0x2f, 0x12, 0x1ce, 0x1d7, 
       0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x7, 0x46, 0x2, 0x2, 0x1d0, 0x1d1, 
       0x7, 0x8, 0x2, 0x2, 0x1d1, 0x1d2, 0x5, 0x36, 0x1c, 0x2, 0x1d2, 0x1d3, 
       0x7, 0x9, 0x2, 0x2, 0x1d3, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 
       0x7, 0x46, 0x2, 0x2, 0x1d5, 0x1d7, 0x5, 0x5c, 0x2f, 0x3, 0x1d6, 0x1c4, 
       0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1c8, 
       0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1cf, 
       0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x236, 
       0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0xc, 0x11, 0x2, 0x2, 0x1d9, 0x1da, 
       0x9, 0x4, 0x2, 0x2, 0x1da, 0x235, 0x5, 0x5c, 0x2f, 0x12, 0x1db, 0x1dc, 
       0xc, 0x10, 0x2, 0x2, 0x1dc, 0x1dd, 0x9, 0x5, 0x2, 0x2, 0x1dd, 0x235, 
       0x5, 0x5c, 0x2f, 0x11, 0x1de, 0x1e6, 0xc, 0xf, 0x2, 0x2, 0x1df, 0x1e0, 
       0x7, 0x34, 0x2, 0x2, 0x1e0, 0x1e7, 0x7, 0x34, 0x2, 0x2, 0x1e1, 0x1e2, 
       0x7, 0x35, 0x2, 0x2, 0x1e2, 0x1e3, 0x7, 0x35, 0x2, 0x2, 0x1e3, 0x1e7, 
       0x7, 0x35, 0x2, 0x2, 0x1e4, 0x1e5, 0x7, 0x35, 0x2, 0x2, 0x1e5, 0x1e7, 
       0x7, 0x35, 0x2, 0x2, 0x1e6, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e1, 
       0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 
       0x3, 0x2, 0x2, 0x2, 0x1e8, 0x235, 0x5, 0x5c, 0x2f, 0x10, 0x1e9, 0x1f0, 
       0xc, 0xe, 0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x34, 0x2, 0x2, 0x1eb, 0x1f1, 
       0x7, 0x6, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x35, 0x2, 0x2, 0x1ed, 0x1f1, 
       0x7, 0x6, 0x2, 0x2, 0x1ee, 0x1f1, 0x7, 0x35, 0x2, 0x2, 0x1ef, 0x1f1, 
       0x7, 0x34, 0x2, 0x2, 0x1f0, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ec, 
       0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ef, 
       0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x235, 
       0x5, 0x5c, 0x2f, 0xf, 0x1f3, 0x1f4, 0xc, 0xc, 0x2, 0x2, 0x1f4, 0x1f5, 
       0x9, 0x6, 0x2, 0x2, 0x1f5, 0x235, 0x5, 0x5c, 0x2f, 0xd, 0x1f6, 0x1f7, 
       0xc, 0xb, 0x2, 0x2, 0x1f7, 0x1f8, 0x7, 0x31, 0x2, 0x2, 0x1f8, 0x235, 
       0x5, 0x5c, 0x2f, 0xc, 0x1f9, 0x1fa, 0xc, 0xa, 0x2, 0x2, 0x1fa, 0x1fb, 
       0x7, 0x39, 0x2, 0x2, 0x1fb, 0x235, 0x5, 0x5c, 0x2f, 0xb, 0x1fc, 0x1fd, 
       0xc, 0x9, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x3a, 0x2, 0x2, 0x1fe, 0x235, 
       0x5, 0x5c, 0x2f, 0xa, 0x1ff, 0x200, 0xc, 0x8, 0x2, 0x2, 0x200, 0x201, 
       0x7, 0x3b, 0x2, 0x2, 0x201, 0x235, 0x5, 0x5c, 0x2f, 0x9, 0x202, 0x203, 
       0xc, 0x7, 0x2, 0x2, 0x203, 0x204, 0x7, 0x3c, 0x2, 0x2, 0x204, 0x235, 
       0x5, 0x5c, 0x2f, 0x8, 0x205, 0x206, 0xc, 0x6, 0x2, 0x2, 0x206, 0x207, 
       0x7, 0x3d, 0x2, 0x2, 0x207, 0x208, 0x5, 0x5c, 0x2f, 0x2, 0x208, 0x209, 
       0x7, 0x1d, 0x2, 0x2, 0x209, 0x20a, 0x5, 0x5c, 0x2f, 0x7, 0x20a, 0x235, 
       0x3, 0x2, 0x2, 0x2, 0x20b, 0x21f, 0xc, 0x5, 0x2, 0x2, 0x20c, 0x220, 
       0x7, 0x3e, 0x2, 0x2, 0x20d, 0x220, 0x7, 0x3f, 0x2, 0x2, 0x20e, 0x220, 
       0x7, 0x40, 0x2, 0x2, 0x20f, 0x220, 0x7, 0x41, 0x2, 0x2, 0x210, 0x220, 
       0x7, 0x42, 0x2, 0x2, 0x211, 0x220, 0x7, 0x43, 0x2, 0x2, 0x212, 0x220, 
       0x7, 0x44, 0x2, 0x2, 0x213, 0x220, 0x7, 0x6, 0x2, 0x2, 0x214, 0x215, 
       0x7, 0x35, 0x2, 0x2, 0x215, 0x216, 0x7, 0x35, 0x2, 0x2, 0x216, 0x220, 
       0x7, 0x6, 0x2, 0x2, 0x217, 0x218, 0x7, 0x35, 0x2, 0x2, 0x218, 0x219, 
       0x7, 0x35, 0x2, 0x2, 0x219, 0x21a, 0x7, 0x35, 0x2, 0x2, 0x21a, 0x220, 
       0x7, 0x6, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x34, 0x2, 0x2, 0x21c, 0x21d, 
       0x7, 0x34, 0x2, 0x2, 0x21d, 0x220, 0x7, 0x6, 0x2, 0x2, 0x21e, 0x220, 
       0x7, 0x45, 0x2, 0x2, 0x21f, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x20d, 
       0x3, 0x2, 0x2, 0x2, 0x21f, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x20f, 
       0x3, 0x2, 0x2, 0x2, 0x21f, 0x210, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x211, 
       0x3, 0x2, 0x2, 0x2, 0x21f, 0x212, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x213, 
       0x3, 0x2, 0x2, 0x2, 0x21f, 0x214, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x217, 
       0x3, 0x2, 0x2, 0x2, 0x21f, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x21e, 
       0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x235, 
       0x5, 0x5c, 0x2f, 0x5, 0x222, 0x223, 0xc, 0x19, 0x2, 0x2, 0x223, 0x224, 
       0x7, 0x5, 0x2, 0x2, 0x224, 0x235, 0x7, 0x4f, 0x2, 0x2, 0x225, 0x226, 
       0xc, 0x18, 0x2, 0x2, 0x226, 0x227, 0x7, 0x2a, 0x2, 0x2, 0x227, 0x235, 
       0x7, 0x4f, 0x2, 0x2, 0x228, 0x229, 0xc, 0x17, 0x2, 0x2, 0x229, 0x22a, 
       0x7, 0x1b, 0x2, 0x2, 0x22a, 0x22b, 0x5, 0x5c, 0x2f, 0x2, 0x22b, 0x22c, 
       0x7, 0x1c, 0x2, 0x2, 0x22c, 0x235, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 
       0xc, 0x16, 0x2, 0x2, 0x22e, 0x235, 0x5, 0x60, 0x31, 0x2, 0x22f, 0x230, 
       0xc, 0x15, 0x2, 0x2, 0x230, 0x235, 0x9, 0x7, 0x2, 0x2, 0x231, 0x232, 
       0xc, 0xd, 0x2, 0x2, 0x232, 0x233, 0x7, 0x36, 0x2, 0x2, 0x233, 0x235, 
       0x5, 0x36, 0x1c, 0x2, 0x234, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x234, 0x1db, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x234, 0x1e9, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x234, 0x1f6, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x234, 0x1fc, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x234, 0x202, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x205, 0x3, 0x2, 0x2, 0x2, 0x234, 0x20b, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x222, 0x3, 0x2, 0x2, 0x2, 0x234, 0x225, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x228, 0x3, 0x2, 0x2, 0x2, 0x234, 0x22d, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x234, 0x231, 
       0x3, 0x2, 0x2, 0x2, 0x235, 0x238, 0x3, 0x2, 0x2, 0x2, 0x236, 0x234, 
       0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x3, 0x2, 0x2, 0x2, 0x237, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x238, 0x236, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23e, 
       0x5, 0x5c, 0x2f, 0x2, 0x23a, 0x23b, 0x7, 0x7, 0x2, 0x2, 0x23b, 0x23d, 
       0x5, 0x5c, 0x2f, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x240, 
       0x3, 0x2, 0x2, 0x2, 0x23e, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 
       0x3, 0x2, 0x2, 0x2, 0x23f, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 
       0x3, 0x2, 0x2, 0x2, 0x241, 0x243, 0x7, 0x8, 0x2, 0x2, 0x242, 0x244, 
       0x5, 0x5e, 0x30, 0x2, 0x243, 0x242, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 
       0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 
       0x7, 0x9, 0x2, 0x2, 0x246, 0x61, 0x3, 0x2, 0x2, 0x2, 0x247, 0x24e, 
       0x5, 0x64, 0x33, 0x2, 0x248, 0x24e, 0x7, 0x4f, 0x2, 0x2, 0x249, 0x24a, 
       0x7, 0x8, 0x2, 0x2, 0x24a, 0x24b, 0x5, 0x5c, 0x2f, 0x2, 0x24b, 0x24c, 
       0x7, 0x9, 0x2, 0x2, 0x24c, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x247, 
       0x3, 0x2, 0x2, 0x2, 0x24d, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x249, 
       0x3, 0x2, 0x2, 0x2, 0x24e, 0x63, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 
       0x9, 0x8, 0x2, 0x2, 0x250, 0x65, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 
       0x9, 0x9, 0x2, 0x2, 0x252, 0x67, 0x3, 0x2, 0x2, 0x2, 0x34, 0x6a, 
       0x6c, 0x73, 0x75, 0x83, 0x8d, 0x94, 0x97, 0x9d, 0xa3, 0xa7, 0xad, 
       0xcb, 0xe3, 0xe5, 0xec, 0xf5, 0xf7, 0xfe, 0x106, 0x108, 0x113, 0x11f, 
       0x124, 0x128, 0x12c, 0x130, 0x133, 0x13c, 0x147, 0x14c, 0x153, 0x164, 
       0x171, 0x184, 0x188, 0x19a, 0x19e, 0x1a9, 0x1b2, 0x1c0, 0x1d6, 0x1e6, 
       0x1f0, 0x21f, 0x234, 0x236, 0x23e, 0x243, 0x24d, 
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
