#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lex.yy.c"

typedef struct _node {
    char* token_name;
    char* attribute_val;
    struct _node *next;
} node;
typedef node * symboltable;

symboltable addtbl ( symboltable T, char* token_name, char* attribute_val)
{
   node *p;
   p = T;
   while (p) {
      if (!strcmp(attribute_val,p->attribute_val) && !(strcmp(token_name,p->token_name))) {
         return T;
      }
      p = p -> next;
   }
   p = (node *)malloc(sizeof(node));
   p->token_name=strdup(token_name);
   p->attribute_val = strdup(attribute_val);
   p -> next = T;
   return p;
}
void print(symboltable T){
    if(T==NULL){
        return;
    }
    print(T->next);
    printf("Type: %s  ,  Val: %s\n",T->token_name,T->attribute_val);
    return;
}
int main(){
    symboltable T=NULL;
    int nextok;
    printf("**********TOKENIZATION PROCESS**********\n");
    while((nextok=yylex())){
        switch(nextok) {
            case OTHER:{
                printf("***Invalid symbol: %s\n", yytext);
                break;
            }
            case KEYWORD:{
                printf("***FOUND Keyword: %s\n", yytext);
                break;
            }
            case IDENTIFIER:{
                printf("***FOUND Identifier: %s\n", yytext);
                T = addtbl(T,"IDENTIFIER",yytext);
                break;
            }
            case CONSTANT:{
                printf("***FOUND Constant: %s\n", yytext);
                T = addtbl(T,"CONSTANT",yytext);
                break;
            }
            case STRING_LITERAL:{
                printf("***FOUND String_Literal: %s\n", yytext);
                T = addtbl(T,"STRING_LITERAL",yytext);
                break;
            }
            case PUNCTUATOR:{
                printf("***FOUND Punctuator: %s\n", yytext);
                T = addtbl(T,"PUNCTUATOR",yytext);
                break; 
            }
            default: break;
        }
    }
    printf("\n**********CONTENTS OF SYMBOL_TABLE**********\n\n");
    print(T);
    return 0;
}