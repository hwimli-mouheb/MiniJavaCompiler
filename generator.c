#include "generator.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int indextab;
ENTREE_CODE tabCodeInt[2000];

ENTREE_CODE createEntry (const char* code, int op, const char* funcName){
    ENTREE_CODE ent;
    ent.code_op = (char *)malloc(strlen(code)+2);
    strcpy(ent.code_op, code);
    ent.operand=op;
    ent.func_name = (char *)malloc(strlen(funcName)+2);
    strcpy(ent.func_name, funcName);
    return ent;
}

ENTREE_CODE createOperation (const char* code,int op){
    return createEntry (code,op,"");
}

ENTREE_CODE createCode (const char* code){
    return createOperation (code,-1);
}

void generateCode(){
   
    for (int f=0;f<indextab;f++){
        printf("%s ",tabCodeInt[f].code_op);
        if(tabCodeInt[f].operand!=-1)
            printf("%d ",tabCodeInt[f].operand);
        printf("\n");
    }
    //close();
}