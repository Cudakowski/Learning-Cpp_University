#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product {
friend std::ostream &operator<<(std::ostream &os, Product const &prod);
friend Product operator*(int a, Product const &prod);
private:
    int _type;
    int _count;
public:
    Product(int type, int count);
    Product();
    //~Product();

    Product operator+(int a);
    Product operator-(int a);
    Product operator*(int a);

};


std::ostream &operator<<(std::ostream &os, Product const &prod);
Product operator*(int a, Product const &prod);


#endif
