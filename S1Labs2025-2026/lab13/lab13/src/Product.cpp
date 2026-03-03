#include "Product.h"

Product::Product(int type, int count) : _type(type),  _count(count)
{

}

Product::Product() : _type(0),  _count(0)
{

}


std::ostream &operator<<(std::ostream &os, Product const &prod)
{
    return os << "typ: "<< prod._type <<", ilosc sztuk: "<< prod._count << '\n';
}

Product Product::operator+(int a)
{
    //this->_count+=a;
    return Product(this->_type,this->_count+a);
}

Product Product::operator-(int a)
{
    if(this->_count<a)
    {
        return Product(this->_type,0);
    }
    else
    {
        return Product(this->_type,this->_count-a);
    }
}

Product Product::operator*(int a)
{
    //this->_count+=a;
    return Product(this->_type,this->_count*a);
}

Product operator*(int a, Product const &prod)
{
    return Product(prod._type,prod._count*a);
}
