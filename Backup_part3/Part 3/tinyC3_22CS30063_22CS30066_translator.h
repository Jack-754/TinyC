#ifndef TINYC2_22CS30063_22CS30066_TRANSLATOR_H
#define TINYC2_22CS30063_22CS30066_TRANSLATOR_H

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define sizeof_void 0
#define sizeof_char 1
#define sizeof_int 4
#define sizeof_float 8
#define sizeof_pointer 4


class symbol;   
class symbol_type;   
class symbol_table; 
class quad; 
class quad_list;    


extern symbol* currentSymbol;   
extern symbol_table* currentSymbolTable;
extern symbol_table* globalSymbolTable; 
extern quad_list quadTable;   
extern int SymbolTableCount;  
extern string blockName;   


extern int yyparse();
extern char* yytext;

class symbol {
    public:
    string name;  
    symbol_type* type;   
    string initValue;   
    int size;  
    int offset; 
    symbol_table* nestedTable;  

    symbol(string name_, string type_ = "int", symbol_type* sub_type = NULL, int width = 0);
    symbol* update(symbol_type* t); 
};


class symbol_type {
    public:
    string base;   
    int width; 
    symbol_type* sub_type;  

    symbol_type(string base_, symbol_type* arrType_ = NULL, int width_ = 1); 
};

class symbol_table {
    public:
    string name;    
    int count;  
    list<symbol> table;   
    symbol_table* parent;  

    symbol_table(string name_ = "NULL"); 

    symbol* lookup(string name);   
    static symbol* gentemp(symbol_type* type_, string initValue_ = ""); 
    void update();  
    void print();   
};

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

class quad_list{
    public:
    vector <quad> qlist;    
    void print();  

    void emit(string opcode, string res, string arg1 = "", string arg2 = ""); 
    void emit(string opcode, string res, int arg1, string arg2 = ""); 
    void emit(string opcode, string res, float arg1, string arg2 = ""); 
};







class A {
    public:
    string sub_type; 
    symbol* addr;   
    symbol* location; 
    symbol_type* type;   
};

// change 1
class instruction_list {
public:
    int quad_reference;
    instruction_list* next;

    instruction_list(int ref, instruction_list* inst = NULL);
};

class S {
    public:
    instruction_list* nextList;   
};


class E {
    public:
    string exprType;  
    symbol* addr;
    instruction_list* trueList;  
    instruction_list* falseList;  
    instruction_list* nextList;  
};


instruction_list* makelist(int i); // need to be changed
instruction_list* merge(instruction_list* l1, instruction_list* l2); // need to be changed
void backpatch(instruction_list* l, int i); // need to be changed
bool typecheck(symbol_type* t1, symbol_type* t2);
symbol* convType(symbol* s, string t); 


bool typecheck(symbol* &s1, symbol* &s2); 
string convIntToStr(int n); 
string convFloatToStr(float f); 
E* convIntToBool(E* e); 
E* convBoolToInt(E* e); 
void switchTable(symbol_table* newTable); 
int nextinstr(); 
int sizeOfType(symbol_type* t); 
string printType(symbol_type* t); 

#endif
