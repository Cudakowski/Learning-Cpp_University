#ifndef STRUCT_H_H
#define STRUCT_H_H

typedef struct StructH StructH;
#include "../include/struct_d.h"
struct StructH{
    int valueH;
    StructD *ptr_to_D;
};

void print_structH(StructH* s);

#endif
