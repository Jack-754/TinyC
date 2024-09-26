#ifndef ASS3_22CS30063_22CS30066_H
#define ASS3_22CS30063_22CS30066_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct parsetree_node{
    char* parse_symbol;
    struct parsetree_node* LC;
    struct parsetree_node* RC;
} PT_node;

typedef struct parsetree_node* parsetree; 

parsetree create_node(char* string, parsetree LC, parsetree RC);

#endif