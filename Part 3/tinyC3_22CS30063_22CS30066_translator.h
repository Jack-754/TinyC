#ifndef TINYC2_22CS30063_22CS30066_TRANSLATOR_H
#define TINYC2_22CS30063_22CS30066_TRANSLATOR_H

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// SIZES OF DIFFERENT DATA TYPES
#define size_of_void 0
#define size_of_char 1
#define size_of_int 4
#define size_of_float 8
#define size_of_pointer 4

// CLASSES USED
class symbol;   
class symbol_type;   
class symbol_table; 
class quad; 
class quad_array;    
class instruction_list;
class EXPR;
class A;
class S;

// GLOBAL VARIABLES
extern symbol* current_symbol;   
extern symbol_table* current_symbol_table;
extern symbol_table* global_symbol_table; 
extern quad_array quad_table;   
extern int symbol_table_cnt;  
extern string block_name;   
extern FILE* file;
extern std::ostringstream tables;
extern string data_type;

// Yacc funcs
extern int yyparse();
extern char* yytext;

//SYMBOL CLASS
class symbol {
    public:
    string name;            
    symbol_type* type;   
    string initial_value;   
    int size;  
    int offset; 
    symbol_table* nested_table;  

    symbol(string name_, string type_ = "int", symbol_type* sub_type = NULL, int width = 0);
    symbol* update(symbol_type* t); 
};

// SYMBOL TYPE CLASS
class symbol_type {
    public:
    string base;   
    int width; 
    symbol_type* sub_type;              // SUB TYPE FOR PTR AND ARRAYS
    symbol_type(string base_, symbol_type* arrType_ = NULL, int width_ = 1); 
};

// SYMBOL TABLE CLASS
class symbol_table {
    public:
    string name;    
    int count;                          // maintain the count of temprory variables
    list<symbol> table;   
    symbol_table* parent;  

    symbol_table(string name_ = "NULL"); 

    symbol* lookup(string name);   
    static symbol* gentemp(symbol_type* type_, string initValue_ = ""); 
    void update();  
    void print();   
};

// QUAD CLASS
class quad {
    public:
    string opcode; 
    string arg1; 
    string arg2; 
    string result;

    quad(string res_, string arg1_, string op_ = "=", string arg2_ = "");
    quad(string res_, int arg1_, string op_ = "=", string arg2_ = "");
    quad(string res_, float arg1_, string op_ = "=", string arg2_ = ""); 

    void print();  
};

// QUAD ARRAY
class quad_array{
    public:
    vector <quad> qlist;    // the array of quads
    void print();  
    void emit(string opcode, string res, string arg1 = "", string arg2 = ""); 
    void emit(string opcode, string res, int arg1, string arg2 = ""); 
    void emit(string opcode, string res, float arg1, string arg2 = ""); 
};

// Linked list to maintain the instructions in the truelist,falselist,nextlist
class instruction_list {
public:
    int quad_reference;
    instruction_list* next;

    instruction_list(int ref, instruction_list* inst = NULL);
};

// Class to calculate / store array type variables 
class A {
    public:
    string sub_type; 
    symbol* addr;   
    symbol* location; 
    symbol_type* type;   
};

// Statement Class
class S {
    public:
    instruction_list* next_list; 

    S(instruction_list* next=NULL): next_list(next) {}  
};

// Expetion class
class EXPR {
    public:
    string exprType;  
    symbol* addr;
    instruction_list* true_list;  
    instruction_list* false_list;  
    instruction_list* next_list;  
};


instruction_list* makelist(int i);                                      // Initialized a list
instruction_list* merge(instruction_list* l1, instruction_list* l2);    // merge two lists
void backpatch(instruction_list* l, int i);                             // backpatch a list of quads

bool typecheck(symbol_type* t1, symbol_type* t2);                       // check type compatibility between two symbols
bool typecheck(symbol* &s1, symbol* &s2); 
symbol* convType(symbol* s, string t);                                  // Convert one symbol type to another



string convInt2Str(int n); 
string convFloat2Str(float f); 
EXPR* convInt2Bool(EXPR* expr); 
EXPR* convBool2Int(EXPR* expr); 
void switchTable(symbol_table* newTable); 
int next_instruction(); 
int type_size(symbol_type* t); 
string print_type(symbol_type* t); 

#endif
