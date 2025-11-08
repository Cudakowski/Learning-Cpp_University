#ifndef SHOPB_H
#define SHOPB_H


#include <vector>
#include <iostream>
#include "Product.h"



class ShopB
{
private:
    Product *tab=nullptr;
    //int n{10};
    int ile{};
public:
    /**
     * @brief Construct a new ShopB object
     * 
     * New shop has no products
     * 
     */
    ShopB();

    ShopB(ShopB& other);

    ShopB& operator=(const ShopB& other);

    ~ShopB();


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




