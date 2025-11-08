#ifndef STRUCT_M_H
#define STRUCT_M_H

typedef struct StructM StructM;
#include "../include/struct_j.h"
struct StructM{
    int valueM;
    StructJ *ptr_to_J;
    StructM *ptr_to_M;
};

void print_structM(StructM* s);


#endif
