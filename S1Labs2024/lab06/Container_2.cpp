#include "Container_2.h"



int Container_2::Delete(void)
{
    if(size<1)
    {
        std::cout<< "#BLAD: Obiekt pusty\n";
        return 0;
    }
    size-=1;
    return tab[size];
}

int Container_2::IsEmpty(void)
{
    if(size==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Container_2::IsFull(void)
{
    if(size==max_size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Container_2::Add(int x)
{
    if(size==max_size)
    {
        std::cout<< "#BLAD: Obiekt zapelniony\n";
        return;
    }
    tab[size]=x;
    size+=1;
}

void Container_2::Print(void)
{
    std::cout << "#Zawartosc obiektu:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << tab[i] << ',';
    }
    std::cout << '\n';
}

int Container_2::Size(void)
{
    return size;
}

void Container_2::Clear(void)
{
    size=0;
}
