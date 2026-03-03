#ifndef STRUCT_I_H
#define STRUCT_I_H

typedef struct StructI StructI;
#include "../include/struct_c.h"
struct StructI{
    int valueI;
    StructC *ptr_to_C;
    StructI *ptr_to_I;
};

void print_structI(StructI* s);

#endif
