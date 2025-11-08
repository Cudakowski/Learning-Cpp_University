
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>


class Product
{
private:
    int type;
    int num;
public:
    /**
     * @brief Construct a new Product object
     * 
     * New product has given type and given number
     * 
     * @param type Product type
     * @param num Number of products
     */
    Product(int type, int num);


    /**
     * @brief Prints contents of Product
     * 
     * Function pronts contents of the Product object
     * 
     */
    void Print();

    /**
     * @brief Set the number of products
     * 
     * Function sets new number of products
     * 
     * @param x New number of products
     */
    void SetCard(int x);
};

#endif
