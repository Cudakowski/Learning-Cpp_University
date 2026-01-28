#ifndef CONTAINER_3_H
#define CONTAINER_3_H

#include <iostream>

class Container_3
{
private:
    int *_tab;
    int _size;
    int _maxSize;
public:
    Container_3(int x);
    ~Container_3();
    int Delete();
    bool IsEmpty();
    bool IsFull();
    void Add(int x);
    void Print();
    int Size();
    void Clear();
};

#endif
