#ifndef ASS3_22CS30063_22CS30066_H
#define ASS3_22CS30063_22CS30066_H

#include <iostream>
#include <string>
using namespace std;
typedef struct parsetree_node* parsetree;

typedef struct child_list{
    parsetree C;
    struct child_list* next;
} C_list;
typedef C_list* children;

typedef struct parsetree_node{
    string parse_symbol;
    children child_list;
} PT_node;
typedef struct parsetree_node* parsetree; 


parsetree create_node(string s);
parsetree add_child(parsetree parent, parsetree child);
parsetree create_leaf_node(string type,string s);
void print_tree(parsetree root, int level);

#endif