#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lex.yy.c"

typedef struct _node {
   char* name;
   struct _node *next;
} node;
typedef node * symboltable;

symboltable addtbl ( symboltable T, char* name)
{
   node *p;
   p = T;
   while (p) {
      if (!strcmp(name,p->name)) {
         return T;
      }
      p = p -> next;
   }
   p = (node *)malloc(sizeof(node));
   p->name=strdup(name);
   p -> next = T;
   return p;
}

void print(symboltable T){
    symboltable p=T;
    while(p!=NULL){
        printf("%s\n", p->name);
        p=p->next;
    }
}

int main(){
    symboltable T=NULL, C=NULL, S=NULL;
    int nextok;
    while((nextok=yylex())){
        switch(nextok) {
            case OTHER:{
                printf("Invalid symbol: %s\n", yytext);
                break;
            }
            case KEYWORD:{
                printf("Keyword: %s\n", yytext);
                break;
            }
            case IDENTIFIER:{
                printf("Identifier: %s\n", yytext);
                T = addtbl(T, yytext);
                break;
            }
            case CONSTANT:{
                printf("Constant: %s\n", yytext);
                C = addtbl(C, yytext);
                break;
            }
            case STRING_LITERAL:{
                printf("String Literal: %s\n", yytext);
                S = addtbl(S, yytext);
                break;
            }
            case PUNCTUATOR:{
                printf("Punctuator: %s\n", yytext);
                break; 
            }
            case SLC: {
                printf("Single Line Comment IGNORED\n");
                break;
            }
            case MLC: {
                printf("Multi Line Comment IGNORED\n");
                break;
            }
            default: break;
        }
    }
    printf("IDENTIFIERS:\n");
    print(T);
    printf("\nCONSTANTS:\n");
    print(C);
    printf("\nSTRING LITERALS:\n");
    print(S);
    return 0;
}