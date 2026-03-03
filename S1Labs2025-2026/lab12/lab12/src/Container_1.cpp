#include "Container_1.h"

Container_1::Container_1() : _tab{}, _size{} {}

int Container_1::Delete()
{
    int ret{};

    if(_size>0)
    {
        _size--;
        ret= _tab[_size];
        for(int i{} ; i<_size;i++)
        {
            _tab[i]=_tab[i+1];
        }
    }
    else
    {
        std::cout<<"#BLAD: Obiekt pusty\n";
    }

    return ret;
}

bool Container_1::IsEmpty()
{
    return _size==0;
}

bool Container_1::IsFull()
{
    return _size==4;
}

void Container_1::Add(int x)
{
    if(_size>=4)
    {
        std::cout<<"#BLAD: Obiekt zapelniony\n";
        return;
    }

    _tab[_size]=x;
    _size++;
}

void Container_1::Print()
{
    std::cout<<"#Zawartosc obiektu:\n";
    for(int i{} ; i<_size;i++)
    {
        std::cout<<_tab[i]<<',';
    }
    std::cout<<'\n';
}

int Container_1::Size()
{
    return _size;
}

void Container_1::Clear()
{
    _size=0;
}
