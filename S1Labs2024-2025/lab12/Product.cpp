#include "Product.h"

Product::Product(int t, int i)
{
    type=t;
    ile=i;
}



std::ostream& operator<<(std::ostream& stream, const Product& product)
{
    stream << "typ: "<<product.type<<", ilosc sztuk: "<<product.ile<<'\n';
    return stream;
}

Product& Product::operator++()
{
    ++ile;
    return *this;
}

Product Product::operator++(int x)
{
    Product temp=*this;
    ++ile;
    return temp;
}

Product& Product::operator--()
{
    if(ile)
        --ile;
    return *this;
}

Product Product::operator--(int x)
{
    if(ile)
    {
        Product temp=*this;
        --ile;
        return temp;
    }
    
    return *this;
}

Product Product::operator+(int x)
{
    Product temp=*this;
    temp.ile+=x;
    return temp;
}

Product Product::operator-(int x)
{
    Product temp=*this;
    if(temp.ile<x)
    {
        temp.ile=0;
        return temp;
    }

    temp.ile-=x;
    return temp;
}

Product Product::operator*(int x)
{
    Product temp=*this;
    temp.ile*=x;
    return temp;
}
