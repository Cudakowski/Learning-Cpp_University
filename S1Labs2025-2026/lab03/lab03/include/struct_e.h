#ifndef STRUCT_E_H
#define STRUCT_E_H

typedef struct StructE StructE;
#include "../include/struct_k.h"
struct StructE{
    int valueE;
    StructK *ptr_to_K;
};

void print_structE(StructE* s);

#endif
