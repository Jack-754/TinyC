%{
	# include "tinyC3_22CS30063_22CS30066_translator.h"
    # include "y.tab.h"
    void yyerror(char *);
    int yylex(); 
    
    extern symbol_table* currentSymbolTable;
    /*
        Lex file
        Group-
        More Aayush Babasaheb 22CS30063
        Devanshu Agrawal 22CS30066
    */  
%}

%option yylineno

%x SINGLE_LINE_COMMENT
%x MULTI_LINE_COMMENT


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
"//"                        {BEGIN(SINGLE_LINE_COMMENT);}
<SINGLE_LINE_COMMENT>.         {}
<SINGLE_LINE_COMMENT>\n        {BEGIN(INITIAL);}
<SINGLE_LINE_COMMENT><<EOF>>   {BEGIN(INITIAL);}

"/*"                        {BEGIN(MULTI_LINE_COMMENT);}
<MULTI_LINE_COMMENT>"*/"       {BEGIN(INITIAL);}
<MULTI_LINE_COMMENT>.          {}
<MULTI_LINE_COMMENT>\n         {}

{space}     { ;}
{newline}    { ;}
"auto"                              { return AUTO; }
"enum"                              { return ENUM; }
"restrict"                          { return RESTRICT; }
"unsigned"                          { return UNSIGNED; }
"break"                             { return BREAK; }
"void"                              { return VOID; }
"extern"                            { return EXTERN; }
"float"                             { return FLOAT; }
"return"                            { return RETURN; }
"volatile"                          { return VOLATILE; }
"case"                              { return CASE; }
"for"                               { return FOR; }
"short"                             { return SHORT; }
"while"                             { return WHILE; }
"char"                              { return CHAR; }
"goto"                              { return GOTO; }
"signed"                            { return SIGNED; }
"_Bool"                             { return BOOL; }
"const"                             { return CONST; }
"if"                                { return IF; }
"sizeof"                            { return SIZEOF; }
"_Complex"                          { return COMPLEX; }
"continue"                          { return CONTINUE; }
"inline"                            { return INLINE; }
"static"                            { return STATIC; }
"_Imaginary"                        { return IMAGINARY; }
"default"                           { return DEFAULT; }
"struct"                            { return STRUCT; }
"do"                                { return DO; }
"int"                               { return INT; }
"switch"                            { return SWITCH; }
"double"                            { return DOUBLE; }
"long"                              { return LONG; }
"typedef"                           { return TYPEDEF; }
"else"                              { return ELSE; }
"register"                          { return REGISTER; }
"union"                             { return UNION; }

{character_constant}    { yylval.sValue = strdup(yytext) ;return CONSTANT_CHAR;}
{string_literal}        { yylval.sValue = strdup(yytext) ;return STRING_LITERAL;}
{integer_constant}      { yylval.iValue = atoi(strdup(yytext)) ;return CONSTANT_INT;}
{floating_constant}     { yylval.sValue = strdup(yytext); return CONSTANT_FLOAT;}
{identifier}            { yylval.symb = currentSymbolTable->lookup(yytext); return IDENTIFIER;}


"++"            { return PLUS_FIX;}
"--"            { return SUB_FIX;}
"&"             { return BITWISE_AND;}
"|"             { return BITWISE_OR;}
"^"             { return BITWISE_XOR;}
"<<"            { return LOGICAL_RIGHT_SHIFT;}
">>"            { return LOGICAL_LEFT_SHIFT;}
">"             { return REL_GT;}
"<"             { return REL_LT;}
"<="            { return REL_LTE;}
">="            { return REL_GTE;}
"=="            { return REL_EQ;}
"!="            { return REL_NEQ;}
"&&"            { return LOGICAL_AND;}
"||"            { return LOGICAL_OR;}
"+"             { return PLUS;}
"-"             { return SUB;}
"*"             { return STAR;}
"/"             { return DIV;}
"%"             { return MOD;}
"="             { return ASS_EQ;}
"("             { return LP;}
")"             { return RP;}
"{"             { return LCP;}
"}"             { return RCP;}
"["             { return LBP;}
"]"             { return RBP;}
";"             { return SEMICOLON;}
","             { return COMMA;}
"."             { return DOT;}
"!"             { return LOGICAL_NOT;}
"~"             { return BITWISE_NOT;}
"?"             { return TERNARY_QM;}
":"             { return TERNARY_SEP;}
"#"             { return HASH;}
"->"			{ return ARROW;}
"..."			{ return SPREAD_OP;}
"*="			{ return MUL_EQ;}
"/="			{ return DIV_EQ;}
"%="			{ return MOD_EQ;}
"+="			{ return PLUS_EQ;}
"-="			{ return SUB_EQ;}
"<<="			{ return SLR_EQ;}
">>="			{ return SLL_EQ;}
"&="			{ return AND_EQ;}
"^="			{ return XOR_EQ;}
"|="			{ return OR_EQ;}

.               {;}
%%

int yywrap(void)
{
	return 1;
}