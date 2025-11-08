#ifndef STRUCT_F_H
#define STRUCT_F_H

typedef struct StructF StructF;
#include "../include/struct_b.h"
struct StructF{
    int valueF;
    StructB *ptr_to_B;
};

void print_structF(StructF* s);

#endif
