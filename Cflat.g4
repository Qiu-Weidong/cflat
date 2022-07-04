grammar Cflat;

import Cflatlexer;
// 首字母大写表示终结符，非终结符采用驼峰命名法
compilationUnit: importStmts topDefs EOF;
declarationFile:
	importStmts (
		funcDecl
		| varDecl
		| defConst
		| defStruct
		| defUnion
		| typeDef
	)* EOF;
importStmts: importStmt*;
importStmt: 'import' name ('.' name)* ';';
name: Identifier;
topDefs: (
		defFunc
		| defVars
		| defConst
		| defStruct
		| defUnion
		| typeDef
	)*;
defVars:
	('static')? type name ('=' expr)? (',' name ('=' expr)?)* ';';
defConst: 'const' type name '=' expr ';';
defFunc: ('static')? typeRef name '(' params ')' block;
params: 'void' | fixedParams (',' '...')?;
fixedParams: param (',' param)*;
param: type name;
block: '{' defVarList stmts '}';
defVarList: defVars*;
defStruct: 'struct' name memberList ';';
defUnion: 'union' name memberList ';';
memberList: '{' (slot ';')* '}';
slot: type name;
funcDecl: 'extern' typeRef name '(' params ')' ';';
varDecl: 'extern' type name ';';
type: typeRef;
typeRef:
	typeRefBase (
		'[' integer? ']'
		| '*'
		| '(' paramTypeRefs ')'
	)*;
integer: HexLiteral | DecimalLiteral | OctalLiteral;
paramTypeRefs: 'void' | fixedParamTypeRefs (',' '...')?;
fixedParamTypeRefs: typeRef (',' typeRef)*;
typeRefBase:
	'void'
	| 'char'
	| 'short'
	| 'int'
	| 'long'
	| 'unsigned' 'char'
	| 'unsigned' 'short'
	| 'unsigned' 'int'
	| 'unsigned' 'long'
	| 'struct' Identifier
	| 'union' Identifier
	| Identifier;
typeDef: 'typedef' typeRef Identifier ';';
stmts: stmt*;
stmt:
	';'
	| labeledStmt
	| expr ';'
	| block
	| ifStmt
	| whileStmt
	| dowhileStmt
	| forStmt
	| switchStmt
	| breakStmt
	| continueStmt
	| gotoStmt
	| returnStmt;

labeledStmt: Identifier ':' stmt;
ifStmt: 'if' '(' expr ')' stmt ('else' stmt)?;
whileStmt: 'while' '(' expr ')' stmt;
dowhileStmt: 'do' stmt 'while' '(' expr ')' ';';
forStmt: 'for' '(' expr? ';' expr? ';' expr ')' stmt;
switchStmt: 'switch' '(' expr ')' '{' caseClauses '}';
caseClauses: caseClause* defaultClause?;
caseClause: cases caseBody;
cases: ('case' primary ':')+;
defaultClause: 'default' ':' caseBody;
caseBody: stmt+;
gotoStmt: 'goto' Identifier ';';
breakStmt: 'break' ';';
continueStmt: 'continue' ';';
returnStmt: 'return' expr? ';';

expr:
	primary
	| expr '.' Identifier
	| expr '->' Identifier
	| expr '[' expr ']'
	| expr arguments
	| expr ('++' | '--')
	| ('+' | '-' | '++' | '--') expr
	| ('+' | '-' | '!' | '~' | '*' | '&') expr
	| '(' type ')' expr
	| expr ('*' | '/' | '%') expr
	| expr ('+' | '-') expr
	| expr ('<' '<' | '>' '>' '>' | '>' '>') expr
	| expr ('<' '=' | '>' '=' | '>' | '<') expr
	| expr 'instanceof' type
	| expr ('==' | '!=') expr
	| expr '&' expr
	| expr '^' expr
	| expr '|' expr
	| expr '&&' expr
	| expr '||' expr
	| expr '?' expr ':' expr
	| <assoc = right> expr (
		'^='
		| '+='
		| '-='
		| '*='
		| '/='
		| '&='
		| '|='
		| '='
		| '>' '>' '='
		| '>' '>' '>' '='
		| '<' '<' '='
		| '%='
	) expr
	| 'sizeof' '(' type ')'
	| 'sizeof' expr;
// 函数调用的实参列表
exprList: expr (',' expr)*;

arguments: '(' exprList? ')';

// 字面值常量和标识符
primary: literal | Identifier | '(' expr ')';

// 字面值常量
literal:
	HexLiteral
	| DecimalLiteral
	| OctalLiteral
	| CharacterLiteral
	| StringLiteral
	| FloatingPointLiteral
	| BoolLiteral
	| 'null';

