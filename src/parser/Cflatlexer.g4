lexer grammar Cflatlexer;

// cflat的词法分析文件

// 十六进制的整数字面量
HexLiteral: '0' ('x' | 'X') HexDigit+ IntegerTypeSuffix;

// 十进制整数字面量
DecimalLiteral: ('0' | '1' ..'9' '0' ..'9'*) IntegerTypeSuffix;

// 八进制整数字面量
OctalLiteral: '0' ('0' ..'7')+ IntegerTypeSuffix;

BoolLiteral: 'true' | 'false';
// 浮点数字面量
FloatingPointLiteral: ('0' ..'9')+ '.' ('0' ..'9')* Exponent? FloatTypeSuffix?
	| '.' ('0' ..'9')+ Exponent? FloatTypeSuffix?
	| ('0' ..'9')+ Exponent FloatTypeSuffix?
	| ('0' ..'9')+ FloatTypeSuffix
	| ('0x' | '0X') (HexDigit)* ('.' (HexDigit)*)? ('p' | 'P') (
		'+'
		| '-'
	)? ('0' .. '9')+ FloatTypeSuffix?;



// 字符字面量
CharacterLiteral: '\'' ( EscapeSequence | ~('\'' | '\\')) '\'';

// 字符串字面量
StringLiteral: '"' ( EscapeSequence | ~('\\' | '"'))* '"';

// 标识符
Identifier: Letter (Letter | CflatIDDigit)*;

StaticKeyWord: 'static';

/**I found this char range in JavaCC's grammar, but Letter and Digit overlap.
 Still works, but...
 */
// 多行注释
BLOCK_COMMENT: '/*' .*? '*/' -> skip;
SPACES: [ \r\t\u000C\n]+ -> skip;
// 单行注释
LINE_COMMENT: '//' ~[\r\n]* '\r'? '\n' -> skip;

fragment Exponent: ('e' | 'E') ('+' | '-')? ('0' ..'9')+;
fragment FloatTypeSuffix: ('f' | 'F' | 'd' | 'D');
fragment EscapeSequence:
	'\\' (
		'b'
		| 't'
		| 'n'
		| 'f'
		| 'r'
		| '"'
		| '\''
		| '\\'
		| 'a'
		| 'e'
		| 'v'
	)
	| UnicodeEscape
	| OctalEscape;

fragment OctalEscape:
	'\\' ('0' ..'3') ('0' ..'7') ('0' ..'7')
	| '\\' ('0' ..'7') ('0' ..'7')
	| '\\' ('0' ..'7');

fragment UnicodeEscape:
	'\\' 'u' HexDigit HexDigit HexDigit HexDigit;

fragment HexDigit: ('0' ..'9' | 'a' ..'f' | 'A' ..'F');
fragment IntegerTypeSuffix: ('l' | 'L')? ('u' | 'U')?
	| ('u' | 'U')? ('l' | 'L')?;
fragment Letter:
	'\u0024'
	| '\u0041' ..'\u005a'
	| '\u005f'
	| '\u0061' ..'\u007a'
	| '\u00c0' ..'\u00d6'
	| '\u00d8' ..'\u00f6'
	| '\u00f8' ..'\u00ff'
	| '\u0100' ..'\u1fff'
	| '\u3040' ..'\u318f'
	| '\u3300' ..'\u337f'
	| '\u3400' ..'\u3d2d'
	| '\u4e00' ..'\u9fff'
	| '\uf900' ..'\ufaff';

fragment CflatIDDigit:
	'\u0030' ..'\u0039'
	| '\u0660' ..'\u0669'
	| '\u06f0' ..'\u06f9'
	| '\u0966' ..'\u096f'
	| '\u09e6' ..'\u09ef'
	| '\u0a66' ..'\u0a6f'
	| '\u0ae6' ..'\u0aef'
	| '\u0b66' ..'\u0b6f'
	| '\u0be7' ..'\u0bef'
	| '\u0c66' ..'\u0c6f'
	| '\u0ce6' ..'\u0cef'
	| '\u0d66' ..'\u0d6f'
	| '\u0e50' ..'\u0e59'
	| '\u0ed0' ..'\u0ed9'
	| '\u1040' ..'\u1049';