#include "Container_3.h"

Container_3::Container_3(int nSize)
{
    tab= new int [nSize];
    max_size=nSize;
}

Container_3::~Container_3()
{
    delete [] tab;
}


int Container_3::Delete(void)
{
    if(size<1)
    {
        std::cout<< "#BLAD: Obiekt pusty\n";
        return 0;
    }
    size-=1;
    return tab[size];
}

int Container_3::IsEmpty(void)
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

int Container_3::IsFull(void)
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

void Container_3::Add(int x)
{
    if(size==max_size)
    {
        //std::cout<< "#BLAD: Obiekt zapelniony\n";
        int *newtab=new int [max_size*2];
        for (int i = 0; i < max_size; i++)
        {
            newtab[i]=tab[i];
        }
        max_size=max_size*2;
        delete [] tab;
        tab=newtab;
        //return;
    }
    tab[size]=x;
    size+=1;
}

void Container_3::Print(void)
{
    std::cout << "#Zawartosc obiektu:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << tab[i] << ',';
    }
    std::cout << '\n';
}

int Container_3::Size(void)
{
    return size;
}

void Container_3::Clear(void)
{
    size=0;
}
