#ifndef SHOP_H
#define SHOP_H

#include "Product.h"

#include <iostream>
#include <vector>

class Shop{
friend std::ostream &operator<<(std::ostream &os, Shop const &shop);
private:
    //std::vector<Product> vec;
    int _count;
    Product *_tab;

public:
    Shop();
    Shop(const Shop &sh);
    void Remove();
    void Add(Product a);
    Product &operator[](int a);
    Shop &operator=(Shop sh);
    Shop operator-(int a);
    Shop operator+(int a);
    Shop operator*(int a);
    Shop operator+(Shop sh);
    void Clear();


};



std::ostream &operator<<(std::ostream &os, Shop const &shop);


#endif
