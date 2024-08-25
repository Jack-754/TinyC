%{
#define KEYWORD 1
#define IDENTIFIER 2
#define CONSTANT 3
#define STRING_LITERAL 4
#define PUNCTUATOR 5
#define OTHER 6
%}

 
space	                [ \t]+
newline                 \n

identifier_nondigit	    [a-zA-Z_]
digit	                [0-9]
identifier {identifier_nondigit}({identifier_nondigit}|{digit})*



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
{space}     { ;}
{newline}    { ;}
"auto"      { return KEYWORD; }
"enum"      { return KEYWORD; }
"restrict"  { return KEYWORD; }
"unsigned"  { return KEYWORD; }
"break"     { return KEYWORD; }
"extern"    { return KEYWORD; }
"return"    { return KEYWORD; }
"void"      { return KEYWORD; }
"case"      { return KEYWORD; }
"float"     { return KEYWORD; }
"short"     { return KEYWORD; }
"volatile"  { return KEYWORD; }
"char"      { return KEYWORD; }
"for"       { return KEYWORD; }
"signed"    { return KEYWORD; }
"while"     { return KEYWORD; }
"const"     { return KEYWORD; }
"goto"      { return KEYWORD; }
"sizeof"    { return KEYWORD; }
"_Bool"     { return KEYWORD; }
"continue"  { return KEYWORD; }
"if"        { return KEYWORD; }
"static"    { return KEYWORD; }
"_Complex"  { return KEYWORD; }
"default"   { return KEYWORD; }
"inline"    { return KEYWORD; }
"struct"    { return KEYWORD; }
"_Imaginary" { return KEYWORD; }
"do"        { return KEYWORD; }
"int"       { return KEYWORD; }
"switch"    { return KEYWORD; }
"double"    { return KEYWORD; }
"long"      { return KEYWORD; }
"typedef"   { return KEYWORD; }
"else"      { return KEYWORD; }
"register"  { return KEYWORD; }
"union"     { return KEYWORD; }

{character_constant}    {return CONSTANT;}

{string_literal}        {return STRING_LITERAL;}

{integer_constant}      {return CONSTANT;}
{floating_constant}     {return CONSTANT;}

{identifier}            {return IDENTIFIER;}

"++"            {return PUNCTUATOR;}
"--"            {return PUNCTUATOR;}
"&"             {return PUNCTUATOR;}
"|"             {return PUNCTUATOR;}
"^"             {return PUNCTUATOR;}
"<<"            {return PUNCTUATOR;}
">>"            {return PUNCTUATOR;}
">"             {return PUNCTUATOR;}
"<"             {return PUNCTUATOR;}
"<="            {return PUNCTUATOR;}
">="            {return PUNCTUATOR;}
"=="            {return PUNCTUATOR;}
"!="            {return PUNCTUATOR;}
"&&"            {return PUNCTUATOR;}
"||"            {return PUNCTUATOR;}
"+"             {return PUNCTUATOR;}
"-"             {return PUNCTUATOR;}
"*"             {return PUNCTUATOR;}
"/"             {return PUNCTUATOR;}
"%"             {return PUNCTUATOR;}
"="             {return PUNCTUATOR;}
"("             {return PUNCTUATOR;}
")"             {return PUNCTUATOR;}
"{"             {return PUNCTUATOR;}
"}"             {return PUNCTUATOR;}
"["             {return PUNCTUATOR;}
"]"             {return PUNCTUATOR;}
";"             {return PUNCTUATOR;}
","             {return PUNCTUATOR;}
"."             {return PUNCTUATOR;}
"!"             {return PUNCTUATOR;}
"~"             {return PUNCTUATOR;}
"?"             {return PUNCTUATOR;}
":"             {return PUNCTUATOR;}
"#"             {return PUNCTUATOR;}

.               {return OTHER;}
%%