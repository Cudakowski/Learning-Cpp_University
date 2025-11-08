#ifndef SHOP_H
#define SHOP_H


#include <vector>
#include <iostream>
#include "Product.h"



class Shop
{
private:
    std::vector<Product> tab;
public:
    /**
     * @brief Construct a new Shop object
     * 
     * New shop has no products
     * 
     */
    Shop();

    /**
     * @brief Construct a new Shop object
     * 
     * New shop has one given product
     * 
     * @param prod Given product
     */
    Shop(Product prod);

    /**
     * @brief Construct a new Shop object
     * 
     * New shop has two given products
     * 
     * @param prod1 First given product
     * @param prod2 Second given product
     */
    Shop(Product prod1,Product prod2);

    /**
     * @brief Construct a new Shop object
     * 
     * New shop object has given number of products from table of pointers to products.
     * It copies the products. It doesn't store adresses.
     * 
     * @param n Nuber of products to copy
     * @param prodTab Table of pointers to products
     */
    Shop(int n,Product **prodTab);

    /**
     * @brief Construct a new Shop object
     * 
     * New shop has all the contents of the given shop copied to itself.
     * 
     * @param prodV Shop to copy products from
     */
    Shop(std::vector<Product> prodV);


    /**
     * @brief Prints contents of shop
     * 
     * Function prints all products of the shop 
     * 
     */
    void Print();

    /**
     * @brief Removes newest product
     * 
     * Function removes furthest product in the list from the shop
     * 
     */
    void Remove();

    /**
     * @brief Add product to shop
     * 
     * Function adds one product to the end of the shop
     * 
     * @param prod Product to add to the shop
     */
    void Add(Product prod);

    /**
     * @brief Remove all products
     * 
     * Function removes all products from the shop
     * 
     */
    void Clear();


    /**
     * @brief Returns sum of quantity of included products
     * 
     * Convertion returns sum of quantity of included products
     * 
     * @return int, sum of numbers of all products
     */
    operator int();


};

#endif




