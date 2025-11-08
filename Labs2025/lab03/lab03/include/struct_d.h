#ifndef STRUCT_D_H
#define STRUCT_D_H

typedef struct StructD StructD;
#include "../include/struct_i.h"
struct StructD{
    int valueD;
    StructI *ptr_to_I;
};

void print_structD(StructD* s);

#endif
