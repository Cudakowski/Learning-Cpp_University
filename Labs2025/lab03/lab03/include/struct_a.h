#ifndef STRUCT_A_H
#define STRUCT_A_H

typedef struct StructA StructA;
#include "../include/struct_g.h"
struct StructA{
    int valueA;
    StructG *ptr_to_G;
    StructA *ptr_to_A;
};

void print_structA(StructA* s);

#endif
