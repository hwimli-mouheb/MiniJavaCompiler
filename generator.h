#ifndef GENERATOR_H_INCLUDED
#define GENERATOR_H_INCLUDED
#include "stdio.h"
#include <stdlib.h>
#include <string.h>

typedef struct ENTREE_CODE
{
    char* code_op;
    int operand;
    char* func_name;
}ENTREE_CODE;



ENTREE_CODE createEntry (const char* code, int op, const char* funcName);
ENTREE_CODE createOperation (const char* code,int op);
ENTREE_CODE createCode (const char* code);

#endif // GENERATOR_H_INCLUDED