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

    extern symbol* currentSymbol;
    extern symbol_table* currentSymbolTable;
    extern symbol_table* globalSymbolTable;
    extern quad_list quadTable;
    extern int SymbolTableCount;
    extern string blockName;
    extern string data_type;
%}

%union {
    int iValue;     
    char *sValue;   
    symbol *symb;       
    symbol_type *symbType;   
    E *expr;   
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

%start translation_unit

%nonassoc RP
%nonassoc ELSE


%%

/* Expressions */
primary_expression  : IDENTIFIER    {
                        $$ = new E();  // New expression
                        $$->addr = $1;      // Store pointer in Symbol Table
                        $$->exprType = "not_bool";   // Non bool expression
                    }
                    | constant      {
                        $$ = new E();  // New expression
                        $$->addr = $1;      // Store pointer in Symbol Table
                    }
                    | STRING_LITERAL       {
                        $$ = new E();  // New expression
                        $$->addr = symbol_table::gentemp(new symbol_type("ptr"), $1); // Create new temp with type ptr and store value
                        $$->addr->type->sub_type = new symbol_type("char");
                    }
                    | LP expression RP { $$ = $2; } // Assignment
                    ;

constant            : CONSTANT_INT  {
                        $$ = symbol_table::gentemp(new symbol_type("int"), convIntToStr($1)); // Create new temp with type int and store value
                        quadTable.emit("=", $$->name, $1);
                    }
                    | CONSTANT_FLOAT{
                        $$ = symbol_table::gentemp(new symbol_type("float"), string($1));  // Create new temp with type double and store value
                        quadTable.emit("=", $$->name, string($1));
                    }
                    | CONSTANT_CHAR {
                        $$ = symbol_table::gentemp(new symbol_type("char"), string($1));   // Create new temp with type char and store value
                        quadTable.emit("=", $$->name, string($1));
                    }
                    ;

  

postfix_expression:
      primary_expression  {
            $$ = new A();   
            $$->location = $1->addr;   
            $$->type = $1->addr->type;  
            $$->addr = $$->location;   
        }
    | postfix_expression LBP expression RBP  { 
      $$ = new A();   
      $$->type = $1->type->sub_type;  
      $$->location = $1->location;  
      $$->addr = symbol_table::gentemp(new symbol_type("int")); 
      $$->sub_type = "arr"; 
      if ($1->sub_type == "arr") { 
          symbol* temp = symbol_table::gentemp(new symbol_type("int"));
          int sz = sizeOfType($$->type);  
          quadTable.emit("*", temp->name, $3->addr->name, convIntToStr(sz));
          quadTable.emit("+", $$->addr->name, $1->addr->name, temp->name);
        }
      else {
          int sz = sizeOfType($$->type);  
          quadTable.emit("*", $$->addr->name, $3->addr->name, convIntToStr(sz)); 
      }
    }
    | postfix_expression LP argument_expression_list_opt RP  { 
      $$ = new A();  
      $$->location = symbol_table::gentemp($1->type); 
      quadTable.emit("call", $$->location->name, $1->location->name, convIntToStr($3)); 
    }
    | postfix_expression DOT IDENTIFIER                             { /*Given: Not needed */ }
    | postfix_expression ARROW IDENTIFIER                           { /*Given: Not needed */ }
    | postfix_expression PLUS_FIX { 
          $$ = new A();   
          $$->location = symbol_table::gentemp($1->location->type);    
          quadTable.emit("=", $$->location->name, $1->location->name);    
          quadTable.emit("+", $1->location->name, $1->location->name, "1");   
    }
    | postfix_expression SUB_FIX { 
          $$ = new A();   
          $$->location = symbol_table::gentemp($1->location->type);    
          quadTable.emit("=", $$->location->name, $1->location->name);    
          quadTable.emit("-", $1->location->name, $1->location->name, "1");  
      }
    | LP type_name RP LCP initializer_list RCP                      { /*Given: Not needed */ }
    | LP type_name RP LCP initializer_list COMMA RCP                { /*Given: Not needed */ }
    ;

argument_expression_list:
      assignment_expression { $$ = 1;
          quadTable.emit("param", $1->addr->name);  
        }
    | argument_expression_list COMMA assignment_expression { 
        $$ = $1 + 1;
        quadTable.emit("param", $3->addr->name);
    }
    ;

argument_expression_list_opt:
      argument_expression_list                                      { $$ = $1;}
    |                                                               { $$ = 0;}
    ;

unary_expression:
      postfix_expression                                            { $$ = $1;}
    | PLUS_FIX unary_expression                                     { 
          quadTable.emit("+", $2->location->name, $2->location->name, "1");   
          $$ = $2;    
    }
    | SUB_FIX unary_expression                                      { 
          quadTable.emit("-", $2->location->name, $2->location->name, "1");   
          $$ = $2;    
    }
    | unary_operator cast_expression                                { 
          $$ = new A();
           if ($1 == '&') {
               $$->location = symbol_table::gentemp(new symbol_type("ptr")); 
               $$->location->type->sub_type = $2->location->type;
               quadTable.emit("= &", $$->location->name, $2->location->name); 
           }
           else if ($1 == '*') {
               $$->sub_type = "ptr"; // Pointer type
               $$->addr = symbol_table::gentemp($2->location->type->sub_type); 
               $$->location = $2->location;  
               quadTable.emit("= *", $$->addr->name, $2->location->name); 
           }
           else if ($1 == '+') $$ = $2;
           else if ($1 == '-') {
               $$->location = symbol_table::gentemp(new symbol_type($2->location->type->base)); 
               quadTable.emit("= -", $$->location->name, $2->location->name);
           }
           else if ($1 == '~')  {
               $$->location = symbol_table::gentemp(new symbol_type($2->location->type->base)); 
               quadTable.emit("= ~", $$->location->name, $2->location->name);
           }
           else if ($1 == '!') {
               $$->location = symbol_table::gentemp(new symbol_type($2->location->type->base)); 
               quadTable.emit("= !", $$->location->name, $2->location->name);
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
        $$ = new A();
        $$->location = convType($4->location, data_type);
    }
    ;

multiplicative_expression:
      cast_expression {
        $$ = new E(); 
        if ($1->sub_type == "arr") {
            $$->addr = symbol_table::gentemp($1->addr->type); 
            quadTable.emit("=[]", $$->addr->name, $1->location->name, $1->addr->name); 
        }
        else if($1->sub_type == "ptr") {
            $$->addr = $1->addr; 
        }
        else $$->addr = $1->location; 
       }
    | multiplicative_expression STAR cast_expression {
          if (typecheck($1->addr, $3->location)) {
              $$ = new E();
              $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base));
              quadTable.emit("*", $$->addr->name, $1->addr->name, $3->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }      
     }
    | multiplicative_expression DIV cast_expression { 
          if (typecheck($1->addr, $3->location)) {
              $$ = new E();
              $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base));
              quadTable.emit("/", $$->addr->name, $1->addr->name, $3->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
    | multiplicative_expression MOD cast_expression { 
          if (typecheck($1->addr, $3->location)) {
              $$ = new E();
              $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base)); 
              quadTable.emit("%", $$->addr->name, $1->addr->name, $3->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
/* START */
    ;

additive_expression:
      multiplicative_expression                                     { $$ = $1;}
    | additive_expression PLUS multiplicative_expression            { 
        if (typecheck($1->addr, $3->addr)) {
            $$ = new E();
            $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base)); 
            quadTable.emit("+", $$->addr->name, $1->addr->name, $3->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    | additive_expression SUB multiplicative_expression  { 
        if (typecheck($1->addr, $3->addr)) {
            $$ = new E();
            $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base)); 
            quadTable.emit("-", $$->addr->name, $1->addr->name, $3->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    ;

shift_expression:
      additive_expression                                           { $$ = $1; }
    | shift_expression LOGICAL_LEFT_SHIFT additive_expression  { 
      if (typecheck($1->addr, $3->addr)) {
            $$ = new E();
            $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base)); 
            quadTable.emit("<<", $$->addr->name, $1->addr->name, $3->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    | shift_expression LOGICAL_RIGHT_SHIFT additive_expression  { 
      if (typecheck($1->addr, $3->addr)) {
            $$ = new E();
            $$->addr = symbol_table::gentemp(new symbol_type($1->addr->type->base)); 
            quadTable.emit(">>", $$->addr->name, $1->addr->name, $3->addr->name); 
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
            $$ = new E();
            $$->exprType = "bool";   
            $$->trueList = makelist(nextinstr()); 
            $$->falseList = makelist(nextinstr()+1); 
            quadTable.emit("<", "", $1->addr->name, $3->addr->name); 
            quadTable.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    | relational_expression REL_GT shift_expression  { 
      if (typecheck($1->addr, $3->addr)) {
            $$ = new E();
            $$->exprType = "bool";   
            $$->trueList = makelist(nextinstr()); 
            $$->falseList = makelist(nextinstr()+1); 
            quadTable.emit(">", "", $1->addr->name, $3->addr->name); 
            quadTable.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    | relational_expression REL_LTE shift_expression  { 
      if (typecheck($1->addr, $3->addr)) {
            $$ = new E();
            $$->exprType = "bool";   
            $$->trueList = makelist(nextinstr()); 
            $$->falseList = makelist(nextinstr()+1); 
            quadTable.emit("<=", "", $1->addr->name, $3->addr->name); 
            quadTable.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    | relational_expression REL_GTE shift_expression  { 
      if (typecheck($1->addr, $3->addr)) {
            $$ = new E();
            $$->exprType = "bool";   
            $$->trueList = makelist(nextinstr()); 
            $$->falseList = makelist(nextinstr()+1); 
            quadTable.emit(">=", "", $1->addr->name, $3->addr->name); 
            quadTable.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    ;

equality_expression:
      relational_expression  { $$ = $1;}
    | equality_expression REL_EQ relational_expression { 
        if (typecheck($1->addr, $3->addr)) {
              convBoolToInt($1);
              convBoolToInt($3);
              $$ = new E();
              $$->exprType = "bool";   
              $$->trueList = makelist(nextinstr()); 
              $$->falseList = makelist(nextinstr()+1); 
              quadTable.emit("==", "", $1->addr->name, $3->addr->name); 
              quadTable.emit("goto", ""); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
    | equality_expression REL_NEQ relational_expression { 
      if (typecheck($1->addr, $3->addr)) {
            convBoolToInt($1);
            convBoolToInt($3);
            $$ = new E();
            $$->exprType = "bool";   
            $$->trueList = makelist(nextinstr()); 
            $$->falseList = makelist(nextinstr()+1); 
            quadTable.emit("!=", "", $1->addr->name, $3->addr->name); 
            quadTable.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
    ;

AND_expression:
      equality_expression { $$ = $1;}
    | AND_expression BITWISE_AND equality_expression  { 
            if (typecheck($1->addr, $3->addr)) {
                convBoolToInt($1);
                convBoolToInt($3);
                $$ = new E();
                $$->exprType = "not_bool"; 
                $$->addr = symbol_table::gentemp(new symbol_type("int")); 
                quadTable.emit("&", $$->addr->name, $1->addr->name, $3->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
    ;

exclusive_OR_expression:
      AND_expression  { $$ = $1; }
    | exclusive_OR_expression BITWISE_XOR AND_expression { 
      if (typecheck($1->addr, $3->addr)) {
                convBoolToInt($1);
                convBoolToInt($3);
                $$ = new E();
                $$->exprType = "not_bool"; 
                $$->addr = symbol_table::gentemp(new symbol_type("int")); 
                quadTable.emit("^", $$->addr->name, $1->addr->name, $3->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
    ;

inclusive_OR_expression:
      exclusive_OR_expression  { $$ = $1;}
    | inclusive_OR_expression BITWISE_OR exclusive_OR_expression  { 
      if (typecheck($1->addr, $3->addr)) {
                convBoolToInt($1);
                convBoolToInt($3);
                $$ = new E();
                $$->exprType = "not_bool"; 
                $$->addr = symbol_table::gentemp(new symbol_type("int")); 
                quadTable.emit("|", $$->addr->name, $1->addr->name, $3->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
    ;
logical_AND_expression:
      inclusive_OR_expression                                       { $$ = $1; }
    | logical_AND_expression LOGICAL_AND M inclusive_OR_expression    { 
            convIntToBool($1);
            convIntToBool($4);
            $$ = new E();
            $$->exprType = "bool";   
            backpatch($1->trueList, $3); 
            $$->trueList = $4->trueList; 
            $$->falseList = merge($1->falseList, $4->falseList); 
    }
    ;

logical_OR_expression:
      logical_AND_expression   { $$ = $1; }
    | logical_OR_expression LOGICAL_OR M logical_AND_expression { 
          convIntToBool($1);
          convIntToBool($4);
          $$ = new E();
          $$->exprType = "bool";   
          backpatch($1->falseList, $3); 
          $$->falseList = $4->falseList; 
          $$->trueList = merge($1->trueList, $4->trueList); 
    }
    ;

conditional_expression:
      logical_OR_expression                                                             { $$ = $1; }
    | logical_OR_expression N TERNARY_QM M expression N TERNARY_SEP M conditional_expression {  /// learn about this
            $$->addr = symbol_table::gentemp($5->addr->type); 
            $$->addr->update($5->addr->type);
            quadTable.emit("=", $$->addr->name, $9->addr->name);
            instruction_list* templist1 = makelist(nextinstr());
            quadTable.emit("goto", "");   
            backpatch($6->nextList, nextinstr());   
            quadTable.emit("=", $$->addr->name, $5->addr->name); 
            instruction_list* templist2 = makelist(nextinstr());
            templist1 = merge(templist1, templist2);
            quadTable.emit("goto", "");   
            backpatch($2->nextList, nextinstr());   
            convIntToBool($1);
            backpatch($1->trueList, $4); 
            backpatch($1->falseList, $8); 
            backpatch(templist1, nextinstr());
        }
    ;

assignment_expression:
      conditional_expression                                                            { $$ = $1;}
    | unary_expression assignment_operator assignment_expression                        { 
            if ($1->sub_type == "arr") { 
                $3->addr = convType($3->addr, $1->type->base);
                quadTable.emit("[]=", $1->location->name, $1->addr->name, $3->addr->name); 
            }
            else if ($1->sub_type == "ptr") quadTable.emit("*=", $1->location->name, $3->addr->name); 
            else {
                $3->addr = convType($3->addr, $1->location->type->base);
                quadTable.emit("=", $1->location->name, $3->addr->name); 
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
          if ($3->initValue != "") $1->initValue = $3->initValue;
          quadTable.emit("=", $1->name, $3->name);
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
                currentSymbol = $1; 
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
            int temp = atoi($3->addr->initValue.c_str());   
            symbol_type* tp = new symbol_type("arr", $1->type, temp);  
            $$ = $1->update(tp);    
        }
        else {
            int temp = atoi($3->addr->initValue.c_str());   
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
        currentSymbolTable->name = $1->name; 
        if ($1->type->base != "void") {
            symbol* s = currentSymbolTable->lookup("return");  
            s->update($1->type);    
        }
        $1->nestedTable = currentSymbolTable;   
        currentSymbolTable->parent = globalSymbolTable;   
        switchTable(globalSymbolTable);  
        currentSymbol = $$; 
    }
    | direct_declarator LP identifier_list RP                                       { }
    | direct_declarator LP change_table RP {
        currentSymbolTable->name = $1->name; 
        if ($1->type->base != "void") {
            symbol* s = currentSymbolTable->lookup("return");  
            s->update($1->type);    
        }
        $1->nestedTable = currentSymbolTable;    
        currentSymbolTable->parent = globalSymbolTable;   
        switchTable(globalSymbolTable);  
        currentSymbol = $$;
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
                $$->nextList = $1->nextList;
            }
            | selection_statement { $$ = $1; }
            | iteration_statement { $$ = $1; }
            | jump_statement { $$ = $1; }
            ;

// Added new non-terminal for loops
loop_statement: labeled_statement {}
            | expression_statement {
                $$ = new S();
                $$->nextList = $1->nextList;
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
        switchTable(currentSymbolTable->parent);
      }
    ;

block_item_list:
      block_item { $$ = $1; }
    | block_item_list M block_item { 
          $$ = $3;
          backpatch($1->nextList, $2);    
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
                        | SEMICOLON { $$ = new E(); }
                        ;

selection_statement:
      IF LP expression N RP M statement N { 
          backpatch($4->nextList, nextinstr());
          convIntToBool($3);
          $$ = new S();
          backpatch($3->trueList, $6); 
          instruction_list* temp = merge($3->falseList, $7->nextList);
          $$->nextList = merge($8->nextList, temp); 
      }
    | IF LP expression N RP M statement N ELSE M statement                      { 
            backpatch($4->nextList, nextinstr()); 
            convIntToBool($3);
            $$ = new S();
            backpatch($3->trueList, $6); 
            backpatch($3->falseList, $10); 
            instruction_list* temp = merge($7->nextList, $8->nextList); 
            $$->nextList = merge($11->nextList, temp); 
    }
    | SWITCH LP expression RP statement                                 { /*Not Required*/}
    ;

iteration_statement : WHILE W LP X change_table M expression RP M loop_statement { 
                        $$ = new S(); 
                        convIntToBool($7);
                        backpatch($10->nextList, $6);   
                        backpatch($7->trueList, $9);    
                        $$->nextList = $7->falseList; 
                        quadTable.emit("goto", convIntToStr($6)); 
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
                    | WHILE W LP X change_table M expression RP LCP M block_item_list_opt RCP { 
                        $$ = new S(); // new statement
                        convIntToBool($7);
                        backpatch($11->nextList, $6);   
                        backpatch($7->trueList, $10);   
                        $$->nextList = $7->falseList;  
                        quadTable.emit("goto", convIntToStr($6)); 
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
                    | DO D M loop_statement M WHILE LP expression RP SEMICOLON {   
                        $$ = new S();
                        convIntToBool($8);
                        backpatch($8->trueList, $3);   
                        backpatch($4->nextList, $5);   
                        $$->nextList = $8->falseList;  
                        blockName = "";
                    }
                    | DO D LCP M block_item_list_opt RCP M WHILE LP expression RP SEMICOLON {  
                        $$ = new S();
                        convIntToBool($10);
                        backpatch($10->trueList, $4);    
                        backpatch($5->nextList, $7);    
                        $$->nextList = $10->falseList;  
                        blockName = "";
                    }
                    | FOR F LP X change_table declaration M expression_statement M expression N RP M loop_statement {  
                        convIntToBool($8);
                        backpatch($8->trueList, $13); 
                        backpatch($11->nextList, $7); 
                        backpatch($14->nextList, $9);
                        quadTable.emit("goto", convIntToStr($9));
                        $$->nextList = $8->falseList;  
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
                    | FOR F LP X change_table expression_statement M expression_statement M expression N RP M loop_statement {  
                        $$ = new S();
                        convIntToBool($8);
                        backpatch($8->trueList, $13); 
                        backpatch($11->nextList, $7); 
                        backpatch($14->nextList, $9); 
                        quadTable.emit("goto", convIntToStr($9)); 
                        $$->nextList = $8->falseList; 
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
                    | FOR F LP X change_table declaration M expression_statement M expression N RP M LCP block_item_list_opt RCP {  
                        $$ = new S();
                        convIntToBool($8);
                        backpatch($8->trueList, $13); 
                        backpatch($11->nextList, $7); 
                        backpatch($15->nextList, $9); 
                        quadTable.emit("goto", convIntToStr($9)); 
                        $$->nextList = $8->falseList;  
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
                    | FOR F LP X change_table expression_statement M expression_statement M expression N RP M LCP block_item_list_opt RCP { 
                        $$ = new S();
                        convIntToBool($8);
                        backpatch($8->trueList, $13); 
                        backpatch($11->nextList, $7); 
                        backpatch($15->nextList, $9); 
                        quadTable.emit("goto", convIntToStr($9)); 
                        $$->nextList = $8->falseList;  
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
                    ;

jump_statement  : GOTO IDENTIFIER SEMICOLON {}
                | CONTINUE SEMICOLON { $$ = new S(); }
                | BREAK SEMICOLON { $$ = new S(); }
                | RETURN expression SEMICOLON {
                    $$ = new S();
                    quadTable.emit("return", $2->addr->name);
                }
                | RETURN SEMICOLON {
                    $$ = new S();
                    quadTable.emit("return", ""); 
                }
                ;

M:  { $$ = nextinstr(); } 

N:  { $$ = new S(); $$->nextList = makelist(nextinstr()); quadTable.emit("goto", ""); } 

F   :  { blockName = "FOR"; }
    ;
W   :  { blockName = "WHILE"; }
    ;
D   :  { blockName = "DO"; }
    ;
X   :  { 
        string newSymbolTableName = currentSymbolTable->name + "." + blockName + "$" + to_string(SymbolTableCount++); 
        symbol* symbolFound = currentSymbolTable->lookup(newSymbolTableName); 
        symbolFound->nestedTable = new symbol_table(newSymbolTableName); 
        symbolFound->name = newSymbolTableName; 
        symbolFound->nestedTable->parent = currentSymbolTable;
        symbolFound->type = new symbol_type("block");
        currentSymbol = symbolFound; 
    }
    ;

change_table    :  {
                    if (currentSymbol->nestedTable != NULL) {
                        switchTable(currentSymbol->nestedTable); 
                        quadTable.emit("label", currentSymbolTable->name);
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
                        currentSymbolTable->parent = globalSymbolTable;
                        SymbolTableCount = 0;
                        switchTable(globalSymbolTable);  
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

