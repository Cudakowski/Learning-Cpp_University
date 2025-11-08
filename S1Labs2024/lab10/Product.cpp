#include "Product.h"


Product::Product()
{

}

Product::Product(int typ, int numer)
{
    type=typ;
    num=numer;
}


Product::Product(int typ)
{
    type=typ;
}


void Product::Print()
{
    std::cout <<"typ: "<<type<<", ilosc sztuk: "<<num<<'\n';
}

void Product::SetCard(int x)
{
    num=x;
}



Product::operator int()
{
    return type;
}

std::string Product::ToString()
{
    return "<typ="+std::to_string(type)+", ilosc="+std::to_string(num)+'>';
}

Product::operator std::string()
{
    return "<typ="+std::to_string(type)+", ilosc="+std::to_string(num)+'>';
}

int Compare(Product prod1,Product prod2)
{
    if (prod1.num>prod2.num)
    {
        return 1;
    }

    if (prod1.num<prod2.num)
    {
        return -1;
    }

    return 0;
    
}
