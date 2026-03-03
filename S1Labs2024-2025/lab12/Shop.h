#ifndef SHOP_H
#define SHOP_H

#include <iostream>
#include "Product.h"

class Shop
{
private:
    Product data[10]{};
    int count{};
public:
    /**
     * @brief Prints contents of a class
     * 
     * operator delivers contents of the shop to the stream object which prints them
     * 
     * @param stream stream object
     * @param shop class to be printed
     * @return std::ostream& , the stream
     */
    friend std::ostream& operator<<(std::ostream& stream, const Shop& shop);

    /**
     * @brief Remove one product class
     * 
     * Function decrements the count variable by one to indicate that the newest product was removed.
     * 
     * @return void , returns nothing
     */
    void Remove();

    /**
     * @brief Add one product class
     * 
     * Function adds given producty to shop's data and increases count.
     * 
     * @param prod the product to add
     * @return void , returns nothing
     */
    void Add(Product prod);

    /**
     * @brief Get the n'th product from the shop's data
     * 
     * Function returns reference to the product hold in shop class at given index
     * 
     * @param x product's index
     * @return Product& reference to the wanted product
     */
    Product& operator[](int x);

    /**
     * @brief returns shop class with incremented count of all products by given amount
     * 
     * Function creates temporaty shop object, then increments count of all the it's products by given amount 
     * and then returns it.
     * 
     * @param x amount to increment by
     * @return Shop , the incremented new shop object
     */
    Shop operator+(int x);

    /**
     * @brief returns shop class with decremented count of all products by given amount
     * 
     * Function creates temporaty shop object, then decrements count of all the it's products by given amount 
     * and then returns it. Decrementation caps at zero.
     * 
     * @param x amount to decrement by
     * @return Shop , the decremented new shop object
     */
    Shop operator-(int x);

    /**
     * @brief returns shop class with multiplied count of all products by given amount
     * 
     * Function creates temporaty shop object, then multiplies count of all the it's products by given amount 
     * and then returns it.
     * 
     * @param x amount to multiply by
     * @return Shop , the new shop object after multiplication
     */
    Shop operator*(int x);

    /**
     * @brief Clreas all contents
     * 
     * Function sets count to zero indicating that shop object holds no product objects.
     * 
     * @return void , returns nothing
     */
    void Clear();

    /**
     * @brief assignment operator
     * 
     * Operator copies count and contents of the data table to the new object
     * 
     * @param s the object to be copied
     * @return Shop& reference to the copied object
     */
    Shop& operator=(const Shop &s);
};





#endif
