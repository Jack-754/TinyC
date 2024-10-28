#ifndef TINYC2_22CS30063_22CS30066_TRANSLATOR_H
#define TINYC2_22CS30063_22CS30066_TRANSLATOR_H

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define SIZE_INT  4
#define SIZE_PTR  4
#define SIZE_FLOAT 8
#define SIZE_CHAR 1
#define SIZE_VOID 0


// symbol
class symbol{
    public: 
    string name;
    symbol_type* type;
    string intial_value;
    int size;
    int offset;
    symboltable* nested_table;

    symbol(string s,symbol_type* type = NULL,string val = "NOT Initalized", )

}

// symbol type management
class symbol_type{
    public:
    string base;
    int width;
    symbol_type* if_array;
    symbol_type(string type, symbol_type* is_it_array = NULL, int width = 1);
    void add_new_array(int identified_width);
}

// symbol table
class Symbol_table{
    vector<symbol> symbols;
    Symbol_table* parent_table;
}



class quad{
    public: 
    string opcode;
    string arg1;
    string arg2;
    string result;

    quad(string tar,string a1,string op="=",string a2);
    quad(string tar,int a1,string op="=",string a2);
    quad(string tar,float a1,string op="=",string a2);

    void print();
}
 
class quads_array{
    public:
    vecto<quad> array;

    void print();
}


#endif