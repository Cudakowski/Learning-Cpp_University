
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>


class Product 
{
    friend class Shop;
    friend int Compare(Product prod1,Product prod2);
private:
    int type{};
    int num{};
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
     * @brief Construct a new Product object
     * 
     * New product has given type and number is equal to zero
     * 
     * @param type Product type
     */
    Product(int type);


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

    

    /**
     * @brief Return type
     * 
     * Convertion to int returns type
     * 
     * @return type
     */
    operator int();


    /**
     * @brief return string of contents
     * 
     * Function retuns string of contents in format: <typ=[type], ilosc=[num]>
     * 
     * @return std::string, described contents
     */
    std::string ToString();


    /**
     * @brief return string of contents
     * 
     * Convertion retuns string of contents in format: <typ=[type], ilosc=[num]>
     * 
     * @return std::string, described contents
     */
    operator std::string();

    
};


/**
 * @brief compare number of two products
 * 
 * Function returns 1 if number of first product is greater.
 * Function returns -1 if number of second product is greater.
 * Function returns 0 if number of both products is equal.
 * 
 * 
 * @param prod1 fisrt product
 * @param prod2 second product
 * @return int, comparison rezult 1,0,-1
 */
int Compare(Product prod1,Product prod2);



#endif
