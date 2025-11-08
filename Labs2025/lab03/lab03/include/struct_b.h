#ifndef STRUCT_B_H
#define STRUCT_B_H

typedef struct StructB StructB;

#include "../include/struct_h.h"
struct StructB{
    int valueB;
    StructH *ptr_to_H;
};

void print_structB(StructB* s);

#endif
