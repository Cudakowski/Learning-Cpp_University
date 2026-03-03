#include "Shop.h"


Shop::Shop() : _count(0), _tab(nullptr)
{
    
}

Shop::Shop(const Shop &sh) : _count(sh._count)
{
    _tab= new Product[_count];
    for(int i{};i<_count;++i)
    {
        _tab[i]=sh._tab[i];
    }
}

std::ostream &operator<<(std::ostream &os, Shop const &shop)
{
    os << "---\n";
    os << "# Zawartosc/sklad:\n";
    for(int i{}; i<shop._count ; ++i )
    {
        os << shop._tab[i];
    }
    os << "---\n";
    
    return os;
}

void Shop::Remove()
{
    if(_count<1)
    {
        std::cout << "BLAD: Pusto !\n";
        return;
    }

    _count-=1;
}

void Shop::Add(Product a)
{
    _count+=1;
    Product *temp=new Product[_count];
    for(int i{}; i<_count-1 ; ++i )
    {
        temp[i]=_tab[i];
    }
    temp[_count-1]=a;

    if(_tab)
        delete [] _tab;
    
    _tab = temp;
    
}


Product &Shop::operator[](int a)
{
    return _tab[a];
}

Shop Shop::operator-(int a)
{
    Shop x=*this;
    for(int i{};i<x._count;++i)
    {
        x[i]=x[i]-a;
    }
    return x;
}

Shop Shop::operator+(int a)
{
    Shop x=*this;
    for(int i{};i<x._count;++i)
    {
        x[i]=x[i]+a;
    }
    return x;
}

Shop Shop::operator*(int a)
{
    Shop x=*this;
    for(int i{};i<x._count;++i)
    {
        x[i]=x[i]*a;
    }
    return x;
}

Shop Shop::operator+(Shop sh)
{
    Shop x=*this;
    for(int i{};i<sh._count;++i)
    {
        x.Add(sh[i]);
    }
    return x;
}

void Shop::Clear()
{
    _count=0;
    if(_tab)
        delete [] _tab;
    _tab=nullptr;
}

Shop &Shop::operator=(Shop sh)
{
    _count = sh._count;
    _tab =new Product[_count];
    for(int i{}; i<_count ; ++i )
    {
        _tab[i]=sh._tab[i];
    }

    return *this;
}
