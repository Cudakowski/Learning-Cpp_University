#include "Container_3.h"

Container_3::Container_3(int x) : _size{} ,_maxSize{x} 
{
    _tab=new int [x];
}

Container_3::~Container_3()
{
    if(_tab)
        delete [] _tab;
}


int Container_3::Delete()
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

bool Container_3::IsEmpty()
{
    return _size==0;
}

bool Container_3::IsFull()
{
    return _size==_maxSize;
}

void Container_3::Add(int x)
{
    if(_size>=_maxSize)
    {
        //std::cout<<"#BLAD: Obiekt zapelniony\n";
        _maxSize*=2;
        int *temp=new int [_maxSize];
        for(int i{} ; i<_size;i++)
        {
            temp[i]=_tab[i];
        }
        delete [] _tab;

        _tab=temp;
        //return;
    }

    _tab[_size]=x;
    _size++;
}

void Container_3::Print()
{
    std::cout<<"#Zawartosc obiektu:\n";
    for(int i{} ; i<_size;i++)
    {
        std::cout<<_tab[i]<<',';
    }
    std::cout<<'\n';
}

int Container_3::Size()
{
    return _size;
}

void Container_3::Clear()
{
    _size=0;
}
