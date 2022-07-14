grammar Cflat;

import Cflatlexer;
// 首字母大写表示终结符，非终结符采用驼峰命名法
compilationUnit: (importStmt | definition)* EOF;

declarationFile: (importStmt | declaration)* EOF;
importStmt: 'import' libid ';';
libid: name ('.' name)*;
name: Identifier;

definition:
	functionDefinition
	| variableDefinition
	| structDefinition
	| unionDefinition
	| typeDefinition;
declaration:
	functionDeclaration
	| variableDeclaration
	| structDeclaration
	| unionDeclaration
	| typeDefinition;

// definition
variableDefinition:
	(StaticKeyWord? ConstKeyWord? | ConstKeyWord? StaticKeyWord?) type name (
		'=' expr
	)? (',' name ('=' expr)?)* ';';
functionDefinition:
	StaticKeyWord? type name '(' params ')' block;
structDefinition: 'struct' name memberList ';';
unionDefinition: 'union' name memberList ';';
typeDefinition: 'typedef' type Identifier ';';
// decclaration
functionDeclaration:
	'extern' type name '(' (params | paramTypeRefs) ')' ';';
variableDeclaration: (
		'extern' ConstKeyWord?
		| ConstKeyWord? 'extern'
	) type name ';';
structDeclaration: 'struct' name ';';
unionDeclaration: 'union' name ';';

vararg: ',' '...';
params: 'void' | fixedParams vararg?;
fixedParams: param (',' param)*;
param: ConstKeyWord? type name;
paramTypeRefs: 'void' | fixedParamTypeRefs vararg?;
fixedParamTypeRefs: paramTypeRef (',' paramTypeRef)*;
paramTypeRef: ConstKeyWord? type;

block: '{' (variableDefinition | stmt)* '}';
memberList: '{' (slot ';')* '}';
slot: type name;

type: 
	'void'							# BasicVoidType
	| 'signed'? 'char'				# BasicSignedCharType
	| 'signed'? 'short'				# BasicSignedShortType
	| ('signed'? 'int' | 'signed')	# BasicSignedIntType
	| 'signed'? 'long'				# BasicSignedLongType
	| 'unsigned' 'char'				# BasicUnsignedCharType
	| 'unsigned' 'short'			# BasicUnsignedShortType
	| 'unsigned' 'int'?				# BasicUnsignedIntType
	| 'unsigned' 'long'				# BasicUnsignedLongType
	| 'float'						# BasicFloatType
	| 'double'						# BasicDoubleType
	| 'struct' Identifier			# StructType
	| 'union' Identifier			# UnionType
	| Identifier					# UserType  
	| type '*'						# PointerType
	| type '[' integer? ']'			# ArrayType
	| type '(' paramTypeRefs ')'	# FunctionType
	;
// stmt
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
integer: HexLiteral | DecimalLiteral | OctalLiteral;
