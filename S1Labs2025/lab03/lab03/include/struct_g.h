#ifndef STRUCT_G_H
#define STRUCT_G_H

typedef struct StructG StructG;
#include "../include/struct_n.h"
struct StructG{
    int valueG;
    StructN *ptr_to_N;
};

void print_structG(StructG* s);

#endif
