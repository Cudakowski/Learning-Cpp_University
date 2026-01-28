#ifndef CONTAINER_1_H
#define CONTAINER_1_H

#include <iostream>

class Container_1
{
private:
    int _tab[4];
    int _size;
public:
    Container_1(/* args */);
    int Delete();
    bool IsEmpty();
    bool IsFull();
    void Add(int x);
    void Print();
    int Size();
    void Clear();
};



#endif
