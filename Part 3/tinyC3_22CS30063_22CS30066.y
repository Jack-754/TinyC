/*
  Yacc file
  Group-
  More Aayush Babasaheb 22CS30063
  Devanshu Agrawal 22CS30066
*/  

%{
    #include "tinyC2_22CS30063_22CS30066_translator.h"
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    extern parsetree root;
    void yyerror(char *);
    int yylex();

    extern string data_type;

%}

%union {
    string svalue;
}


// KEYWORD Tokens
%token AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT VOLATILE CHAR FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF STATIC COMPLEX DEFAULT INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE LONG TYPEDEF ELSE REGISTER UNION
%token LP RP LCP RCP LBP RBP SEMICOLON COMMA DOT TERNARY_QM TERNARY_SEP HASH ARROW SPREAD_OP // Punctuators
%token LOGICAL_AND LOGICAL_OR LOGICAL_NOT // Logical Operators
%token PLUS_FIX SUB_FIX LOGICAL_RIGHT_SHIFT LOGICAL_LEFT_SHIFT PLUS SUB STAR DIV MOD // Arithmetic Operators
%token BITWISE_AND BITWISE_OR BITWISE_XOR BITWISE_NOT // Bitwise operators
%token ASS_EQ MUL_EQ DIV_EQ MOD_EQ PLUS_EQ SUB_EQ SLR_EQ SLL_EQ AND_EQ XOR_EQ OR_EQ // Assignment operators
%token REL_GT REL_LT REL_LTE REL_GTE REL_EQ REL_NEQ // Relational Operators

%token<svalue> IDENTIFIER STRING_LITERAL CONSTANT 
%token<ivalue> 

%type<tree> primary_expression postfix_expression argument_expression_list argument_expression_list_opt unary_expression unary_operator cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression assignment_expression_opt assignment_operator expression expression_opt constant_expression
%type<tree> declaration declaration_specifiers declaration_specifiers_opt init_declarator_list init_declarator_list_opt init_declarator storage_class_specifier type_specifier specifier_qualifier_list specifier_qualifier_list_opt type_qualifier fuction_specifier declarator direct_declarator pointer pointer_opt type_qualifier_list type_qualifier_list_opt parameter_list parameter_declaration identifier_list identifier_list_opt type_name initializer initializer_list designation designation_opt designator_list designator parameter_type_list 
%type<tree> statement labeled_statement compound_statement block_item_list block_item_list_opt expression_statement block_item selection_statement iteration_statement jump_statement 
%type<tree> translation_unit external_declaration function_definition declaration_list declaration_list_opt

%type<tree> Start

%nonassoc RP
%nonassoc ELSE

%start Start

%%

/* START */

Start: 
    translation_unit                                                { }
  |                                                                 { }
  ;


/* Expressions */
primary_expression:
      IDENTIFIER                                                    { }
    | CONSTANT                                                      { }
    | STRING_LITERAL                                                { }
    | LP expression RP                                              { }
    ;

postfix_expression:
      primary_expression                                            { }
    | postfix_expression LBP expression RBP                         { }
    | postfix_expression LP argument_expression_list_opt RP         { }
    | postfix_expression DOT IDENTIFIER                             { }
    | postfix_expression ARROW IDENTIFIER                           { }
    | postfix_expression PLUS_FIX                                   { }
    | postfix_expression SUB_FIX                                    { }
    | LP type_name RP LCP initializer_list RCP                      { }
    | LP type_name RP LCP initializer_list COMMA RCP                { }
    ;

argument_expression_list:
      assignment_expression                                         { }
    | argument_expression_list COMMA assignment_expression          { }
    ;

argument_expression_list_opt:
      argument_expression_list                                      { }
    |                                                               { }
    ;

unary_expression:
      postfix_expression                                            { }
    | PLUS_FIX unary_expression                                     { }
    | SUB_FIX unary_expression                                      { }
    | unary_operator cast_expression                                { }
    | SIZEOF unary_expression                                       { }
    | SIZEOF LP type_name RP                                        { }
    ;

unary_operator:
      BITWISE_AND                                                   { }
    | STAR                                                          { }
    | PLUS                                                          { }
    | SUB                                                           { }
    | BITWISE_NOT                                                   { }
    | LOGICAL_NOT                                                   { }
    ;

cast_expression:
      unary_expression                                              { }
    | LP type_name RP cast_expression                               { }
    ;

multiplicative_expression:
      cast_expression                                               { }
    | multiplicative_expression STAR cast_expression                { }
    | multiplicative_expression DIV cast_expression                 { }
    | multiplicative_expression MOD cast_expression                 { }
    ;

additive_expression:
      multiplicative_expression                                     { }
    | additive_expression PLUS multiplicative_expression            { }
    | additive_expression SUB multiplicative_expression             { }
    ;

shift_expression:
      additive_expression                                           { }
    | shift_expression LOGICAL_LEFT_SHIFT additive_expression       { }
    | shift_expression LOGICAL_RIGHT_SHIFT additive_expression      { }
    ;

relational_expression:
      shift_expression                                              { }
    | relational_expression REL_LT shift_expression                 { }
    | relational_expression REL_GT shift_expression                 { }
    | relational_expression REL_LTE shift_expression                { }
    | relational_expression REL_GTE shift_expression                { }
    ;

equality_expression:
      relational_expression                                         { }
    | equality_expression REL_EQ relational_expression              { }
    | equality_expression REL_NEQ relational_expression             { }
    ;

AND_expression:
      equality_expression                                           { }
    | AND_expression BITWISE_AND equality_expression                { }
    ;

exclusive_OR_expression:
      AND_expression                                                { }
    | exclusive_OR_expression BITWISE_XOR AND_expression            { }
    ;

inclusive_OR_expression:
      exclusive_OR_expression                                       { }
    | inclusive_OR_expression BITWISE_OR exclusive_OR_expression    { }
    ;
logical_AND_expression:
      inclusive_OR_expression                                       { }
    | logical_AND_expression LOGICAL_AND inclusive_OR_expression    { }
    ;

logical_OR_expression:
      logical_AND_expression                                        { }
    | logical_OR_expression LOGICAL_OR logical_AND_expression       { }
    ;

conditional_expression:
      logical_OR_expression                                                             { }
    | logical_OR_expression TERNARY_QM expression TERNARY_SEP conditional_expression    { }
    ;

assignment_expression:
      conditional_expression                                                            { }
    | unary_expression assignment_operator assignment_expression                        { }
    ;

assignment_expression_opt:
      assignment_expression                                                             { }
    |                                                                                   { }
    ;

assignment_operator:
    ASS_EQ                                                          { }
    | MUL_EQ                                                        { }
    | DIV_EQ                                                        { }
    | MOD_EQ                                                        { }
    | PLUS_EQ                                                       { }
    | SUB_EQ                                                        { }
    | AND_EQ                                                        { }
    | XOR_EQ                                                        { }
    | OR_EQ                                                         { }
    | SLL_EQ                                                        { }
    | SLR_EQ                                                        { }
    ;

expression:
    assignment_expression                                           { }
    | expression COMMA assignment_expression                        { }
    ;

expression_opt:
      expression                                                    { }
    |                                                               { }
    ;

constant_expression:
    conditional_expression                                          { }
    ;

/* Declarations */

declaration:
      declaration_specifiers init_declarator_list_opt SEMICOLON     { }
    ;

declaration_specifiers:
      type_specifier declaration_specifiers_opt                     { }
    | storage_class_specifier declaration_specifiers_opt            { /*Given: Not Needed*/ }
    | type_qualifier declaration_specifiers_opt                     { /*Given: Not Needed*/ }
    | fuction_specifier declaration_specifiers_opt                  { /*Given: Not Needed*/ }
    ;

declaration_specifiers_opt:
      declaration_specifiers                                        { }
    |                                                               { }
    ;

init_declarator_list:
     init_declarator                                                { }
    | init_declarator_list COMMA init_declarator                    { }
    ;

init_declarator_list_opt:
      init_declarator_list                                          { }
    |                                                               { }
    ;

init_declarator:
     declarator                                                     { }
    | declarator ASS_EQ initializer                                 { }
    ;

storage_class_specifier:
     EXTERN                                                         { /*Given: Not needed */ }
    | STATIC                                                        { /*Given: Not needed */ }
    | AUTO                                                          { /*Given: Not needed */ }
    | REGISTER                                                      { /*Given: Not needed */ }
    ;

type_specifier:
      VOID                                                          { data_type = "void";    }
    | CHAR                                                          { data_type = "char";    }
    | SHORT                                                         { /*Given: Not needed */ }
    | INT                                                           { data_type = "int";     }
    | LONG                                                          { /*Given: Not needed */ }
    | FLOAT                                                         { data_type = "float";   }
    | DOUBLE                                                        { /*Given: Not needed */ }
    | SIGNED                                                        { /*Given: Not needed */ }
    | UNSIGNED                                                      { /*Given: Not needed */ }
    | BOOL                                                          { /*Given: Not needed */ }
    | COMPLEX                                                       { /*Given: Not needed */ }
    | IMAGINARY                                                     { /*Given: Not needed */ }
    ;

specifier_qualifier_list:
      type_specifier specifier_qualifier_list_opt                   { /*Given: Not needed */ }
    | type_qualifier specifier_qualifier_list_opt                   { /*Given: Not needed */ }
    ;

specifier_qualifier_list_opt:
      specifier_qualifier_list                                      { /*Given: Not needed */ }
    |                                                               { /*Given: Not needed */ }
    ;

type_qualifier:
      CONST                                                         { /*Given: Not needed */ }
    | RESTRICT                                                      { /*Given: Not needed */ }
    | VOLATILE                                                      { /*Given: Not needed */ }
    ;

fuction_specifier:
      INLINE                                                        { /*Given: Not needed */ }
    ;

declarator:
      pointer_opt direct_declarator                                 { }
    ;

direct_declarator:
      IDENTIFIER                                                                        { }
    | LP declarator RP                                                                  { }
    | direct_declarator LBP type_qualifier_list_opt assignment_expression_opt RBP       { }
    | direct_declarator LBP STATIC type_qualifier_list_opt assignment_expression RBP    { }
    | direct_declarator LBP type_qualifier_list STATIC assignment_expression RBP        { }
    | direct_declarator LBP type_qualifier_list_opt STAR RBP                            { }
    | direct_declarator LP parameter_type_list RP                                       { }
    | direct_declarator LP identifier_list_opt RP                                       { }
    ;

pointer:
      STAR type_qualifier_list_opt                                                      { }
    | STAR type_qualifier_list_opt pointer                                              { }
    ;

pointer_opt:
      pointer                                                       { }
    |                                                               { }
    ;

type_qualifier_list:
      type_qualifier                                                { /*Given: Not needed */ }
    | type_qualifier_list type_qualifier                            { /*Given: Not needed */ }
    ;

type_qualifier_list_opt:
      type_qualifier_list                                           { /*Given: Not needed */ }
    |                                                               { /*Given: Not needed */ }
    ;

parameter_type_list:
      parameter_list                                                { }
    | parameter_list COMMA SPREAD_OP                                { }
    ;

parameter_list:
      parameter_declaration                                         { }
    | parameter_list COMMA parameter_declaration                    { }
    ;

parameter_declaration:
      declaration_specifiers declarator                             { }
    | declaration_specifiers                                        { }
    ;

identifier_list:
      IDENTIFIER                                                    { }
    | identifier_list COMMA IDENTIFIER                              { }
    ;

identifier_list_opt:
      identifier_list                                               { }
    |                                                               { }
    ;

type_name:
      specifier_qualifier_list                                      { }
    ;

initializer:
      assignment_expression                                         { }
    | LCP initializer_list RCP                                      { }
    | LCP initializer_list COMMA RCP                                { }
    ;

initializer_list:
      designation_opt initializer                                   { }
    | initializer_list COMMA designation_opt initializer            { }
    ;

designation:
      designator_list ASS_EQ                                        { }
    ;

designation_opt:
      designation                                                   { }
    |                                                               { }
    ;

designator_list:
      designator                                                        { }
    | designator_list designator                                        { }
    ;

designator:
      LBP constant_expression RBP                                       { }
    | DOT IDENTIFIER                                                    { }
    ;

/* Statements */
statement:
      labeled_statement                                                 { }
    | compound_statement                                                { }
    | expression_statement                                              { }
    | selection_statement                                               { }
    | iteration_statement                                               { }
    | jump_statement                                                    { }
    ;

labeled_statement:
      IDENTIFIER TERNARY_SEP statement                                  { }
    | CASE constant_expression TERNARY_SEP statement                    { }
    | DEFAULT TERNARY_SEP statement                                     { }
    ;

compound_statement:
      LCP block_item_list_opt RCP                                       { }
    ;

block_item_list:
      block_item                                                        { }
    | block_item_list block_item                                        { }
    ;

block_item_list_opt:
      block_item_list                                                   { }
    |                                                                   { }
    ;

block_item:
      declaration                                                       { }
    | statement                                                         { }
    ;

expression_statement:
      expression_opt SEMICOLON                                          { }
    ;

selection_statement:
      IF LP expression RP statement                                     { }
    | IF LP expression RP statement ELSE statement                      { }
    | SWITCH LP expression RP statement                                 { }
    ;

iteration_statement:
      WHILE LP expression RP statement                                                          { }
    | DO statement WHILE LP expression RP SEMICOLON                                             { }
    | FOR LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP statement      { }
    | FOR LP declaration expression_opt SEMICOLON expression_opt RP statement                   { }
    ;

jump_statement:
      GOTO IDENTIFIER SEMICOLON                                         { }
    | CONTINUE SEMICOLON                                                { }
    | BREAK SEMICOLON                                                   { }
    | RETURN expression_opt SEMICOLON                                   { }
    ;

// External Definitions

translation_unit:
      external_declaration                                              { }
    | translation_unit external_declaration                             { }
    
external_declaration
      function_definition                                               { }
    | declaration                                                       { }
    ;

function_definition:
      declaration_specifiers declarator declaration_list_opt compound_statement         { }
    ;

declaration_list:
      declaration                                                       { }
    | declaration_list declaration                                      { }
    ;

declaration_list_opt:
      declaration_list                                                  { }
    |                                                                   { }
    ;

%%


void yyerror(char * s){
    printf("ERROR: %s \t line_no: %d \t token: %s \n", s, yylineno, yytext);
    exit(0);
}

