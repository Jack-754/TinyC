#include <iostream>
#include "ass3_22CS30063_22CS30066.h"

parsetree create_node(char* string, parsetree LC, parsetree RC){
    parsetree temp = new PT_node; 
    temp->parse_symbol = strdup(string);
    temp->LC = LC;
    temp->RC = RC;
    return temp;
}