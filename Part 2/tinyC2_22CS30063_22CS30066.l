%{
	# include "tinyC2_22CS30063_22CS30066.h"
    # include "y.tab.h"
    // extern symboltable T;
    void yyerror(char *);
    int yylex();   
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
"auto"      {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return AUTO; }
"enum"      {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return ENUM; }
"restrict"  {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return RESTRICT; }
"unsigned"  {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return UNSIGNED; }
"break"     {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return BREAK; }
"extern"    {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return EXTERN; }
"return"    {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return RETURN; }
"void"      {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return VOID; }
"case"      {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return CASE; }
"float"     {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return FLOAT; }
"short"     {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return SHORT; }
"volatile"  {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return VOLATILE; }
"char"      {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return CHAR; }
"for"       {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return FOR; }
"signed"    {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return SIGNED; }
"while"     {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return WHILE; }
"const"     {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return CONST; }
"goto"      {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return GOTO; }
"sizeof"    {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return SIZEOF; }
"_Bool"     {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return BOOL; }
"continue"  {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return CONTINUE; }
"if"        {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return IF; }
"static"    {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return STATIC; }
"_Complex"  {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return COMPLEX; }
"default"   {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return DEFAULT; }
"inline"    {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return INLINE; }
"struct"    {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return STRUCT; }
"_Imaginary" {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return IMAGINARY; }
"do"        {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return DO; }
"int"       {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return INT; }
"switch"    {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return SWITCH; }
"double"    {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return DOUBLE; }
"long"      {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return LONG; }
"typedef"   {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return TYPEDEF; }
"else"      {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return ELSE; }
"register"  {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return REGISTER; }
"union"     {yylval.tree = create_leaf_node("KEYWORD",strdup(yytext)); return UNION; }

{character_constant}    {yylval.tree = create_leaf_node("CONSTANT",strdup(yytext)); return CONSTANT;}
{string_literal}        {yylval.tree = create_leaf_node("STRING LITERAL",strdup(yytext)); return STRING_LITERAL;}
{integer_constant}      {yylval.tree = create_leaf_node("CONSTANT",strdup(yytext)); return CONSTANT;}
{floating_constant}     {yylval.tree = create_leaf_node("CONSTANT",strdup(yytext)); return CONSTANT;}
{identifier}            {yylval.tree = create_leaf_node("IDENTIFIER",strdup(yytext)); return IDENTIFIER;}


"++"            {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return PLUS_FIX;}
"--"            {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return SUB_FIX;}
"&"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return BITWISE_AND;}
"|"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return BITWISE_OR;}
"^"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return BITWISE_XOR;}
"<<"            {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return LOGICAL_RIGHT_SHIFT;}
">>"            {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return LOGICAL_LEFT_SHIFT;}
">"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return REL_GT;}
"<"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return REL_LT;}
"<="            {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return REL_LTE;}
">="            {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return REL_GTE;}
"=="            {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return REL_EQ;}
"!="            {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return REL_NEQ;}
"&&"            {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return LOGICAL_AND;}
"||"            {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return LOGICAL_OR;}
"+"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return PLUS;}
"-"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return SUB;}
"*"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return STAR;}
"/"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return DIV;}
"%"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return MOD;}
"="             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return ASS_EQ;}
"("             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return LP;}
")"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return RP;}
"{"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return LCP;}
"}"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return RCP;}
"["             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return LBP;}
"]"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return RBP;}
";"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return SEMICOLON;}
","             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return COMMA;}
"."             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return DOT;}
"!"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return LOGICAL_NOT;}
"~"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return BITWISE_NOT;}
"?"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return TERNARY_QM;}
":"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return TERNARY_SEP;}
"#"             {yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return HASH;}
"->"			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return ARROW;}
"..."			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return SPREAD_OP;}
"*="			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return MUL_EQ;}
"/="			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return DIV_EQ;}
"%="			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return MOD_EQ;}
"+="			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return PLUS_EQ;}
"-="			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return SUB_EQ;}
"<<="			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return SLR_EQ;}
">>="			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return SLL_EQ;}
"&="			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return AND_EQ;}
"^="			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return XOR_EQ;}
"|="			{yylval.tree = create_leaf_node("PUNCTUATOR",strdup(yytext)); return OR_EQ;}

.               {;}
%%

int yywrap(void)
{
	return 1;
}