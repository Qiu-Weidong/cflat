grammar Cflat;

import Cflatlexer;
// 首字母大写表示终结符，非终结符采用驼峰命名法
compilationUnit: importStmts topDefs EOF;
declarationFile:
	importStmts (
		funcDecl
		| varDecl
		| defStruct
		| defUnion
		| typeDef
	)* EOF;
importStmts: importStmt*;
importStmt: 'import' libid ';';
libid: name ('.' name)*;
name: Identifier;

topDefs: ( defFunc | defVars | defStruct | defUnion | typeDef)*;
defVars:
	(StaticKeyWord? ConstKeyWord? | ConstKeyWord? StaticKeyWord?) type name (
		'=' expr
	)? (',' name ('=' expr)?)* ';';
defFunc: StaticKeyWord? typeRef name '(' params ')' block;
params: 'void' | fixedParams (',' '...')?;
fixedParams: param (',' param)*;
param: ConstKeyWord? type name;
block: '{' defVarList stmts '}';
defVarList: defVars*;
defStruct: 'struct' name memberList ';';
defUnion: 'union' name memberList ';';
memberList: '{' (slot ';')* '}';
slot: type name;
funcDecl: 'extern' typeRef name '(' params ')' ';';
varDecl: 'extern' ConstKeyWord? type name ';';
type: typeRef;
typeRef: typeRefBase typeRefSuffix*;
simpleTypeRef:
	'void'					# VoidTypeBase
	| 'char'				# CharTypeBase
	| 'short'				# ShortTypeBase
	| 'int'					# IntTypeBase
	| 'long'				# LongTypeBase
	| 'unsigned' 'char'		# UnsignedCharTypeBase
	| 'unsigned' 'short'	# UnsignedShortTypeBase
	| 'unsigned' 'int'		# UnsignedIntTypeBase
	| 'unsigned' 'long'		# UnsignedLongTypeBase
	| 'float'				# FloatTypeBase
	| 'double'				# DoubleTypeBase;
compositeTypeRef:
	'struct' Identifier		# StructTypeBase
	| 'union' Identifier	# UnionTypeBase
	| typeRef '*'			# PointerTypeBase
	| typeRef '[' integer? ']' # ArrayTypeBase
	| typeRef '(' paramTypeRefs ')' # FunctionTypeBase
	;
userTypeRef	: Identifier			# UserTypeBase;
integer: HexLiteral | DecimalLiteral | OctalLiteral;
paramTypeRefs: 'void' | fixedParamTypeRefs vararg?;
vararg: ',' '...';
fixedParamTypeRefs:
	ConstKeyWord? typeRef (',' ConstKeyWord? typeRef)*;
typeRefBase: 'base';
	
typeRefSuffix:
	'[' integer? ']'		# ArrayTypeSuffix
	| '*'					# PointerTypeSuffix
	| '(' paramTypeRefs ')'	# FunctionTypeSuffix;
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

