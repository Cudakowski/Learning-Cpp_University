#include "Shop.h"


std::ostream& operator<<(std::ostream& stream, const Shop& shop)
{
    stream << "---\n"
    "# Zawartosc/sklad:\n";

    for (size_t i = 0; i < shop.count; i++)
    {
        stream << shop.data[i];
    }
    

    stream << "---\n";
    
    return stream;
}

void Shop::Remove()
{
    if(count<1)
    {
        std::cout<<"BLAD: Pusto !\n";
    }
    else
    {
        --count;
    }
}

void Shop::Add(Product prod)
{
    data[count]=prod;
    ++count;
}

Product& Shop::operator[](int x)
{
    return data[x];
}

Shop Shop::operator+(int x)
{
    Shop temp=*this;
    for (size_t i = 0; i < count; i++)
    {
        temp.data[i]=temp.data[i]+x;
    }
    return temp;
}
Shop Shop::operator-(int x)
{
    Shop temp=*this;
    for (size_t i = 0; i < count; i++)
    {
        temp.data[i]=temp.data[i]-x;
    }
    return temp;
}
Shop Shop::operator*(int x)
{
    Shop temp=*this;
    for (size_t i = 0; i < count; i++)
    {
        temp.data[i]=temp.data[i]*x;
    }
    return temp;
}

void Shop::Clear()
{
    count=0;
}

Shop& Shop::operator=(const Shop &s)
{
    count=s.count;
    for (size_t i = 0; i < count; i++)
    {
        data[i]=s.data[i];
    }
    return *this;
}
