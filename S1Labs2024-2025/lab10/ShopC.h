#ifndef SHOPC_H
#define SHOPC_H


#include <vector>
#include <iostream>
#include "Product.h"



class ShopC
{
private:
    Product *tab=nullptr;
    //int n{10};
    int ile{};
public:
    /**
     * @brief Construct a new ShopC object
     * 
     * New shop has no products
     * 
     */
    ShopC();

    ShopC(ShopC& other);

    ShopC& operator=(const ShopC& other);

    ShopC& operator=(ShopC&& other);


    ~ShopC();

    /**
     * @brief Move Construct a new ShopC object
     * 
     * @param other 
     */

    ShopC(ShopC&& other);


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


};

#endif




