%{
    #include "ass3_22CS30063_22CS30066.h"
    // extern symboltable T;
    void yyerror(char *);
    int yylex();
%}

%union {
    parsetree tree;
}


// KEYWORD Tokens
%token<tree> AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT VOLATILE CHAR FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF STATIC COMPLEX DEFAULT INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE LONG TYPEDEF ELSE REGISTER UNION
%token<tree> LP RP LCP RCP LBP RBP SEMICOLON COMMA DOT TERNARY_QM TERNARY_SEP HASH ARROW SPREAD_OP // Punctuators
%token<tree> LOGICAL_AND LOGICAL_OR LOGICAL_NOT // Logical Operators
%token<tree> PLUS_FIX SUB_FIX LOGICAL_RIGHT_SHIFT LOGICAL_LEFT_SHIFT PLUS SUB STAR DIV MOD // Arithmetic Operators
%token<tree> BITWISE_AND BITWISE_OR BITWISE_XOR BITWISE_NOT // Bitwise operators
%token<tree> ASS_EQ MUL_EQ DIV_EQ MOD_EQ PLUS_EQ SUB_EQ SLR_EQ SLL_EQ AND_EQ XOR_EQ OR_EQ // Assignment operators
%token<tree> REL_GT REL_LT REL_LTE REL_GTE REL_EQ REL_NEQ // Relational Operators
%token<tree> IDENTIFIER STRING_LITERAL CONSTANT 

%type<tree> primary_expression postfix_expression argument_expression_list argument_expression_list_opt unary_expression unary_operator cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression assignment_expression_opt assignment_operator expression expression_opt constant_expression
%type<tree> declaration declaration_specifiers declaration_specifiers_opt init_declarator_list init_declarator_list_opt init_declarator storage_class_specifier type_specifier specifier_qualifier_list specifier_qualifier_list_opt type_qualifier fuction_specifier declarator direct_declarator pointer pointer_opt type_qualifier_list type_qualifier_list_opt parameter_list parameter_declaration identifier_list identifier_list_opt type_name initializer initializer_list designation designation_opt designator_list designator parameter_type_list 
%type<tree> statement labeled_statement compound_statement block_item_list block_item_list_opt expression_statement block_item selection_statement iteration_statement jump_statement 
%type<tree> translation_unit external_declaration function_definition declaration_list declaration_list_opt
%%
/* Expressions */
/* Expressions */
primary_expression:
      IDENTIFIER                                                    { $$ = create_node("primary_expression"); add_child($$, $1); }
    | CONSTANT                                                      { $$ = create_node("primary_expression"); add_child($$, $1); }
    | STRING_LITERAL                                                { $$ = create_node("primary_expression"); add_child($$, $1); }
    | LP expression RP                                              { $$ = create_node("primary_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

postfix_expression:
      primary_expression                                            { $$ = create_node("postfix_expression"); add_child($$, $1); }
    | postfix_expression LBP expression RBP                         { $$ = create_node("postfix_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | postfix_expression LP argument_expression_list_opt RP         { $$ = create_node("postfix_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); }
    | postfix_expression DOT IDENTIFIER                             { $$ = create_node("postfix_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | postfix_expression ARROW IDENTIFIER                           { $$ = create_node("postfix_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | postfix_expression PLUS_FIX                                   { $$ = create_node("postfix_expression"); add_child($$, $1); add_child($$, $2); }
    | postfix_expression SUB_FIX                                    { $$ = create_node("postfix_expression"); add_child($$, $1); add_child($$, $2); }
    | LP type_name RP LCP initializer_list RCP                      { $$ = create_node("postfix_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); add_child($$, $6); }
    | LP type_name RP LCP initializer_list COMMA RCP                { $$ = create_node("postfix_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); add_child($$, $6); add_child($$, $7); }
    ;

argument_expression_list:
      assignment_expression                                         { $$ = create_node("argument_expression_list"); add_child($$, $1); }
    | argument_expression_list COMMA assignment_expression          { $$ = create_node("argument_expression_list"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

argument_expression_list_opt:
      argument_expression_list                                      { $$ = create_node("argument_expression_list_opt"); add_child($$, $1); }
    |                                                               { $$ = create_node("argument_expression_list_opt"); add_child($$, create_node("(empty transition)"))}
    ;

unary_expression:
      postfix_expression                                            { $$ = create_node("unary_expression"); add_child($$, $1); }
    | PLUS_FIX unary_expression                                     { $$ = create_node("unary_expression"); add_child($$, $1); add_child($$, $2); }
    | SUB_FIX unary_expression                                      { $$ = create_node("unary_expression"); add_child($$, $1); add_child($$, $2); }
    | unary_operator cast_expression                                { $$ = create_node("unary_expression"); add_child($$, $1); add_child($$, $2); }
    | SIZEOF unary_expression                                       { $$ = create_node("unary_expression"); add_child($$, $1); add_child($$, $2); }
    | SIZEOF LP type_name RP                                        { $$ = create_node("unary_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); }
    ;

unary_operator:
      BITWISE_AND                                                   { $$ = $1; }
    | STAR                                                          { $$ = $1; }
    | PLUS                                                          { $$ = $1; }
    | SUB                                                           { $$ = $1; }
    | BITWISE_NOT                                                   { $$ = $1; }
    | LOGICAL_NOT                                                   { $$ = $1; }
    ;

cast_expression:
      unary_expression                                              { $$ = create_node("cast_expression"); add_child($$, $1); }
    | LP type_name RP cast_expression                               { $$ = create_node("cast_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); }
    ;

multiplicative_expression:
      cast_expression                                               { $$ = create_node("multiplicative_expression"); add_child($$, $1); }
    | multiplicative_expression STAR cast_expression                { $$ = create_node("multiplicative_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | multiplicative_expression DIV cast_expression                 { $$ = create_node("multiplicative_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | multiplicative_expression MOD cast_expression                 { $$ = create_node("multiplicative_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

additive_expression:
      multiplicative_expression                                     { $$ = create_node("additive_expression"); add_child($$, $1); }
    | additive_expression PLUS multiplicative_expression            { $$ = create_node("additive_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | additive_expression SUB multiplicative_expression             { $$ = create_node("additive_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

shift_expression:
      additive_expression                                           { $$ = create_node("shift_expression"); add_child($$, $1); }
    | shift_expression LOGICAL_LEFT_SHIFT additive_expression       { $$ = create_node("shift_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | shift_expression LOGICAL_RIGHT_SHIFT additive_expression      { $$ = create_node("shift_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

relational_expression:
      shift_expression                                              { $$ = create_node("relational_expression"); add_child($$, $1); }
    | relational_expression REL_LT shift_expression                 { $$ = create_node("relational_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | relational_expression REL_GT shift_expression                 { $$ = create_node("relational_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | relational_expression REL_LTE shift_expression                { $$ = create_node("relational_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | relational_expression REL_GTE shift_expression                { $$ = create_node("relational_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

equality_expression:
      relational_expression                                         { $$ = create_node("equality_expression"); add_child($$, $1); }
    | equality_expression REL_EQ relational_expression              { $$ = create_node("equality_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | equality_expression REL_NEQ relational_expression             { $$ = create_node("equality_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

AND_expression:
      equality_expression                                           { $$ = create_node("AND_expression"); add_child($$, $1); }
    | AND_expression BITWISE_AND equality_expression                { $$ = create_node("AND_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

exclusive_OR_expression:
      AND_expression                                                { $$ = create_node("exclusive_OR_expression"); add_child($$, $1); }
    | exclusive_OR_expression BITWISE_XOR AND_expression            { $$ = create_node("exclusive_OR_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

inclusive_OR_expression:
      exclusive_OR_expression                                       { $$ = create_node("inclusive_OR_expression"); add_child($$, $1); }
    | inclusive_OR_expression BITWISE_OR exclusive_OR_expression    { $$ = create_node("inclusive_OR_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;
logical_AND_expression:
      inclusive_OR_expression                                       { $$ = create_node("logical_AND_expression"); add_child($$, $1); }
    | logical_AND_expression LOGICAL_AND inclusive_OR_expression    { $$ = create_node("logical_AND_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

logical_OR_expression:
      logical_AND_expression                                        { $$ = create_node("logical_OR_expression"); add_child($$, $1); }
    | logical_OR_expression LOGICAL_OR logical_AND_expression       { $$ = create_node("logical_OR_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

conditional_expression:
      logical_OR_expression                                                             { $$ = create_node("conditional_expression"); add_child($$, $1); }
    | logical_OR_expression TERNARY_QM expression TERNARY_SEP conditional_expression    { $$ = create_node("conditional_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); }
    ;

assignment_expression:
      conditional_expression                                                            { $$ = create_node("assignment_expression"); add_child($$, $1); }
    | unary_expression assignment_operator assignment_expression                        { $$ = create_node("assignment_expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

assignment_expression_opt:
      assignment_expression                                                             { $$ = create_node("assignment_expression_opt"); add_child($$, $1); }
    |                                                                                   { $$ = create_node("assignment_expression_opt"); add_child($$, create_node("(empty transition)"))}
    ;

assignment_operator:
    ASS_EQ                                                          { $$ = create_node("assignment_operator");$$ = $1; }
    | MUL_EQ                                                        { $$ = create_node("assignment_operator");$$ = $1; }
    | DIV_EQ                                                        { $$ = create_node("assignment_operator");$$ = $1; }
    | MOD_EQ                                                        { $$ = create_node("assignment_operator");$$ = $1; }
    | PLUS_EQ                                                       { $$ = create_node("assignment_operator");$$ = $1; }
    | SUB_EQ                                                        { $$ = create_node("assignment_operator");$$ = $1; }
    | AND_EQ                                                        { $$ = create_node("assignment_operator");$$ = $1; }
    | XOR_EQ                                                        { $$ = create_node("assignment_operator");$$ = $1; }
    | OR_EQ                                                         { $$ = create_node("assignment_operator");$$ = $1; }
    | SLL_EQ                                                        { $$ = create_node("assignment_operator");$$ = $1; }
    | SLR_EQ                                                        { $$ = create_node("assignment_operator");$$ = $1; }
    ;

expression:
    assignment_expression                                           { $$ = create_node("expression"); add_child($$, $1); }
    | expression COMMA assignment_expression                        { $$ = create_node("expression"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

expression_opt:
      expression                                                    { $$ = create_node("expression_opt"); add_child($$, $1); }
    |                                                               { $$ = create_node("expression_opt"); add_child($$, create_node("(empty transition)"))}
    ;

constant_expression:
    conditional_expression                                          { $$ = create_node("constant_expression"); add_child($$, $1); }
    ;

/* Declarations */
declaration:
      declaration_specifiers init_declarator_list_opt SEMICOLON     { $$ = create_node("declaration"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

declaration_specifiers:
      type_specifier declaration_specifiers_opt                     { $$ = create_node("declaration_specifiers"); add_child($$, $1); add_child($$, $2); }
    | storage_class_specifier declaration_specifiers_opt            { $$ = create_node("declaration_specifiers"); add_child($$, $1); add_child($$, $2); }
    | type_qualifier declaration_specifiers_opt                     { $$ = create_node("declaration_specifiers"); add_child($$, $1); add_child($$, $2); }
    | fuction_specifier declaration_specifiers_opt                  { $$ = create_node("declaration_specifiers"); add_child($$, $1); add_child($$, $2); }
    ;

declaration_specifiers_opt:
      declaration_specifiers                                        { $$ = create_node("declaration_specifiers_opt"); add_child($$, $1); }
    |                                                               { $$ = create_node("declaration_specifiers_opt"); add_child($$, create_node("(empty transition)"))}
    ;

init_declarator_list:
     init_declarator                                                { $$ = create_node("init_declarator_list"); add_child($$, $1); }
    | init_declarator_list COMMA init_declarator                    { $$ = create_node("init_declarator_list"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

init_declarator_list_opt:
      init_declarator_list                                          { $$ = create_node("init_declarator_list_opt"); add_child($$, $1); }
    |                                                               { $$ = create_node("init_declarator_list_opt"); add_child($$, create_node("(empty transition)"))}
    ;

init_declarator:
     declarator                                                     { $$ = create_node("init_declarator"); add_child($$, $1); }
    | declarator ASS_EQ initializer                                 { $$ = create_node("init_declarator"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

storage_class_specifier:
     EXTERN                                                         { $$ = create_node("storage class specifier");$$ = $1; }
    | STATIC                                                        { $$ = create_node("storage class specifier");$$ = $1; }
    | AUTO                                                          { $$ = create_node("storage class specifier");$$ = $1; }
    | REGISTER                                                      { $$ = create_node("storage class specifier");$$ = $1; }
    ;

type_specifier:
      VOID                                                          { $$ = create_node("type specifier");$$ = $1; }
    | CHAR                                                          { $$ = create_node("type specifier");$$ = $1; }
    | SHORT                                                         { $$ = create_node("type specifier");$$ = $1; }
    | INT                                                           { $$ = create_node("type specifier");$$ = $1; }
    | LONG                                                          { $$ = create_node("type specifier");$$ = $1; }
    | FLOAT                                                         { $$ = create_node("type specifier");$$ = $1; }
    | DOUBLE                                                        { $$ = create_node("type specifier");$$ = $1; }
    | SIGNED                                                        { $$ = create_node("type specifier");$$ = $1; }
    | UNSIGNED                                                      { $$ = create_node("type specifier");$$ = $1; }
    | BOOL                                                          { $$ = create_node("type specifier");$$ = $1; }
    | COMPLEX                                                       { $$ = create_node("type specifier");$$ = $1; }
    | IMAGINARY                                                     { $$ = create_node("type specifier");$$ = $1; }
    ;

specifier_qualifier_list:
      type_specifier specifier_qualifier_list_opt                   { $$ = create_node("specifier_qualifier_list"); add_child($$, $1); add_child($$, $2); }
    | type_qualifier specifier_qualifier_list_opt                   { $$ = create_node("specifier_qualifier_list"); add_child($$, $1); add_child($$, $2); }
    ;

specifier_qualifier_list_opt:
      specifier_qualifier_list                                      { $$ = create_node("specifier_qualifier_list_opt"); add_child($$, $1); }
    |                                                               { $$ = create_node("specifier_qualifier_list_opt"); add_child($$, create_node("(empty transition)"))}
    ;

type_qualifier:
      CONST                                                         { $$ = create_node("type qualifier");$$ = $1; }
    | RESTRICT                                                      { $$ = create_node("type qualifier");$$ = $1; }
    | VOLATILE                                                      { $$ = create_node("type qualifier");$$ = $1; }
    ;

fuction_specifier:
      INLINE                                                        { $$ = create_node("function specifier"); $$ = $1; }
    ;

declarator:
      pointer_opt direct_declarator                                 { $$ = create_node("declarator"); add_child($$, $1); add_child($$, $2); }
    ;

direct_declarator:
      IDENTIFIER                                                                        { $$ = create_node("direct_declarator"); add_child($$, $1); }
    | LP declarator RP                                                                  { $$ = create_node("direct_declarator"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | direct_declarator LBP type_qualifier_list_opt assignment_expression_opt RP        { $$ = create_node("direct_declarator"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); }
    | direct_declarator LBP STATIC type_qualifier_list_opt assignment_expression RBP    { $$ = create_node("direct_declarator"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); }
    | direct_declarator LBP type_qualifier_list STATIC assignment_expression RBP        { $$ = create_node("direct_declarator"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); }
    | direct_declarator LBP type_qualifier_list_opt STAR RBP                            { $$ = create_node("direct_declarator"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); }
    | direct_declarator LP parameter_type_list RP                                       { $$ = create_node("direct_declarator"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); }
    | direct_declarator LP identifier_list_opt RP                                       { $$ = create_node("direct_declarator"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); }
    ;

pointer:
      STAR type_qualifier_list_opt                                                      { $$ = create_node("pointer"); add_child($$, $1); add_child($$, $2); }
    | STAR type_qualifier_list_opt pointer                                              { $$ = create_node("pointer"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

pointer_opt:
      pointer                                                       { $$ = create_node("pointer_opt"); add_child($$, $1); }
    |                                                               { $$ = create_node("pointer_opt"); add_child($$, create_node("(empty transition)"))}
    ;

type_qualifier_list:
      type_qualifier                                                { $$ = create_node("type_qualifier_list"); add_child($$, $1); }
    | type_qualifier_list type_qualifier                            { $$ = create_node("type_qualifier_list"); add_child($$, $1); add_child($$, $2); }
    ;

type_qualifier_list_opt:
      type_qualifier_list                                           { $$ = create_node("type_qualifier_list_opt"); add_child($$, $1); }
    |                                                               { $$ = create_node("type_qualifier_list_opt"); add_child($$, create_node("(empty transition)"))}
    ;

parameter_type_list:
      parameter_list                                                { $$ = create_node("parameter_type_list"); add_child($$, $1); }
    | parameter_list COMMA SPREAD_OP                                { $$ = create_node("parameter_type_list"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

parameter_list:
      parameter_declaration                                         { $$ = create_node("parameter_list"); add_child($$, $1); }
    | parameter_list COMMA parameter_declaration                    { $$ = create_node("parameter_list"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

parameter_declaration:
      declaration_specifiers declarator                             { $$ = create_node("parameter_declaration"); add_child($$, $1); add_child($$, $2); }
    | declaration_specifiers                                        { $$ = create_node("parameter_declaration"); add_child($$, $1); }
    ;

identifier_list:
      IDENTIFIER                                                    { $$ = create_node("identifier_list"); add_child($$, $1); }
    | identifier_list COMMA IDENTIFIER                              { $$ = create_node("identifier_list"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

identifier_list_opt:
      identifier_list                                               { $$ = create_node("identifier_list_opt"); add_child($$, $1); }
    |                                                               { $$ = create_node("identifier_list_opt"); add_child($$, create_node("(empty transition)"))}
    ;

type_name:
      specifier_qualifier_list                                      { $$ = create_node("type_name"); add_child($$, $1); }
    ;

initializer:
      assignment_expression                                         { $$ = create_node("initializer"); add_child($$, $1); }
    | LCP initializer_list RCP                                      { $$ = create_node("initializer"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | LCP initializer_list COMMA RCP                                { $$ = create_node("initializer"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); }
    ;

initializer_list:
      designation_opt initializer                                   { $$ = create_node("initializer_list"); add_child($$, $1); add_child($$, $2); }
    | initializer_list COMMA designation_opt initializer            { $$ = create_node("initializer_list"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); }
    ;

designation:
      designator_list ASS_EQ                                        { $$ = create_node("designation"); add_child($$, $1); add_child($$, $2); }
    ;

designation_opt:
      designation                                                   { $$ = create_node("designation_opt"); add_child($$, $1); }
    |                                                               { $$ = create_node("designation_opt"); add_child($$, create_node("(empty transition)"))}
    ;

designator_list:
      designator                                                        { $$ = create_node("designator_list"); add_child($$, $1); }
    | designator_list designator                                        { $$ = create_node("designator_list"); add_child($$, $1); add_child($$, $2); }
    ;

designator:
      LBP constant_expression RCP                                       { $$ = create_node("designator"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | DOT IDENTIFIER                                                    { $$ = create_node("designator"); add_child($$, $1); add_child($$, $2); }
    ;

/* Statements */
statement:
      labeled_statement                                                 { $$ = create_node("statement"); add_child($$, $1); }
    | compound_statement                                                { $$ = create_node("statement"); add_child($$, $1); }
    | expression_statement                                              { $$ = create_node("statement"); add_child($$, $1); }
    | selection_statement                                               { $$ = create_node("statement"); add_child($$, $1); }
    | iteration_statement                                               { $$ = create_node("statement"); add_child($$, $1); }
    | jump_statement                                                    { $$ = create_node("statement"); add_child($$, $1); }
    ;

labeled_statement:
      IDENTIFIER TERNARY_SEP statement                                  { $$ = create_node("labeled_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | CASE constant_expression TERNARY_SEP statement                    { $$ = create_node("labeled_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); }
    | DEFAULT TERNARY_SEP statement                                     { $$ = create_node("labeled_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

compound_statement:
      LCP block_item_list_opt RCP                                       { $$ = create_node("compound_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

block_item_list:
      block_item                                                        { $$ = create_node("block_item_list"); add_child($$, $1); }
    | block_item_list block_item                                        { $$ = create_node("block_item_list"); add_child($$, $1); add_child($$, $2); }
    ;

block_item_list_opt:
      block_item_list                                                   { $$ = create_node("block_item_list_opt"); add_child($$, $1); }
    |                                                                   { $$ = create_node("block_item_list_opt"); add_child($$, create_node("(empty transition)"))}
    ;

block_item:
      declaration                                                       { $$ = create_node("block_item"); add_child($$, $1); }
    | statement                                                         { $$ = create_node("block_item"); add_child($$, $1); }
    ;

expression_statement:
      expression_opt SEMICOLON                                          { $$ = create_node("expression_statement"); add_child($$, $1); add_child($$, $2); }
    ;

selection_statement:
      IF LP expression RP statement                                     { $$ = create_node("selection_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); }
    | IF LP expression RP statement ELSE statement                      { $$ = create_node("selection_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); add_child($$, $6); add_child($$, $7); }
    | SWITCH LP expression RP statement                                 { $$ = create_node("selection_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); }
    ;

iteration_statement:
      WHILE LP expression RP statement                                                          { $$ = create_node("iteration_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); }
    | DO statement WHILE LP expression RP SEMICOLON                                             { $$ = create_node("iteration_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); add_child($$, $6); }
    | FOR LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP statement      { $$ = create_node("iteration_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); add_child($$, $6); add_child($$, $7); }
    | FOR LP declaration expression_opt SEMICOLON expression_opt RP statement                   { $$ = create_node("iteration_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); add_child($$, $5); add_child($$, $6); add_child($$, $7); }
    ;

jump_statement:
      GOTO IDENTIFIER SEMICOLON                                         { $$ = create_node("jump_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    | CONTINUE SEMICOLON                                                { $$ = create_node("jump_statement"); add_child($$, $1); add_child($$, $2); }
    | BREAK SEMICOLON                                                   { $$ = create_node("jump_statement"); add_child($$, $1); add_child($$, $2); }
    | RETURN expression_opt SEMICOLON                                   { $$ = create_node("jump_statement"); add_child($$, $1); add_child($$, $2); add_child($$, $3); }
    ;

// External Definitions

translation_unit:
      external_declaration                                              { $$ = create_node("translation_unit"); add_child($$, $1); }
    | translation_unit external_declaration                             { $$ = create_node("translation_unit"); add_child($$, $1); add_child($$, $2); }
    ;

external_declaration:
      function_definition                                               { $$ = create_node("external_declaration"); add_child($$, $1); }
    | declaration                                                       { $$ = create_node("external_declaration"); add_child($$, $1); }
    ;

function_definition:
      declaration_specifiers declarator declaration_list_opt compound_statement         { $$ = create_node("function_definition"); add_child($$, $1); add_child($$, $2); add_child($$, $3); add_child($$, $4); }
    ;

declaration_list:
      declaration                                                       { $$ = create_node("declaration_list"); add_child($$, $1); }
    | declaration_list declaration                                      { $$ = create_node("declaration_list"); add_child($$, $1); add_child($$, $2); }
    ;

declaration_list_opt:
      declaration_list                                                  { $$ = create_node("declaration_list_opt"); add_child($$, $1); }
    |                                                                   { $$ = create_node("declaration_list_opt"); add_child($$, create_node("(empty transition)"))}
    ;

%%


void yyerror(char * s){
    printf("Error: %s\n",s);
    exit(0);
}
int main()
{
    yyparse();
    return 0;
}
