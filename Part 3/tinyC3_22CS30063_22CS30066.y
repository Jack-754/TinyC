/*
  Yacc file
  Group-
  More Aayush Babasaheb 22CS30063
  Devanshu Agrawal 22CS30066
*/  

%{
    #include "tinyC3_22CS30063_22CS30066_translator.h"
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    void yyerror(char *);
    int yylex();

    extern symbol* current_symbol;
    extern symbol_table* current_symbol_table;
    extern symbol_table* global_symbol_table;
    extern quad_array quad_table;
    extern int symbol_table_cnt;
    extern string block_name;
    extern string data_type;
%}

%union {
    int iValue;     
    char *sValue;   
    symbol *symb;       
    symbol_type *symbType;   
    EXPR *expr;   
    S *statem;  
    A *arr; 
    int instr_ind;  
    char unary_op;  
    int param_count;   
}


// KEYWORD Tokens
%token AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT VOLATILE CHAR FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF STATIC COMPLEX DEFAULT INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE LONG TYPEDEF ELSE REGISTER UNION
%token LP RP LCP RCP LBP RBP SEMICOLON COMMA DOT TERNARY_QM TERNARY_SEP HASH ARROW SPREAD_OP // Punctuators
%token LOGICAL_AND LOGICAL_OR LOGICAL_NOT // Logical Operators
%token PLUS_FIX SUB_FIX LOGICAL_RIGHT_SHIFT LOGICAL_LEFT_SHIFT PLUS SUB STAR DIV MOD // Arithmetic Operators
%token BITWISE_AND BITWISE_OR BITWISE_XOR BITWISE_NOT // Bitwise operators
%token ASS_EQ MUL_EQ DIV_EQ MOD_EQ PLUS_EQ SUB_EQ SLR_EQ SLL_EQ AND_EQ XOR_EQ OR_EQ // Assignment operators
%token REL_GT REL_LT REL_LTE REL_GTE REL_EQ REL_NEQ // Relational Operators

%token <symb> IDENTIFIER    // Identifier, taken as symbol
%token <iValue> CONSTANT_INT    // Integer constant
%token <sValue> CONSTANT_FLOAT  // Floating point constant
%token <sValue> CONSTANT_CHAR   // Character constant
%token <sValue> STRING_LITERAL // String literal


/* Types for all non-terminals */
%type <unary_op> unary_operator 
%type <param_count> argument_expression_list argument_expression_list_opt   
%type <expr> expression primary_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression expression_statement   // Expression type non-terminals
%type <statem> statement labeled_statement compound_statement selection_statement iteration_statement jump_statement loop_statement block_item block_item_list block_item_list_opt  
%type <symbType> pointer   
%type <symb> constant initializer direct_declarator init_declarator declarator  
%type <arr> postfix_expression unary_expression cast_expression 
%type <instr_ind> M 
%type <statem> N    

/* %start translation_unit */

%nonassoc RP
%nonassoc ELSE

%start Start

%%

Start: translation_unit
    | {printf("THE FILE IS EMPTY.\n");}
    ;


/* Expressions */
primary_expression  : IDENTIFIER    {
                        $$ = new EXPR();                // New expression
                        $$->addr = $1;                  // Store pointer in Symbol Table
                        $$->exprType = "not_bool";      // Non bool expression
                    }
                    | constant      {
                        $$ = new EXPR();                // New expression
                        $$->addr = $1;                  // Store pointer in Symbol Table
                    }
                    | STRING_LITERAL       {
                        $$ = new EXPR();                // New expression
                        $$->addr = symbol_table::gentemp(new symbol_type("ptr"), $1);   // Create new temp with type ptr and store value
                        $$->addr->type->sub_type = new symbol_type("char");
                    }
                    | LP expression RP { $$ = $2; }     // Assignment
                    ;

constant            : CONSTANT_INT  {
                        $$ = symbol_table::gentemp(new symbol_type("int"), convInt2Str($1)); // temp stores constant
                        quad_table.emit("=", $$->name, $1);
                    }
                    | CONSTANT_FLOAT{
                        $$ = symbol_table::gentemp(new symbol_type("float"), string($1));  // temp stores constant
                        quad_table.emit("=", $$->name, string($1));
                    }
                    | CONSTANT_CHAR {
                        $$ = symbol_table::gentemp(new symbol_type("char"), string($1));   // temp stores constant
                        quad_table.emit("=", $$->name, string($1));
                    }
                    ;

  

postfix_expression:
      primary_expression  {
            // convert it to A type
            $$ = new A();   
            $$->location = $1->addr;   
            $$->type = $1->addr->type;  
            $$->addr = $$->location;   
        }
    | postfix_expression LBP expression RBP  { 
            // convert to a type
      $$ = new A();   
      $$->type = $1->type->sub_type;  
      $$->location = $1->location;  
      $$->addr = symbol_table::gentemp(new symbol_type("int")); 
      $$->sub_type = "arr"; 
      if ($1->sub_type == "arr") { 
          symbol* temp = symbol_table::gentemp(new symbol_type("int"));
          int sz = type_size($$->type);  
          // calculation  for location
          quad_table.emit("*", temp->name, $3->addr->name, convInt2Str(sz));
          quad_table.emit("+", $$->addr->name, $1->addr->name, temp->name);
        }
      else {
          // calculation for location
          int sz = type_size($$->type);  
          quad_table.emit("*", $$->addr->name, $3->addr->name, convInt2Str(sz)); 
      }
    }
    | postfix_expression LP argument_expression_list_opt RP  { 
        // function call
      $$ = new A();  
      $$->location = symbol_table::gentemp($1->type); 
      quad_table.emit("call", $$->location->name, $1->location->name, convInt2Str($3)); 
    }
    | postfix_expression DOT IDENTIFIER                             { /*Given: Not needed */ }
    | postfix_expression ARROW IDENTIFIER                           { /*Given: Not needed */ }
    | postfix_expression PLUS_FIX { 
        // increment
          $$ = new A();   
          $$->location = symbol_table::gentemp($1->location->type);    
          quad_table.emit("=", $$->location->name, $1->location->name);    
          quad_table.emit("+", $1->location->name, $1->location->name, "1");   
    }
    | postfix_expression SUB_FIX { 
        // decrement
          $$ = new A();   
          $$->location = symbol_table::gentemp($1->location->type);    
          quad_table.emit("=", $$->location->name, $1->location->name);    
          quad_table.emit("-", $1->location->name, $1->location->name, "1");  
      }
    | LP type_name RP LCP initializer_list RCP                      { /*Given: Not needed */ }
    | LP type_name RP LCP initializer_list COMMA RCP                { /*Given: Not needed */ }
    ;

argument_expression_list:
      assignment_expression { 
            // call the parameter
            $$ = 1;
            quad_table.emit("param", $1->addr->name);  
        }
    | argument_expression_list COMMA assignment_expression { 
            // call the parameter and increase parameter count
        $$ = $1 + 1;
        quad_table.emit("param", $3->addr->name);
    }
    ;

argument_expression_list_opt:
      argument_expression_list                                      { $$ = $1;}
    |                                                               { $$ = 0;}
    ;

unary_expression:
      postfix_expression                                            { $$ = $1;}
    | PLUS_FIX unary_expression                                     { 
        // increament
          quad_table.emit("+", $2->location->name, $2->location->name, "1");   
          $$ = $2;    
    }
    | SUB_FIX unary_expression                                      { 
        // decreament
          quad_table.emit("-", $2->location->name, $2->location->name, "1");   
          $$ = $2;    
    }
    | unary_operator cast_expression                                { 
        // reference, pointer referenceing, unary operator like +,-,and bitwise opearators like !,~
          $$ = new A();
           if ($1 == '&') {
               $$->location = symbol_table::gentemp(new symbol_type("ptr")); 
               $$->location->type->sub_type = $2->location->type;
               quad_table.emit("= &", $$->location->name, $2->location->name); 
           }
           else if ($1 == '*') {
               $$->sub_type = "ptr"; // Pointer type
               $$->addr = symbol_table::gentemp($2->location->type->sub_type); 
               $$->location = $2->location;  
               quad_table.emit("= *", $$->addr->name, $2->location->name); 
           }
           else if ($1 == '+') $$ = $2;
           else if ($1 == '-') {
               $$->location = symbol_table::gentemp(new symbol_type($2->location->type->base)); 
               quad_table.emit("= -", $$->location->name, $2->location->name);
           }
           else if ($1 == '~')  {
               $$->location = symbol_table::gentemp(new symbol_type($2->location->type->base)); 
               quad_table.emit("= ~", $$->location->name, $2->location->name);
           }
           else if ($1 == '!') {
               $$->location = symbol_table::gentemp(new symbol_type($2->location->type->base)); 
               quad_table.emit("= !", $$->location->name, $2->location->name);
          }
    }
    | SIZEOF unary_expression                                       { /*Given: Not needed */ }
    | SIZEOF LP type_name RP                                        { /*Given: Not needed */ }
    ;

unary_operator:
      BITWISE_AND                                                   { $$ = '&';}
    | STAR                                                          { $$ = '*';}
    | PLUS                                                          { $$ = '+';}
    | SUB                                                           { $$ = '-';}
    | BITWISE_NOT                                                   { $$ = '~';}
    | LOGICAL_NOT                                                   { $$ = '!';}
    ;

cast_expression:
      unary_expression { $$ = $1; }
    | LP type_name RP cast_expression { 
        // convert the type
        $$ = new A();
        $$->location = convType($4->location, data_type);
    }
    ;

multiplicative_expression: // print a multiplication/div/modulus expression
      cast_expression {
        // convert back to expression
        $$ = new EXPR(); 
        if ($1->sub_type == "arr") {
            $$->addr = symbol_table::gentemp($1->addr->type); 
            quad_table.emit("=[]", $$->addr->name, $1->location->name, $1->addr->name); 
        }
        else if($1->sub_type == "ptr") {
            $$->addr = $1->addr; 
        }
        else $$->addr = $1->location; 
       }
    | multiplicative_expression STAR cast_expression {
          if (typecheck($1->addr, $3->location)) {
              $$ = new EXPR();
              $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base));
              quad_table.emit("*", $$->addr->name, $1->addr->name, $3->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }      
     }
    | multiplicative_expression DIV cast_expression { 
          if (typecheck($1->addr, $3->location)) {
              $$ = new EXPR();
              $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base));
              quad_table.emit("/", $$->addr->name, $1->addr->name, $3->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
    | multiplicative_expression MOD cast_expression { 
          if (typecheck($1->addr, $3->location)) {
              $$ = new EXPR();
              $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base)); 
              quad_table.emit("%", $$->addr->name, $1->addr->name, $3->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
    ;

additive_expression: // print a additive/subtractive expression
      multiplicative_expression                                     { $$ = $1;}
    | additive_expression PLUS multiplicative_expression            { 
        if (typecheck($1->addr, $3->addr)) {
            $$ = new EXPR();
            $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base)); 
            quad_table.emit("+", $$->addr->name, $1->addr->name, $3->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    | additive_expression SUB multiplicative_expression  { 
        if (typecheck($1->addr, $3->addr)) {
            $$ = new EXPR();
            $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base)); 
            quad_table.emit("-", $$->addr->name, $1->addr->name, $3->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    ;

shift_expression: // emit a shift expression
      additive_expression                                           { $$ = $1; }
    | shift_expression LOGICAL_LEFT_SHIFT additive_expression  { 
      if (typecheck($1->addr, $3->addr)) {
            $$ = new EXPR();
            $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base)); 
            quad_table.emit("<<", $$->addr->name, $1->addr->name, $3->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    | shift_expression LOGICAL_RIGHT_SHIFT additive_expression  { 
      if (typecheck($1->addr, $3->addr)) {
            $$ = new EXPR();
            $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base)); 
            quad_table.emit(">>", $$->addr->name, $1->addr->name, $3->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    ;

relational_expression:
      shift_expression   { $$ = $1;}
    | relational_expression REL_LT shift_expression  { 
        if (typecheck($1->addr, $3->addr)) {
            // convert to bool
            $$ = new EXPR();
            $$->exprType = "bool";   
            $$->true_list = makelist(next_instruction()); // make truelist
            $$->false_list = makelist(next_instruction()+1); // make falselist
            quad_table.emit("<", "", $1->addr->name, $3->addr->name); // emit goto for true case
            quad_table.emit("goto", ""); // emit goto for false case
        }
        else {
            yyerror("Type mismatch");
        }
    }
    | relational_expression REL_GT shift_expression  { 
      if (typecheck($1->addr, $3->addr)) {
            $$ = new EXPR();
            $$->exprType = "bool";   
            $$->true_list = makelist(next_instruction()); // make truelist
            $$->false_list = makelist(next_instruction()+1); // make falselist
            quad_table.emit(">", "", $1->addr->name, $3->addr->name); // emit goto for true case
            quad_table.emit("goto", ""); // emit goto for false case
        }
        else {
            yyerror("Type mismatch");
        }
    }
    | relational_expression REL_LTE shift_expression  { 
      if (typecheck($1->addr, $3->addr)) {
            $$ = new EXPR();
            $$->exprType = "bool";   
            $$->true_list = makelist(next_instruction()); // make truelist
            $$->false_list = makelist(next_instruction()+1); // make falselist
            quad_table.emit("<=", "", $1->addr->name, $3->addr->name); // emit goto for true case
            quad_table.emit("goto", ""); // emit goto for false case
        }
        else {
            yyerror("Type mismatch");
        }
    }
    | relational_expression REL_GTE shift_expression  { 
      if (typecheck($1->addr, $3->addr)) {
            $$ = new EXPR();
            $$->exprType = "bool";   
            $$->true_list = makelist(next_instruction()); // make truelist
            $$->false_list = makelist(next_instruction()+1); // make falselist
            quad_table.emit(">=", "", $1->addr->name, $3->addr->name); // emit goto for true case
            quad_table.emit("goto", ""); // emit goto for false case
        }
        else {
            yyerror("Type mismatch");
        }
    }
    ;

equality_expression:
      relational_expression  { $$ = $1; }
    | equality_expression REL_EQ relational_expression { 
        if (typecheck($1->addr, $3->addr)) {
              convBool2Int($1);
              convBool2Int($3);
              $$ = new EXPR();
              $$->exprType = "bool";   
              $$->true_list = makelist(next_instruction()); // make truelist
            $$->false_list = makelist(next_instruction()+1); // make falselist
            quad_table.emit("==", "", $1->addr->name, $3->addr->name); // emit goto for true case
            quad_table.emit("goto", ""); // emit goto for false case
          }
          else {
              yyerror("Type mismatch");
          }
    }
    | equality_expression REL_NEQ relational_expression { 
      if (typecheck($1->addr, $3->addr)) {
            convBool2Int($1);
            convBool2Int($3);
            $$ = new EXPR();
            $$->exprType = "bool";   
            $$->true_list = makelist(next_instruction()); // make truelist
            $$->false_list = makelist(next_instruction()+1); // make falselist
            quad_table.emit("!=", "", $1->addr->name, $3->addr->name); // emit goto for true case
            quad_table.emit("goto", ""); // emit goto for false case
        }
        else {
            yyerror("Type mismatch");
        }
    }
    ;

AND_expression: // bitwise and
      equality_expression { $$ = $1;}
    | AND_expression BITWISE_AND equality_expression  { 
            if (typecheck($1->addr, $3->addr)) {
                convBool2Int($1);
                convBool2Int($3);
                $$ = new EXPR();
                $$->exprType = "not_bool"; 
                $$->addr = symbol_table::gentemp(new symbol_type("int")); 
                quad_table.emit("&", $$->addr->name, $1->addr->name, $3->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
    ;

exclusive_OR_expression: // bitwise xor
      AND_expression  { $$ = $1; }
    | exclusive_OR_expression BITWISE_XOR AND_expression { 
      if (typecheck($1->addr, $3->addr)) {
                convBool2Int($1);
                convBool2Int($3);
                $$ = new EXPR();
                $$->exprType = "not_bool"; 
                $$->addr = symbol_table::gentemp(new symbol_type("int")); 
                quad_table.emit("^", $$->addr->name, $1->addr->name, $3->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
    ;

inclusive_OR_expression: // bitwise or
      exclusive_OR_expression  { $$ = $1;}
    | inclusive_OR_expression BITWISE_OR exclusive_OR_expression  { 
      if (typecheck($1->addr, $3->addr)) {
                convBool2Int($1);
                convBool2Int($3);
                $$ = new EXPR();
                $$->exprType = "not_bool"; 
                $$->addr = symbol_table::gentemp(new symbol_type("int")); 
                quad_table.emit("|", $$->addr->name, $1->addr->name, $3->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
    ;
logical_AND_expression: // logical and
      inclusive_OR_expression                                       { $$ = $1; }
    | logical_AND_expression LOGICAL_AND M inclusive_OR_expression    { 
            convInt2Bool($1);
            convInt2Bool($4);
            $$ = new EXPR();
            $$->exprType = "bool";   
            backpatch($1->true_list, $3); 
            $$->true_list = $4->true_list; 
            $$->false_list = merge($1->false_list, $4->false_list); // merge false lists
    }
    ;

logical_OR_expression:
      logical_AND_expression   { $$ = $1; }
    | logical_OR_expression LOGICAL_OR M logical_AND_expression { 
          convInt2Bool($1);
          convInt2Bool($4);
          $$ = new EXPR();
          $$->exprType = "bool";   
          backpatch($1->false_list, $3); 
          $$->false_list = $4->false_list; 
          $$->true_list = merge($1->true_list, $4->true_list);  // merge true lists
    }
    ;

conditional_expression:
      logical_OR_expression                                                             { $$ = $1; }
    | logical_OR_expression N TERNARY_QM M expression N TERNARY_SEP M conditional_expression {  
        
            $$->addr = symbol_table::gentemp($5->addr->type); 
            $$->addr->update($5->addr->type);
            quad_table.emit("=", $$->addr->name, $9->addr->name);
            instruction_list* templist1 = makelist(next_instruction());
            quad_table.emit("goto", "");   
            backpatch($6->next_list, next_instruction());   
            quad_table.emit("=", $$->addr->name, $5->addr->name); 
            instruction_list* templist2 = makelist(next_instruction());
            templist1 = merge(templist1, templist2);
            quad_table.emit("goto", "");   
            backpatch($2->next_list, next_instruction());   
            convInt2Bool($1);
            backpatch($1->true_list, $4); 
            backpatch($1->false_list, $8); 
            backpatch(templist1, next_instruction());
        }
    ;

assignment_expression:
      conditional_expression                                                            { $$ = $1;}
    | unary_expression assignment_operator assignment_expression                        { 
            if ($1->sub_type == "arr") { 
                $3->addr = convType($3->addr, $1->type->base);
                quad_table.emit("[]=", $1->location->name, $1->addr->name, $3->addr->name); 
            }
            else if ($1->sub_type == "ptr") quad_table.emit("*=", $1->location->name, $3->addr->name); 
            else {
                $3->addr = convType($3->addr, $1->location->type->base);
                quad_table.emit("=", $1->location->name, $3->addr->name); 
            }
            $$ = $3;
    }
    ;

assignment_operator:
    ASS_EQ                                                          { /*Given not required*/ }
    | MUL_EQ                                                        { /*Given not required*/ }
    | DIV_EQ                                                        { /*Given not required*/ }
    | MOD_EQ                                                        { /*Given not required*/ }
    | PLUS_EQ                                                       { /*Given not required*/ }
    | SUB_EQ                                                        { /*Given not required*/ }
    | AND_EQ                                                        { /*Given not required*/ }
    | XOR_EQ                                                        { /*Given not required*/ }
    | OR_EQ                                                         { /*Given not required*/ }
    | SLL_EQ                                                        { /*Given not required*/ }
    | SLR_EQ                                                        { /*Given not required*/ }
    ;

expression:
    assignment_expression                                           { $$ = $1; }
    | expression COMMA assignment_expression                        { /*Given not required*/ }
    ;


constant_expression:
    conditional_expression                                          { /*Given not required*/ }
    ;

/* Declarations */

declaration:
      declaration_specifiers init_declarator_list SEMICOLON     { /*Will not required*/ }
    ;

declaration_specifiers:
      type_specifier declaration_specifiers                        
    | type_specifier
    | storage_class_specifier declaration_specifiers                
    | type_qualifier declaration_specifiers                   
    | fuction_specifier declaration_specifiers                  
    | storage_class_specifier
    | type_qualifier
    | fuction_specifier
    ;


init_declarator_list:
     init_declarator                                                { /*Will not required*/ }
    | init_declarator_list COMMA init_declarator                    { /*Will not required*/ }
    ;

init_declarator:
     declarator                                                     { $$ = $1; }
    | declarator ASS_EQ initializer                                 { 
          if ($3->initial_value != "") $1->initial_value = $3->initial_value;
          quad_table.emit("=", $1->name, $3->name);
    }
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
      pointer direct_declarator                                 { 
              symbol_type* t = $1;
              while(t->sub_type != NULL) t = t->sub_type; 
              t->sub_type = $2->type;  
              $$ = $2->update($1);       
          }
      | direct_declarator { $$ = $1; }
    ;

direct_declarator:
      IDENTIFIER                                                                        { 
                $$ = $1->update(new symbol_type(data_type));   
                current_symbol = $1; 
      }
    | LP declarator RP                                                                  {  $$ = $2; }
    | direct_declarator LBP type_qualifier_list assignment_expression RBP               { }
    | direct_declarator LBP type_qualifier_list RBP                                     { }
    | direct_declarator LBP assignment_expression RBP {
        symbol_type* t = $1->type;
        symbol_type* prev = NULL;
        while(t->base == "arr") {
            prev = t;
            t = t->sub_type;
        }
        if (prev == NULL) {
            int temp = atoi($3->addr->initial_value.c_str());   
            symbol_type* tp = new symbol_type("arr", $1->type, temp);  
            $$ = $1->update(tp);    
        }
        else {
            int temp = atoi($3->addr->initial_value.c_str());   
            prev->sub_type = new symbol_type("arr", t, temp); 
            $$ = $1->update($1->type);  
        }
     }
    | direct_declarator LBP RBP {
        symbol_type* t = $1->type;
        symbol_type* prev = NULL;
        while(t->base == "arr") {
            prev = t;
            t = t->sub_type;
        }
        if (prev == NULL) {
            symbol_type* tp = new symbol_type("arr", $1->type, 0);  
            $$ = $1->update(tp); 
        }
        else {
            prev->sub_type = new symbol_type("arr", t, 0);
            $$ = $1->update($1->type);  
        }
    }
    | direct_declarator LBP STATIC type_qualifier_list assignment_expression RBP    { /* Will not required*/ }
    | direct_declarator LBP STATIC assignment_expression RBP                        { /* Will not required*/ }
    | direct_declarator LBP type_qualifier_list STATIC assignment_expression RBP        { /* Will not required*/ }
    | direct_declarator LBP type_qualifier_list STAR RBP                            { /* Will not required*/ }
    | direct_declarator LBP STAR RBP                            { /* Will not required*/ }
    | direct_declarator LP change_table parameter_type_list RP                                       { 
        current_symbol_table->name = $1->name; 
        if ($1->type->base != "void") {
            symbol* s = current_symbol_table->lookup("return");  
            s->update($1->type);    
        }
        $1->nested_table = current_symbol_table;   
        current_symbol_table->parent = global_symbol_table;   
        switchTable(global_symbol_table);  
        current_symbol = $$; 
    }
    | direct_declarator LP identifier_list RP                                       { }
    | direct_declarator LP change_table RP {
        current_symbol_table->name = $1->name; 
        if ($1->type->base != "void") {
            symbol* s = current_symbol_table->lookup("return");  
            s->update($1->type);    
        }
        $1->nested_table = current_symbol_table;    
        current_symbol_table->parent = global_symbol_table;   
        switchTable(global_symbol_table);  
        current_symbol = $$;
    }
    ;


pointer:
      STAR type_qualifier_list_opt                                                      { $$ =  new symbol_type("ptr"); }
    | STAR type_qualifier_list_opt pointer                                              { $$ = new symbol_type("ptr", $3); }
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
      parameter_list                                                { /* Will not required*/ }
    | parameter_list COMMA SPREAD_OP                                { /* Will not required*/ }
    ;

parameter_list:
      parameter_declaration                                         { /* Will not required*/ }
    | parameter_list COMMA parameter_declaration                    { /* Will not required*/ }
    ;

parameter_declaration:
      declaration_specifiers declarator                             { /* Will not required*/ }
    | declaration_specifiers                                        { /* Will not required*/ }
    ;

identifier_list:
      IDENTIFIER                                                    { /* Will not required*/ }
    | identifier_list COMMA IDENTIFIER                              { /* Will not required*/ }
    ;

type_name:
      specifier_qualifier_list                                      { /* Will not required*/ }
    ;

initializer:
      assignment_expression                                         { $$ = $1->addr; }
    | LCP initializer_list RCP                                      { /* Will not required*/ }
    | LCP initializer_list COMMA RCP                                { /* Will not required*/ }
    ;

initializer_list:
      designation_opt initializer                                   { /* Will not required*/ }
    | initializer_list COMMA designation_opt initializer            { /* Will not required*/ }
    ;

designation:
      designator_list ASS_EQ                                        { /* Will not required*/ }
    ;

designation_opt:
      designation                                                   { /* Will not required*/ }
    |                                                               { /* Will not required*/ }
    ;

designator_list:
      designator                                                        { /* Will not required*/ }
    | designator_list designator                                        { /* Will not required*/ }
    ;

designator:
      LBP constant_expression RBP                                       { /* Will not required*/ }
    | DOT IDENTIFIER                                                    { /* Will not required*/ }
    ;

/* Statements */
statement   : labeled_statement {}
            | compound_statement { $$ = $1; }
            | expression_statement {
                $$ = new S();
                $$->next_list = $1->next_list;
            }
            | selection_statement { $$ = $1; }
            | iteration_statement { $$ = $1; }
            | jump_statement { $$ = $1; }
            ;

// Added new non-terminal for loops
loop_statement: labeled_statement {}
            | expression_statement {
                $$ = new S();
                $$->next_list = $1->next_list;
            }
            | selection_statement { $$ = $1; }
            | iteration_statement { $$ = $1; }
            | jump_statement { $$ = $1; }
            ;
labeled_statement:
      IDENTIFIER TERNARY_SEP statement                                  { }
    | CASE constant_expression TERNARY_SEP statement                    { }
    | DEFAULT TERNARY_SEP statement                                     { }
    ;

compound_statement:
      LCP X change_table block_item_list_opt RCP                                       { 
        $$ = $4;
        switchTable(current_symbol_table->parent);
      }
    ;

block_item_list:
      block_item { $$ = $1; }
    | block_item_list M block_item { 
          $$ = $3;
          backpatch($1->next_list, $2);    
    }
    ;

block_item_list_opt:
      block_item_list                                                   { $$ = $1; }
    |                                                                   { $$ = new S(); }
    ;

block_item:
      declaration                                                       { $$ = new S(); }
    | statement                                                         { $$ = $1; }
    ;

expression_statement    : expression SEMICOLON { $$ = $1; }
                        | SEMICOLON { $$ = new EXPR(); }
                        ;

selection_statement:
      IF I LP expression RP M statement N { 
        convInt2Bool($4);
        $$ = new S();
        backpatch($4->true_list, $6); 
        instruction_list* temp = merge($4->false_list, $7->next_list);
        $$->next_list = merge($8->next_list, temp); 
      }
    | IF I LP expression RP M statement N ELSE E M statement { 
        convInt2Bool($4);
        $$ = new S();
        backpatch($4->true_list, $6); 
        backpatch($4->false_list, $11); 
        instruction_list* temp = merge($7->next_list, $8->next_list); 
        $$->next_list = merge($12->next_list, temp); 
    }
    | SWITCH LP expression RP statement                                 { /*Not Required*/}
    ;

iteration_statement : WHILE W LP X change_table M expression RP M loop_statement { 
                        $$ = new S(); 
                        convInt2Bool($7);
                        backpatch($10->next_list, $6);   
                        backpatch($7->true_list, $9);    
                        $$->next_list = $7->false_list; 
                        quad_table.emit("goto", convInt2Str($6)); 
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
                    | WHILE W LP X change_table M expression RP LCP M block_item_list_opt RCP { 
                        $$ = new S(); // new statement
                        convInt2Bool($7);
                        backpatch($11->next_list, $6);   
                        backpatch($7->true_list, $10);   
                        $$->next_list = $7->false_list;  
                        quad_table.emit("goto", convInt2Str($6)); 
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
                    | DO D M loop_statement M WHILE LP expression RP SEMICOLON {   
                        $$ = new S();
                        convInt2Bool($8);
                        backpatch($8->true_list, $3);   
                        backpatch($4->next_list, $5);   
                        $$->next_list = $8->false_list;  
                        block_name = "";
                    }
                    | DO D LCP M block_item_list_opt RCP M WHILE LP expression RP SEMICOLON {  
                        $$ = new S();
                        convInt2Bool($10);
                        backpatch($10->true_list, $4);    
                        backpatch($5->next_list, $7);    
                        $$->next_list = $10->false_list;  
                        block_name = "";
                    }
                    | FOR F LP X change_table declaration M expression_statement M expression N RP M loop_statement {  
                        convInt2Bool($8);
                        backpatch($8->true_list, $13); 
                        backpatch($11->next_list, $7); 
                        backpatch($14->next_list, $9);
                        quad_table.emit("goto", convInt2Str($9));
                        $$->next_list = $8->false_list;  
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
                    | FOR F LP X change_table expression_statement M expression_statement M expression N RP M loop_statement {  
                        $$ = new S();
                        convInt2Bool($8);
                        backpatch($8->true_list, $13); 
                        backpatch($11->next_list, $7); 
                        backpatch($14->next_list, $9); 
                        quad_table.emit("goto", convInt2Str($9)); 
                        $$->next_list = $8->false_list; 
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
                    | FOR F LP X change_table declaration M expression_statement M expression N RP M LCP block_item_list_opt RCP {  
                        $$ = new S();
                        convInt2Bool($8);
                        backpatch($8->true_list, $13); 
                        backpatch($11->next_list, $7); 
                        backpatch($15->next_list, $9); 
                        quad_table.emit("goto", convInt2Str($9)); 
                        $$->next_list = $8->false_list;  
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
                    | FOR F LP X change_table expression_statement M expression_statement M expression N RP M LCP block_item_list_opt RCP { 
                        $$ = new S();
                        convInt2Bool($8);
                        backpatch($8->true_list, $13); 
                        backpatch($11->next_list, $7); 
                        backpatch($15->next_list, $9); 
                        quad_table.emit("goto", convInt2Str($9)); 
                        $$->next_list = $8->false_list;  
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
                    ;

jump_statement  : GOTO IDENTIFIER SEMICOLON {}
                | CONTINUE SEMICOLON { $$ = new S(); }
                | BREAK SEMICOLON { $$ = new S(); }
                | RETURN expression SEMICOLON {
                    $$ = new S();
                    quad_table.emit("return", $2->addr->name);
                }
                | RETURN SEMICOLON {
                    $$ = new S();
                    quad_table.emit("return", ""); 
                }
                ;

M:  { $$ = next_instruction(); } 

N:  { $$ = new S(); $$->next_list = makelist(next_instruction()); quad_table.emit("goto", ""); } 

F   :  { block_name = "FOR"; }
    ;
W   :  { block_name = "WHILE"; }
    ;
D   :  { block_name = "DO"; }
    ;
I   :  { block_name = "IF"; }
    ;
E   :  { block_name = "ELSE"; }
    ;
X   :  { 
        string newSymbolTableName = current_symbol_table->name + "." + block_name + "$" + to_string(symbol_table_cnt++); 
        symbol* symbolFound = current_symbol_table->lookup(newSymbolTableName); 
        symbolFound->nested_table = new symbol_table(newSymbolTableName); 
        symbolFound->name = newSymbolTableName; 
        symbolFound->nested_table->parent = current_symbol_table;
        symbolFound->type = new symbol_type("block");
        current_symbol = symbolFound;
        block_name = ""; 
    }
    ;

change_table    :  {
                    if (current_symbol->nested_table != NULL) {
                        switchTable(current_symbol->nested_table); 
                        quad_table.emit("label", current_symbol_table->name);
                    }
                    else {
                        switchTable(new symbol_table(""));
                    }
                }
                ;

// External Definitions

translation_unit    : external_declaration {}
                    | translation_unit external_declaration {}
                    ;

external_declaration    : function_definition {}
                        | declaration {}
                        ;

function_definition : declaration_specifiers declarator declaration_list_opt change_table LCP block_item_list_opt RCP {
                        current_symbol_table->parent = global_symbol_table;
                        symbol_table_cnt = 0;
                        switchTable(global_symbol_table);  
                    }
                    ;

declaration_list_opt    : declaration_list {}
                        |  {}
                        ;

declaration_list    : declaration {}
                    | declaration_list declaration {}
                    ;
%%


void yyerror(char * s){
    printf("ERROR: %s \t line_no: %d \t token: %s \n", s, yylineno, yytext);
    exit(0);
}

