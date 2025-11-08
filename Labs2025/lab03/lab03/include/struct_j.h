#ifndef STRUCT_J_H
#define STRUCT_J_H

typedef struct StructJ StructJ;
#include "../include/struct_m.h"
struct StructJ{
    int valueJ;
    StructM *ptr_to_M;
};

void print_structJ(StructJ* s);

#endif
