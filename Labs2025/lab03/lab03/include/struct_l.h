#ifndef STRUCT_L_H
#define STRUCT_L_H

typedef struct StructL StructL;
#include "../include/struct_e.h"
struct StructL{
    int valueL;
    StructE *ptr_to_E;
    StructL *ptr_to_L;
};

void print_structL(StructL* s);

#endif
