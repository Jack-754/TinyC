#include <iostream>
#include "ass3_22CS30063_22CS30066.h"

parsetree create_node(char* string){
    parsetree temp = new PT_node; 
    temp->parse_symbol = strdup(string);
    temp->child_list = NULL;
    return temp;
}

// parsetree create_node(char* string) {
//     parsetree temp = new PT_node; 
//     char* formatted_string = (char*)malloc(strlen(string) + strlen("NT(    ") + strlen("    )") + 1);
//     sprintf(formatted_string, "NT(    %s    )", string);
//     temp->parse_symbol = strdup(formatted_string);
//     temp->child_list = NULL;
//     free(formatted_string);
//     return temp;
// }


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

// parsetree create_leaf_node(char* type,char* string){
//     parsetree temp = new PT_node; 
//     temp->parse_symbol = strdup(string);
//     temp->child_list = NULL;
//     return temp;
// }

parsetree create_leaf_node(char* type, char* string) {
    parsetree temp = new PT_node; 
    char* formatted_string = (char*)malloc(strlen(type) + strlen(string) + strlen(", ") + 1);
    sprintf(formatted_string, "%s, %s", type, string);
    temp->parse_symbol = strdup(formatted_string);
    temp->child_list = NULL;
    free(formatted_string);
    return temp;
}

void print_tree(parsetree root, int level){
    int space = level;
    while(space >= 0){
        printf("    ");
        space--;
    }
    printf("%s\n",root->parse_symbol);
    children tail = root->child_list;
    while(tail != NULL){
        print_tree(tail->C,level+1);
        tail= tail->next;
    }
    return;
}

// int main() {
//     // Create the root node
//     parsetree root = create_node((char*)"root");

//     // Create some child leaf nodes
//     parsetree child1 = create_leaf_node((char*)"type1", (char*)"string1");
//     parsetree child2 = create_leaf_node((char*)"type2", (char*)"string2");

//     // Add children to the root node
//     root = add_child(root, child1);
//     root = add_child(root, child2);

//     // Create a node with a child of its own
//     parsetree sub_node = create_node((char*)"sub_node");
//     parsetree sub_child = create_leaf_node((char*)"type_sub", (char*)"string_sub");
//     sub_node = add_child(sub_node, sub_child);

//     // Add the sub_node to the root node
//     root = add_child(root, sub_node);

//     // Print the parse tree starting from the root
//     std::cout << "Parse Tree:\n";
//     print_tree(root, 0);

//     return 0;
// }
