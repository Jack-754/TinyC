/*
  Main C file
  Group-
  More Aayush Babasaheb 22CS30063
  Devanshu Agrawal 22CS30066
*/  

/*
    Details ----
        1. The tree is printed by the print_tree function.
        2. Tree holds the string value and list of children
        3. printing every terminal is printed in the format ----    T: <token type> , <token attribute(here, string value)>
        4. The indentation is used as a basis to determine each transition
*/

#include <iostream>
#include <string>
#include "tinyC2_22CS30063_22CS30066.h"
#include "y.tab.h"

// Making internal nodes
parsetree create_node(string s){
    parsetree temp = new PT_node; 
    temp->parse_symbol = s;
    temp->child_list = NULL;
    return temp;
}

// adding child to a given parent node
parsetree add_child(parsetree parent, parsetree child){
    if(parent->child_list == NULL){
        parent->child_list = new C_list;
        parent->child_list->C = child;
        parent->child_list->next = NULL;
        return parent;
    }
    children tail = parent->child_list;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new C_list;
    tail->next->C = child;
    tail->next->next = NULL;
    return parent;
}

// cerating a leaf node
parsetree create_leaf_node(string type, string s) {
    parsetree temp = new PT_node; 
    temp->parse_symbol = "T: " + type + ",  "+ s;
    temp->child_list = NULL;
    return temp;
}

// printing the tree
void print_tree(parsetree root, int level){
    int space = level;
    while(space > 0){
        printf("  ");
        space--;
    }
    printf("%s\n",root->parse_symbol.c_str());
    children tail = root->child_list;
    while(tail != NULL){
        print_tree(tail->C,level+1);
        tail= tail->next;
    }
    return;
}

// Global variable to store the tree.
parsetree root = NULL;

int main()
{
    yyparse();
    print_tree(root,0);
    return 0;
}