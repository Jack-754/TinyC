#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include "tinyC3_22CS30063_22CS30066_translator.h"

// GLOBAL VARIABLES
symbol* current_symbol;
symbol_table* current_symbol_table;
symbol_table* global_symbol_table;
quad_array quad_table;
int symbol_table_cnt;
string block_name;
FILE* file;
std::ostringstream tables;

// DATA_TYPE TO STORE CURRENTLY PROCESSING DATA TYPE
string data_type;

// CLASS SYMBOL TYPE
// CONSTRUCTOR OF SYMBOL TYPE
symbol_type::symbol_type(string base_, symbol_type* arrType_, int width_):
    base(base_), width(width_), sub_type(arrType_) {}

// CLASS SYMBOL
// CONSTRUCTOR SYBMBOL CLASS
symbol::symbol(string name_, string type_, symbol_type* sub_type, int width): name(name_), initial_value("-"), offset(0), nested_table(NULL) {
    type = new symbol_type(type_, sub_type, width);
    size = type_size(type);
}
// UPDATE SYMBOL
symbol* symbol::update(symbol_type* t) {
    type = t;
    size = type_size(t);
    return this;
}

// CLASS SYMBOL TABLE
// SYMBOL TABLE CONSTRUCTOR
symbol_table::symbol_table(string name_): name(name_), count(0), parent(NULL) {}

symbol* symbol_table::lookup(string name) {
    // SEARCH IN THIS
    for(list<symbol>::iterator it = table.begin(); it != table.end(); it++) {
        if(it->name == name) {
            return &(*it);
        }
    }

    // SEARCH IN PARENT
    symbol* s = NULL;
    if(this->parent != NULL) {
        s = this->parent->lookup(name);
    }

    if(current_symbol_table == this && s == NULL) {
        // ADD TO CURRENT SYMBOL TABLE
        symbol* sym = new symbol(name);
        table.push_back(*sym);
        return &(table.back());
    }
    else if(s != NULL) {
        // FOUND IN A PARENT
        return s;
    }

    // NEVER FOUND
    return NULL;
}

symbol* symbol_table::gentemp(symbol_type* t, string initial_value) {
    // GENERATE A TEMPRORAY VARIABLE

    string name = "t" + convInt2Str(current_symbol_table->count++);
    symbol* sym = new symbol(name);
    sym->type = t;
    sym->initial_value = initial_value;         
    sym->size = type_size(t);

    current_symbol_table->table.push_back(*sym);
    return &(current_symbol_table->table.back());
}

void symbol_table::print() {
    tables << "Symbol Table: " << setfill(' ') << left << setw(50) << this->name;
    tables << "Parent Table: " << setfill(' ') << left << setw(50) << ((this->parent != NULL) ? this->parent->name : "NULL") << endl;

    tables << endl;

    // Table Headers
    tables << setfill(' ') << left << setw(25) <<  "Name";
    tables << left << setw(25) << "Type";
    tables << left << setw(20) << "Initial Value";
    tables << left << setw(15) << "Size";
    tables << left << setw(15) << "Offset";
    tables << left << "Nested" << endl;

    for(int i = 0; i < 120; i++) {
        tables << '-';
    }
    tables << endl;

    list<symbol_table*> tableList;

    // PRINT THE SYMBOLS
    for(list<symbol>::iterator it = this->table.begin(); it != this->table.end(); it++) {
        tables << left << setw(25) << it->name;
        tables << left << setw(25) << print_type(it->type);
        tables << left << setw(20) << (it->initial_value != "" ? it->initial_value : "-");
        tables << left << setw(15) << it->size;
        tables << left << setw(15) << it->offset;
        tables << left;

        if(it->nested_table != NULL) {
            tables << it->nested_table->name << endl;
            tableList.push_back(it->nested_table);
        }
        else {
            tables << "NULL" << endl;
        }
    }
    tables << "\n\n\n";
    for(list<symbol_table*>::iterator it = tableList.begin(); it != tableList.end(); it++) {
        (*it)->print();
    }

}

// UPDATE THE OFFSETS OF ALL SYMBOLS OF THE SYMBOL ATBLE
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

        if(it->nested_table != NULL) {
            tableList.push_back(it->nested_table);
        }
    }

    for(list<symbol_table*>::iterator iter = tableList.begin(); iter != tableList.end(); iter++) {
        (*iter)->update();
    }
}

//QUAD CLASS
// CONSTRUCTORS
quad::quad(string res, string arg1_, string operation, string arg2_): result(res), arg1(arg1_), opcode(operation), arg2(arg2_) {}

quad::quad(string res, int arg1_, string operation, string arg2_): result(res), opcode(operation), arg2(arg2_) {
    arg1 = convInt2Str(arg1_);
}

quad::quad(string res, float arg1_, string operation, string arg2_): result(res), opcode(operation), arg2(arg2_) {
    arg1 = convFloat2Str(arg1_);
}

// PRINT METHOD
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

// QUAD ARRAY CLASS
// PRINT METHOD
void quad_array::print() {
    int cnt = 1;
    for(vector<quad>::iterator it = this->qlist.begin(); it != this->qlist.end(); it++, cnt++) {
        if(it->opcode != "label") {
            cout << "    " << cnt << ":    ";
            it->print();
        }
        else {
            cout << endl << "    " << cnt << ": ";
            it->print();
        }
        cout << endl;
    }
}

// EMIT METHODS (OVERLOADED)
void quad_array::emit(string op, string result, string arg1, string arg2) {
    quad* q = new quad(result, arg1, op, arg2);
    quad_table.qlist.push_back(*q);
}

void quad_array::emit(string op, string result, int arg1, string arg2) {
    quad* q = new quad(result, arg1, op, arg2);
    quad_table.qlist.push_back(*q);
}

void quad_array::emit(string op, string result, float arg1, string arg2) {
    quad* q = new quad(result, arg1, op, arg2);
    quad_table.qlist.push_back(*q);
}

// INSTRUCTION LIST CLASS
// CONSTRUCTOR
instruction_list::instruction_list(int ref, instruction_list* inst) : quad_reference(ref), next(inst) {}

// INITIALIZE MAKE LIST
instruction_list* makelist(int i){
    instruction_list* l = new instruction_list(i);
    return l;
}

// MERGE TWO LIST
instruction_list* merge(instruction_list* l1, instruction_list* l2) {
    instruction_list* tail = l1;
    if(tail == NULL) {
        l1 = l2;
        return l1;
    }
    while(tail->next!= NULL){
        tail = tail->next;
    }
    instruction_list* iterator = l2;
    while(iterator!=NULL){
        tail->next = iterator;
        tail = tail->next;
        iterator = iterator->next;
    }
    return l1;
}

// BACKPATCH REFERENCES OF QUADS
void backpatch(instruction_list* l, int address) {
    string str = convInt2Str(address);
    instruction_list* temp = l;
    while(temp!=NULL){
        quad_table.qlist[temp->quad_reference].result = str;
        temp = temp->next;
    }
}

// TYPE CHECK FUNCTION
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

// HELPER FUNCTION
bool typecheck(symbol_type* t1, symbol_type* t2) {
    if(t1 == NULL && t2 == NULL)
        return true;
    else if(t1 == NULL || t2 == NULL)
        return false;
    else if(t1->base != t2->base)
        return false;

    return typecheck(t1->sub_type, t2->sub_type);
}

// CONVERT A TYPE TO ANOTHER
symbol* convType(symbol* s, string t) {
    symbol* temp = symbol_table::gentemp(new symbol_type(t));

    if(s->type->base == "float") {
        if(t == "int") {
            quad_table.emit("=", temp->name, "float2int(" + s->name + ")");
            return temp;
        }
        else if(t == "char") {
            quad_table.emit("=", temp->name, "float2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    else if(s->type->base == "int") {
        if(t == "float") {
            quad_table.emit("=", temp->name, "int2float(" + s->name + ")");
            return temp;
        }
        else if(t == "char") {
            quad_table.emit("=", temp->name, "int2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    else if(s->type->base == "char") {
        if(t == "float") {
            quad_table.emit("=", temp->name, "char2float(" + s->name + ")");
            return temp;
        }
        else if(t == "int") {
            quad_table.emit("=", temp->name, "char2int(" + s->name + ")");
            return temp;
        }
        return s;
    }

    return s;
}


string convInt2Str(int i) {
    return to_string(i);
}

string convFloat2Str(float f) {
    return to_string(f);
}

// Implementation of the convInt2Bool function
EXPR* convInt2Bool(EXPR* expr) {
    if(expr->exprType != "bool") {
        expr->false_list = makelist(next_instruction());    // Add false_list for boolean expressions
        quad_table.emit("==", expr->addr->name, "0");
        expr->true_list = makelist(next_instruction());     // Add true_list for boolean expressions
        quad_table.emit("goto", "");
    }
    return expr;
}

// Implementation of the convBool2Int function
EXPR* convBool2Int(EXPR* expr) {
    if(expr->exprType == "bool") {
        expr->addr = symbol_table::gentemp(new symbol_type("int"));
        backpatch(expr->true_list, next_instruction());
        quad_table.emit("=", expr->addr->name, "true");
        quad_table.emit("goto", convInt2Str(next_instruction() + 1));
        backpatch(expr->false_list, next_instruction());
        quad_table.emit("=", expr->addr->name, "false");
    }
    return expr;
}

// SWITCH TO A DIFFERENT TABLE FROM THE CURRENT TABLE
void switchTable(symbol_table* newTable) {
    current_symbol_table = newTable;
}

// GET THE NEXT INSTRUCTION
int next_instruction() {
    return quad_table.qlist.size();
}

// GET THE SIZE OF THE TYPE
int type_size(symbol_type* t) {
    if(t->base == "void")
        return size_of_void;
    else if(t->base == "char")
        return size_of_char;
    else if(t->base == "int")
        return size_of_int;
    else if(t->base == "ptr")
        return size_of_pointer;
    else if(t->base == "float")
        return size_of_float;
    else if(t->base == "arr")
        return t->width * type_size(t->sub_type);
    else if(t->base == "func")
        return 0;
    else
        return -1;
}

// PRINT THE TYPE
string print_type(symbol_type* t) {
    if(t == NULL)
        return "null";
    else if(t->base == "void" || t->base == "char" || t->base == "int" || t->base == "float" || t->base == "block" || t->base == "func")
        return t->base;
    else if(t->base == "ptr")
        return "ptr(" + print_type(t->sub_type) + ")";
    else if(t->base == "arr")
        return "arr(" + convInt2Str(t->width) + ", " + print_type(t->sub_type) + ")";
    else
        return "unknown";
}

int main(int argc, char* argv[]) {
    if (argc < 4) {
        std::cerr << "Usage: ./a.out <input_file> <output_file>\n";
        return 1;
    }
    const char* inputFileName = argv[1]; // GET THE INPUT FILE
    const char* quadsFileName = argv[2]; // GET THE QUAD FILE
    const char* tableFileName = argv[3]; // GET THE TABLE FILE

    freopen(inputFileName,"r",stdin);   // OPEN INPUT INTO stdin
    freopen(quadsFileName,"w",stdout);  // OPEN QUAD FILE INTO stdout
    file = fopen(tableFileName, "w");   // OPEN tables file in file pointer
    
    if (file == nullptr) {
        std::cerr << "Error:" << tableFileName << "\n";
        return 1;  
    }

    symbol_table_cnt = 0;                                   // block generator
    global_symbol_table = new symbol_table("Global");       // Create global symbol table
    current_symbol_table = global_symbol_table;             // current table global
    block_name = "";
    yyparse();
    global_symbol_table->update();
    quad_table.print();                                      // Print Three Address Code
    cout << endl;
    global_symbol_table->print();                            // Print symbol tables
    fprintf(file, "%s", tables.str().c_str());
    fclose(file);
    return 0;
}
