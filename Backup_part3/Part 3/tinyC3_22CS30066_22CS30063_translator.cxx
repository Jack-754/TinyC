#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include "tinyC3_22CS30063_22CS30066_translator.h"


symbol* currentSymbol;
symbol_table* currentSymbolTable;
symbol_table* globalSymbolTable;
quad_list quadTable;
int SymbolTableCount;
string blockName;


string data_type;


symbol_type::symbol_type(string base_, symbol_type* arrType_, int width_):
    base(base_), width(width_), sub_type(arrType_) {}


symbol::symbol(string name_, string type_, symbol_type* sub_type, int width): name(name_), initValue("-"), offset(0), nestedTable(NULL) {
    type = new symbol_type(type_, sub_type, width);
    size = sizeOfType(type);
}

symbol* symbol::update(symbol_type* t) {
    type = t;
    size = sizeOfType(t);
    return this;
}


symbol_table::symbol_table(string name_): name(name_), count(0), parent(NULL) {}

symbol* symbol_table::lookup(string name) {
    for(list<symbol>::iterator it = table.begin(); it != table.end(); it++) {
        if(it->name == name) {
            return &(*it);
        }
    }

    // If not found, go up the hierarchy to search in the parent symbol tables
    symbol* s = NULL;
    if(this->parent != NULL) {
        s = this->parent->lookup(name);
    }

    if(currentSymbolTable == this && s == NULL) {
        // If the symbol is not found, create the symbol, add it to the symbol table and return a pointer to it
        symbol* sym = new symbol(name);
        table.push_back(*sym);
        return &(table.back());
    }
    else if(s != NULL) {
        return s;
    }

    return NULL;
}

symbol* symbol_table::gentemp(symbol_type* t, string initValue) {

    string name = "t" + convIntToStr(currentSymbolTable->count++);
    symbol* sym = new symbol(name);
    sym->type = t;
    sym->initValue = initValue;         
    sym->size = sizeOfType(t);

    currentSymbolTable->table.push_back(*sym);
    return &(currentSymbolTable->table.back());
}

void symbol_table::print() {
    for(int i = 0; i < 120; i++) {
        cout << '-';
    }
    cout << endl;
    cout << "Symbol Table: " << setfill(' ') << left << setw(50) << this->name;
    cout << "Parent Table: " << setfill(' ') << left << setw(50) << ((this->parent != NULL) ? this->parent->name : "NULL") << endl;
    for(int i = 0; i < 120; i++) {
        cout << '-';
    }
    cout << endl;


    cout << setfill(' ') << left << setw(25) <<  "Name";
    cout << left << setw(25) << "Type";
    cout << left << setw(20) << "Initial Value";
    cout << left << setw(15) << "Size";
    cout << left << setw(15) << "Offset";
    cout << left << "Nested" << endl;

    for(int i = 0; i < 120; i++) {
        cout << '-';
    }
    cout << endl;

    list<symbol_table*> tableList;

    for(list<symbol>::iterator it = this->table.begin(); it != this->table.end(); it++) {
        cout << left << setw(25) << it->name;
        cout << left << setw(25) << printType(it->type);
        cout << left << setw(20) << (it->initValue != "" ? it->initValue : "-");
        cout << left << setw(15) << it->size;
        cout << left << setw(15) << it->offset;
        cout << left;

        if(it->nestedTable != NULL) {
            cout << it->nestedTable->name << endl;
            tableList.push_back(it->nestedTable);
        }
        else {
            cout << "NULL" << endl;
        }
    }

    for(int i = 0; i < 120; i++) {
        cout << '-';
    }
    cout << endl << endl;

    for(list<symbol_table*>::iterator it = tableList.begin(); it != tableList.end(); it++) {
        (*it)->print();
    }

}

void symbol_table::update() {
    list<symbol_table*> tableList;
    int off_set;

    for(list<symbol>::iterator it = table.begin(); it != table.end(); it++) {
        if(it == table.begin()) {
            it->offset = 0;
            off_set = it->size;
        }
        else {
            it->offset = off_set;
            off_set = it->offset + it->size;
        }

        if(it->nestedTable != NULL) {
            tableList.push_back(it->nestedTable);
        }
    }

    
    for(list<symbol_table*>::iterator iter = tableList.begin(); iter != tableList.end(); iter++) {
        (*iter)->update();
    }
}

quad::quad(string res, string arg1_, string operation, string arg2_): result(res), arg1(arg1_), opcode(operation), arg2(arg2_) {}

quad::quad(string res, int arg1_, string operation, string arg2_): result(res), opcode(operation), arg2(arg2_) {
    arg1 = convIntToStr(arg1_);
}

quad::quad(string res, float arg1_, string operation, string arg2_): result(res), opcode(operation), arg2(arg2_) {
    arg1 = convFloatToStr(arg1_);
}

void quad::print() {
    if(opcode == "=")       
        cout << result << " = " << arg1;
    else if(opcode == "*=")
        cout << "*" << result << " = " << arg1;
    else if(opcode == "[]=")
        cout << result << "[" << arg1 << "]" << " = " << arg2;
    else if(opcode == "=[]")
        cout << result << " = " << arg1 << "[" << arg2 << "]";
    else if(opcode == "goto" || opcode == "param" || opcode == "return")
        cout << opcode << " " << result;
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


void quad_list::print() {
    for(int i = 0; i < 120; i++) {
        cout << '-';
    }
    cout << endl;
    cout << "THREE ADDRESS CODE (TAC):" << endl;
    for(int i = 0; i < 120; i++) {
        cout << '-';
    }
    cout << endl;

    int cnt = 0;
    
    for(vector<quad>::iterator it = this->qlist.begin(); it != this->qlist.end(); it++, cnt++) {
        if(it->opcode != "label") {
            cout << left << setw(4) << cnt << ":    ";
            it->print();
        }
        else {
            cout << endl << left << setw(4) << cnt << ": ";
            it->print();
        }
        cout << endl;
    }
}


void quad_list::emit(string op, string result, string arg1, string arg2) {
    quad* q = new quad(result, arg1, op, arg2);
    quadTable.qlist.push_back(*q);
}

void quad_list::emit(string op, string result, int arg1, string arg2) {
    quad* q = new quad(result, arg1, op, arg2);
    quadTable.qlist.push_back(*q);
}

void quad_list::emit(string op, string result, float arg1, string arg2) {
    quad* q = new quad(result, arg1, op, arg2);
    quadTable.qlist.push_back(*q);
}

instruction_list::instruction_list(int ref, instruction_list* inst) : quad_reference(ref), next(inst) {}


instruction_list* makelist(int i){
    instruction_list* l = new instruction_list(i);
    return l;
}

instruction_list* merge(instruction_list* list1, instruction_list* list2) {
    instruction_list* tail = list1;
    while(tail->next!= NULL){
        tail = tail->next;
    }
    instruction_list* iterator = list2;
    while(iterator!=NULL){
        tail->next = iterator;
        tail = tail->next;
        iterator = iterator->next;
    }
    return tail;
}

void backpatch(instruction_list* l, int address) {
    string str = convIntToStr(address);
    instruction_list* temp = l;
    while(temp!=NULL){
        quadTable.qlist[temp->quad_reference].result = str;
        temp = temp->next;
    }
}

bool typecheck(symbol* &s1, symbol* &s2) {
    symbol_type* t1 = s1->type;
    symbol_type* t2 = s2->type;

    if(typecheck(t1, t2))
        return true;
    else if(s1 == convType(s1, t2->base))
        return true;
    else if(s2 == convType(s2, t1->base))
        return true;
    else
        return false;
}

bool typecheck(symbol_type* t1, symbol_type* t2) {
    if(t1 == NULL && t2 == NULL)
        return true;
    else if(t1 == NULL || t2 == NULL)
        return false;
    else if(t1->base != t2->base)
        return false;

    return typecheck(t1->sub_type, t2->sub_type);
}

symbol* convType(symbol* s, string t) {
    symbol* temp = symbol_table::gentemp(new symbol_type(t));

    if(s->type->base == "float") {
        if(t == "int") {
            quadTable.emit("=", temp->name, "float2int(" + s->name + ")");
            return temp;
        }
        else if(t == "char") {
            quadTable.emit("=", temp->name, "float2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    else if(s->type->base == "int") {
        if(t == "float") {
            quadTable.emit("=", temp->name, "int2float(" + s->name + ")");
            return temp;
        }
        else if(t == "char") {
            quadTable.emit("=", temp->name, "int2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    else if(s->type->base == "char") {
        if(t == "float") {
            quadTable.emit("=", temp->name, "char2float(" + s->name + ")");
            return temp;
        }
        else if(t == "int") {
            quadTable.emit("=", temp->name, "char2int(" + s->name + ")");
            return temp;
        }
        return s;
    }

    return s;
}

string convIntToStr(int i) {
    return to_string(i);
}

string convFloatToStr(float f) {
    return to_string(f);
}

E* convIntToBool(E* expr) {
    if(expr->exprType != "bool") {
        expr->falseList = makelist(nextinstr());    
        quadTable.emit("==", expr->addr->name, "0");
        expr->trueList = makelist(nextinstr());    
        quadTable.emit("goto", "");
    }
    return expr;
}

E* convBoolToInt(E* expr) {
    if(expr->exprType == "bool") {
        expr->addr = symbol_table::gentemp(new symbol_type("int"));
        backpatch(expr->trueList, nextinstr());
        quadTable.emit("=", expr->addr->name, "true");
        quadTable.emit("goto", convIntToStr(nextinstr() + 1));
        backpatch(expr->falseList, nextinstr());
        quadTable.emit("=", expr->addr->name, "false");
    }
    return expr;
}

void switchTable(symbol_table* newTable) {
    currentSymbolTable = newTable;
}

int nextinstr() {
    return quadTable.qlist.size();
}

int sizeOfType(symbol_type* t) {
    if(t->base == "void")
        return sizeof_void;
    else if(t->base == "char")
        return sizeof_char;
    else if(t->base == "int")
        return sizeof_int;
    else if(t->base == "ptr")
        return sizeof_pointer;
    else if(t->base == "float")
        return sizeof_float;
    else if(t->base == "arr")
        return t->width * sizeOfType(t->sub_type);
    else if(t->base == "func")
        return 0;
    else
        return -1;
}

string printType(symbol_type* t) {
    if(t == NULL)
        return "null";
    else if(t->base == "void" || t->base == "char" || t->base == "int" || t->base == "float" || t->base == "block" || t->base == "func")
        return t->base;
    else if(t->base == "ptr")
        return "ptr(" + printType(t->sub_type) + ")";
    else if(t->base == "arr")
        return "arr(" + convIntToStr(t->width) + ", " + printType(t->sub_type) + ")";
    else
        return "unknown";
}

int main() {
    SymbolTableCount = 0;                            
    globalSymbolTable = new symbol_table("Global");  
    currentSymbolTable = globalSymbolTable;              
    blockName = "";

    yyparse();
    globalSymbolTable->update();
    quadTable.print();      
    cout << endl;
    globalSymbolTable->print();      

    return 0;
}
