#include "Array.h"

int * InitArray(int arraySize)
{
    if(arraySize<1)
    {
        return nullptr;
    }
    else
    {
        int *ptr=new int[arraySize];
        return ptr;
    }
}

void CreateSequence(int *array,int arraySize)
{
    array[0]=0;
    for (int i{1};i<arraySize; ++i)
    {
        array[i]=i+array[i-1];
    }
}

int * ChangeArraySize(int *array,int arraySize,int newArraySize)
{
    if(newArraySize<1)
    {
        delete [] array;
        return nullptr;
    }


    int *ptr=new int[newArraySize];
    if(newArraySize>arraySize)
    {
        for (int i{};i<arraySize;++i)
        {
            ptr[i]=array[i];
        }

        // for (int i{arraySize};i<newArraySize;++i)
        // {
        //     ptr[i]=0;
        // }
    }
    else
    {
        for (int i{};i<newArraySize;++i)
        {
            ptr[i]=array[i];
        }
    }

    delete [] array;

    return ptr;
}

void DeleteArray(int *array)
{
    delete [] array;
}
