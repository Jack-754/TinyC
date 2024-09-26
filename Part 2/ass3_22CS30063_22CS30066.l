%{
	# include "ass3_22CS30063_22CS30066.h"
    # include "y.tab.h"
    // extern symboltable T;
    void yyerror(char *);
    int yylex();   
%}

Single_Line_Comment "//"[^\n]*
Multi_Line_Comment \/\*[^\*]*(\*+[^\*\/][^\*]*)*[\*]\/

space	                [ \t]+
newline                 \n

identifier_nondigit	    [a-zA-Z_]
digit	                [0-9]
identifier              {identifier_nondigit}({identifier_nondigit}|{digit})*

nonzero_digit	        [1-9]
digit_sequence          {digit}+
sign                    [+-]
integer_constant        [0]|{nonzero_digit}{digit}*
floating_constant       ({fractional_constant}{exponent_part}?)|({digit_sequence}{exponent_part})
fractional_constant     ({digit_sequence}?[.]{digit_sequence})|({digit_sequence}[.])
exponent_part           [eE]{sign}?{digit_sequence}

escape_sequence         "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"

c_char                  [^\'\n\\]|{escape_sequence}
c_char_sequence         {c_char}+
character_constant      \'({c_char_sequence})\'


s_char                  [^\"\n\\]|{escape_sequence}
s_char_sequence         {s_char}+
string_literal          \"{s_char_sequence}?\"


%%
{Single_Line_Comment} {;}
{Multi_Line_Comment} {;}
{space}     { ;}
{newline}    { ;}
"auto"      { return AUTO; }
"enum"      { return ENUM; }
"restrict"  { return RESTRICT; }
"unsigned"  { return UNSIGNED; }
"break"     { return BREAK; }
"extern"    { return EXTERN; }
"return"    { return RETURN; }
"void"      { return VOID; }
"case"      { return CASE; }
"float"     { return FLOAT; }
"short"     { return SHORT; }
"volatile"  { return VOLATILE; }
"char"      { return CHAR; }
"for"       { return FOR; }
"signed"    { return SIGNED; }
"while"     { return WHILE; }
"const"     { return CONST; }
"goto"      { return GOTO; }
"sizeof"    { return SIZEOF; }
"_Bool"     { return _BOOL; }
"continue"  { return CONTINUE; }
"if"        { return IF; }
"static"    { return STATIC; }
"_Complex"  { return _COMPLEX; }
"default"   { return DEFAULT; }
"inline"    { return INLINE; }
"struct"    { return STRUCT; }
"_Imaginary" { return _IMAGINARY; }
"do"        { return DO; }
"int"       { return INT; }
"switch"    { return SWITCH; }
"double"    { return DOUBLE; }
"long"      { return LONG; }
"typedef"   { return TYPEDEF; }
"else"      { return ELSE; }
"register"  { return REGISTER; }
"union"     { return UNION; }

{character_constant}    {return CONSTANT;}

{string_literal}        {return STRING_LITERAL;}

{integer_constant}      {return CONSTANT;}
{floating_constant}     {return CONSTANT;}

{identifier}            {return IDENTIFIER;}


"++"            {return PLUS_FIX;}
"--"            {return SUB_FIX;}
"&"             {return BITWISE_AND;}
"|"             {return BITWISE_OR;}
"^"             {return BITWISE_XOR;}
"<<"            {return LOGICAL_RIGHT_SHIFT;}
">>"            {return LOGICAL_LEFT_SHIFT;}
">"             {return REL_GT;}
"<"             {return REL_LT;}
"<="            {return REL_LTE;}
">="            {return REL_GTE;}
"=="            {return REL_EQ;}
"!="            {return REL_NEQ;}
"&&"            {return LOGICAL_AND;}
"||"            {return LOGICAL_OR;}
"+"             {return PLUS;}
"-"             {return SUB;}
"*"             {return STAR;}
"/"             {return DIV;}
"%"             {return MOD;}
"="             {return ASS_EQ;}
"("             {return LP;}
")"             {return RP;}
"{"             {return LCP;}
"}"             {return RCP;}
"["             {return LBP;}
"]"             {return RBP;}
";"             {return SEMICOLON;}
","             {return COMMA;}
"."             {return DOT;}
"!"             {return LOGICAL_NOT;}
"~"             {return BITWISE_NOT;}
"?"             {return TERNARY_QM;}
":"             {return TERNARY_SEP;}
"#"             {return HASH;}
"->"			{return ARROW;}
"..."			{return SPREAD_OP;}
"*="			{return MUL_EQ;}
"/="			{return DIV_EQ;}
"%="			{return MOD_EQ;}
"+="			{return PLUS_EQ;}
"-="			{return SUB_EQ;}
"<<="			{return SLR_EQ;}
">>="			{return SLL_EQ;}
"&="			{return AND_EQ;}
"^="			{return XOR_EQ;}
"|="			{return OR_EQ;}



.               {return OTHER;}
%%

int yywrap(void)
{
	return 1;
}