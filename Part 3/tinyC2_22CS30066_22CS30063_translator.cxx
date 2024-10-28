#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include "tinyC3_22CS30063_22CS30066_translator.h"

symbol* currentSymbol;
symbolTable* currentSymbolTable;
symbolTable* globalSymbolTable;
quadArray quadTable;
int SymbolTableCount;
string blockName;

string data_type;



quad::quad(string tar, string a1, string op, string a2): result(tar), arg1(a1), opcode(op), arg2(a2) {}
quad::quad(string tar, int a1, string op, string a2): result(tar), opcode(op), arg2(a2) {
    arg1 = convIntToStr(a1);
}
quad::quad(string tar, float a1, string op, string a2): result(tar), opcode(op), arg2(a2) {
    arg1 = convFloatToStr(a1);
}
void quad::print() {
    if(opcode == "=")       // Simple assignment
        cout << result << " = " << arg1;
    else if(opcode == "*=")
        cout << "*" << result << " = " << arg1;
    else if(opcode == "[]=")
        cout << result << "[" << arg1 << "]" << " = " << arg2;
    else if(opcode == "=[]")
        cout << result << " = " << arg1 << "[" << arg2 << "]";
    else if(opcode == "goto" || opcode == "return")
        cout << opcode << " " << result;
    else if(opcode == "param")
        cout << opcode << " " << arg1;
    else if(opcode == "call")
        cout << result << " = " << "call " << arg1 << ", " << arg2;
    else if(opcode == "label")
        cout << result << ": ";
    else if(opcode == "+" || opcode == "-" || opcode == "*" || opcode == "/" || opcode == "%" || opcode == "^" || opcode == "|" || opcode == "&" || opcode == "<<" || opcode == ">>")
        cout << result << " = " << arg1 << " " << opcode << " " << arg2;
    else if(opcode == "==" || opcode == "!=" || opcode == "<" || opcode == ">" || opcode == "<=" || opcode == ">=")
        cout << "if " << arg1 << " " << opcode << " " << arg2 << " goto " << result;
    else if(opcode == "= &" || opcode == "= *" || opcode == "= -" || opcode == "= ~" || opcode == "= !")
        cout << result << " " << opcode << arg1;
    else
        cout << "Unknown Operator";
}

list<int> makelist(int i) {
    list<int> l(1, i);
    return l;
}

list<int> merge(list<int> &list1, list<int> &list2) {
    list1.merge(list2);
    return list1;
}

void backpatch(list<int> l, int address) {
    string str = convIntToStr(address);
    for(list<int>::iterator it = l.begin(); it != l.end(); it++) {
        quadTable.array[*it].result = str;
    }
}





int main(){
    // maintain the no of symbol table that have been made
    // I need a global symbol table
    // I need a iterator maintaining which table is going and being edited
    // I need a iterative string to maintain which block am i in
}