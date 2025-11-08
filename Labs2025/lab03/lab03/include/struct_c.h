#ifndef STRUCT_C_H
#define STRUCT_C_H

typedef struct StructC StructC;
#include "../include/struct_f.h"
struct StructC{
    int valueC;
    StructF *ptr_to_F;
};

void print_structC(StructC* s);

#endif
