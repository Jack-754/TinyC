%{
#define ID 1
#define NUM 2
#define LP 3
#define RP 4
#define MUL 5
#define ADD 6
#define DIV 7
#define SUB 8
#define MOD 9
#define OTHER 10
%}

 
space	                [ \t\n]
spaces	                {space}+
identifier_nondigit	    [a-zA-Z_]
digit	                [0-9]
digit_sequence          {digit}+
nonzero_digit	        [1-9]
digits	                {digit}+
sign                    [+-]
number	                \+?\-?{digits}

single_quote_escaped    "\'"
double_quote_escaped    "\""
question_escaped        "\?"
backslash_escaped       "\\"
a_escaped               "\a"
b_escaped               "\b"
f_escaped               "\f"
newline                 "\n"
r_escaped               "\r"
tab                     "\t"
v_escaped               "\v"
escape_sequence         [{single_quote_escaped}{double_quote_escaped}{question_escaped}{backslash_escaped}{a_escaped}{b_escaped}{f_escaped}{newline}{r_escaped}{tab}{v_escaped}]
// check above line
single_quote            "'"
double_quote            """

c_char                  [^\'\\{escape_sequence}]
c_char_sequence         {c_char}+

%%

"auto"          {return KEYWORD;}
"enum"          {return KEYWORD;}
"restrict"      {return KEYWORD;}
"unsigned"      {return KEYWORD;}
"break"         {return KEYWORD;}
"extern"        {return KEYWORD;}
"return"        {return KEYWORD;}
"void"          {return KEYWORD;}
"case"          {return KEYWORD;}
"float"         {return KEYWORD;}
"short"         {return KEYWORD;}
"volatile"      {return KEYWORD;}
"char"          {return KEYWORD;}
"for"           {return KEYWORD;}
"signed"        {return KEYWORD;}
"while"         {return KEYWORD;}
"const"         {return KEYWORD;}
"goto"          {return KEYWORD;}
"sizeof"        {return KEYWORD;}
"Bool"          {return KEYWORD;}
"continue"      {return KEYWORD;}
"if"            {return KEYWORD;}
"static"        {return KEYWORD;}
"Complex"       {return KEYWORD;}
"default"       {return KEYWORD;}
"inline"        {return KEYWORD;}
"struct"        {return KEYWORD;}
"Imaginary"     {return KEYWORD;}
"do"            {return KEYWORD;}
"int"           {return KEYWORD;}
"switch"        {return KEYWORD;}
"double"        {return KEYWORD;}
"long"          {return KEYWORD;}
"typedef"       {return KEYWORD;}
"else"          {return KEYWORD;}
"register"      {return KEYWORD;}
"union"         {return KEYWORD;}




{spaces}	{ }
{number}	{ return(NUM); }
"("		{ return(LP); }
")"		{ return(RP); }
"+"		{ return(ADD); }
"-"		{ return(SUB); }
"*"		{ return(MUL); }
"/"		{ return(DIV); }
"%"		{ return(MOD); }
{id}		{ return(ID); }
.   {return(OTHER);}

%%