#include <iostream>
#include <string>
#include "ass3_22CS30063_22CS30066.h"

parsetree create_node(string s){
    parsetree temp = new PT_node; 
    temp->parse_symbol = s;
    temp->child_list = NULL;
    return temp;
}

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

parsetree create_leaf_node(string type, string s) {
    parsetree temp = new PT_node; 
    temp->parse_symbol = "T: " + type + ",  "+ s;
    temp->child_list = NULL;
    return temp;
}

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
