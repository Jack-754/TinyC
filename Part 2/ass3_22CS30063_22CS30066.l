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
"auto"      {yylval.lexval = strdup(yytext); return AUTO; }
"enum"      {yylval.lexval = strdup(yytext); return ENUM; }
"restrict"  {yylval.lexval = strdup(yytext); return RESTRICT; }
"unsigned"  {yylval.lexval = strdup(yytext); return UNSIGNED; }
"break"     {yylval.lexval = strdup(yytext); return BREAK; }
"extern"    {yylval.lexval = strdup(yytext); return EXTERN; }
"return"    {yylval.lexval = strdup(yytext); return RETURN; }
"void"      {yylval.lexval = strdup(yytext); return VOID; }
"case"      {yylval.lexval = strdup(yytext); return CASE; }
"float"     {yylval.lexval = strdup(yytext); return FLOAT; }
"short"     {yylval.lexval = strdup(yytext); return SHORT; }
"volatile"  {yylval.lexval = strdup(yytext); return VOLATILE; }
"char"      {yylval.lexval = strdup(yytext); return CHAR; }
"for"       {yylval.lexval = strdup(yytext); return FOR; }
"signed"    {yylval.lexval = strdup(yytext); return SIGNED; }
"while"     {yylval.lexval = strdup(yytext); return WHILE; }
"const"     {yylval.lexval = strdup(yytext); return CONST; }
"goto"      {yylval.lexval = strdup(yytext); return GOTO; }
"sizeof"    {yylval.lexval = strdup(yytext); return SIZEOF; }
"_Bool"     {yylval.lexval = strdup(yytext); return BOOL; }
"continue"  {yylval.lexval = strdup(yytext); return CONTINUE; }
"if"        {yylval.lexval = strdup(yytext); return IF; }
"static"    {yylval.lexval = strdup(yytext); return STATIC; }
"_Complex"  {yylval.lexval = strdup(yytext); return COMPLEX; }
"default"   {yylval.lexval = strdup(yytext); return DEFAULT; }
"inline"    {yylval.lexval = strdup(yytext); return INLINE; }
"struct"    {yylval.lexval = strdup(yytext); return STRUCT; }
"_Imaginary" {yylval.lexval = strdup(yytext); return IMAGINARY; }
"do"        {yylval.lexval = strdup(yytext); return DO; }
"do"        {yylval.lexval = strdup(yytext); return DO; }
"int"       {yylval.lexval = strdup(yytext); return INT; }
"switch"    {yylval.lexval = strdup(yytext); return SWITCH; }
"double"    {yylval.lexval = strdup(yytext); return DOUBLE; }
"long"      {yylval.lexval = strdup(yytext); return LONG; }
"typedef"   {yylval.lexval = strdup(yytext); return TYPEDEF; }
"else"      {yylval.lexval = strdup(yytext); return ELSE; }
"register"  {yylval.lexval = strdup(yytext); return REGISTER; }
"union"     {yylval.lexval = strdup(yytext); return UNION; }

{character_constant}    {yylval.lexval = strdup(yytext); return CONSTANT;}

{string_literal}        {yylval.lexval = strdup(yytext); return STRING_LITERAL;}

{integer_constant}      {yylval.lexval = strdup(yytext); return CONSTANT;}
{floating_constant}     {yylval.lexval = strdup(yytext); return CONSTANT;}

{identifier}            {yylval.lexval = strdup(yytext); return IDENTIFIER;}


"++"            {yylval.lexval = strdup(yytext); return PLUS_FIX;}
"--"            {yylval.lexval = strdup(yytext); return SUB_FIX;}
"&"             {yylval.lexval = strdup(yytext); return BITWISE_AND;}
"|"             {yylval.lexval = strdup(yytext); return BITWISE_OR;}
"^"             {yylval.lexval = strdup(yytext); return BITWISE_XOR;}
"<<"            {yylval.lexval = strdup(yytext); return LOGICAL_RIGHT_SHIFT;}
">>"            {yylval.lexval = strdup(yytext); return LOGICAL_LEFT_SHIFT;}
">"             {yylval.lexval = strdup(yytext); return REL_GT;}
"<"             {yylval.lexval = strdup(yytext); return REL_LT;}
"<="            {yylval.lexval = strdup(yytext); return REL_LTE;}
">="            {yylval.lexval = strdup(yytext); return REL_GTE;}
"=="            {yylval.lexval = strdup(yytext); return REL_EQ;}
"!="            {yylval.lexval = strdup(yytext); return REL_NEQ;}
"&&"            {yylval.lexval = strdup(yytext); return LOGICAL_AND;}
"||"            {yylval.lexval = strdup(yytext); return LOGICAL_OR;}
"+"             {yylval.lexval = strdup(yytext); return PLUS;}
"-"             {yylval.lexval = strdup(yytext); return SUB;}
"*"             {yylval.lexval = strdup(yytext); return STAR;}
"/"             {yylval.lexval = strdup(yytext); return DIV;}
"%"             {yylval.lexval = strdup(yytext); return MOD;}
"="             {yylval.lexval = strdup(yytext); return ASS_EQ;}
"("             {yylval.lexval = strdup(yytext); return LP;}
")"             {yylval.lexval = strdup(yytext); return RP;}
"{"             {yylval.lexval = strdup(yytext); return LCP;}
"}"             {yylval.lexval = strdup(yytext); return RCP;}
"["             {yylval.lexval = strdup(yytext); return LBP;}
"]"             {yylval.lexval = strdup(yytext); return RBP;}
";"             {yylval.lexval = strdup(yytext); return SEMICOLON;}
","             {yylval.lexval = strdup(yytext); return COMMA;}
"."             {yylval.lexval = strdup(yytext); return DOT;}
"!"             {yylval.lexval = strdup(yytext); return LOGICAL_NOT;}
"~"             {yylval.lexval = strdup(yytext); return BITWISE_NOT;}
"?"             {yylval.lexval = strdup(yytext); return TERNARY_QM;}
":"             {yylval.lexval = strdup(yytext); return TERNARY_SEP;}
"#"             {yylval.lexval = strdup(yytext); return HASH;}
"->"			{yylval.lexval = strdup(yytext); return ARROW;}
"..."			{yylval.lexval = strdup(yytext); return SPREAD_OP;}
"*="			{yylval.lexval = strdup(yytext); return MUL_EQ;}
"/="			{yylval.lexval = strdup(yytext); return DIV_EQ;}
"%="			{yylval.lexval = strdup(yytext); return MOD_EQ;}
"+="			{yylval.lexval = strdup(yytext); return PLUS_EQ;}
"-="			{yylval.lexval = strdup(yytext); return SUB_EQ;}
"<<="			{yylval.lexval = strdup(yytext); return SLR_EQ;}
">>="			{yylval.lexval = strdup(yytext); return SLL_EQ;}
"&="			{yylval.lexval = strdup(yytext); return AND_EQ;}
"^="			{yylval.lexval = strdup(yytext); return XOR_EQ;}
"|="			{yylval.lexval = strdup(yytext); return OR_EQ;}

.               {return OTHER;}
%%

int yywrap(void)
{
	return 1;
}