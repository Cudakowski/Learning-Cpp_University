#include "Array.h"

int factorial(int x);

int * InitArray(int arraySize)
{
    int * array=new int[arraySize];
    return array;
}

void CreateSequence(int * array,int  arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        array[i]=factorial(i);
    }
    
}

void DeleteArray(int *array)
{
    delete [] array;
}

int factorial(int x)
{
    int val=1;

    for (int i = 2; i <= x; i++)
    {
        val*=i;
    }
    return val;
    
}