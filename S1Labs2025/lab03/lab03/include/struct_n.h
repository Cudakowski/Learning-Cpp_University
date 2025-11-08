#ifndef STRUCT_N_H
#define STRUCT_N_H

typedef struct StructN StructN;
#include "../include/struct_a.h"
struct StructN{
    int valueN;
    StructA *ptr_to_A;
};

void print_structN(StructN* s);

#endif
