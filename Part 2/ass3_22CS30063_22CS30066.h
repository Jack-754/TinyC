#ifndef ASS3_22CS30063_22CS30066_H
#define ASS3_22CS30063_22CS30066_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct parsetree_node* parsetree;

typedef struct child_list{
    parsetree C;
    struct child_list* next;
} C_list;
typedef C_list* children;

typedef struct parsetree_node{
    char* parse_symbol;
    children child_list;
} PT_node;
typedef struct parsetree_node* parsetree; 


parsetree create_node(char* string);
parsetree add_child(parsetree parent, parsetree child);

parsetree create_leaf_node(char* type,char* string);

#endif