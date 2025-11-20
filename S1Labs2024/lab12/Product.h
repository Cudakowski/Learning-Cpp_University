#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{
private:
    int type{};
    int ile{};
public:
    /**
     * @brief Construct a new Product object
     * 
     * Constructor sets the type to given type and ile to given count.
     * 
     * @param t type to set
     * @param i count to set
     */
    Product(int t, int i);

    /**
     * @brief Construct a new Product object
     * 
     * Constructor sets the type to zero and ile to zero.
     */
    Product()=default;

    /**
     * @brief Prints contents of a class
     * 
     * Operator delivers contents of the product to the stream object which prints them to the console. 
     * 
     * @param stream the stream object
     * @param product it's contents will be printed
     * @return std::ostream& ; the stream object to be delivered to the std::cout
     */
    friend std::ostream& operator<<(std::ostream& stream, const Product& product);

    /**
     * @brief Left incerementation by 1
     * 
     * Operator increments ile variable by one, then returns the object by reference.
     * 
     * @return Product& ; incremented object by reference
     */
    Product& operator++();

    /**
     * @brief Right incrementation by 1
     * 
     * Operator saves copy of object that it is used on. The provided object's variable ile is incremented by 1. 
     * Returns the copy that was made before incrementation. 
     * 
     * @param x idk, it's unused; destinguishes between right and left incrementation
     * @return Product ; not incremented copied object
     */
    Product operator++(int x);

    /**
     * @brief Left decerementation by 1
     * 
     * Operator decrements ile variable by one, then returns the object by reference.
     * If ile is zero it won't decrement.
     * 
     * @return Product& ; decremented object by reference
     */
    Product& operator--();

    /**
     * @brief Right decrementation by 1
     * 
     * Operator saves copy of object that it is used on. The provided object's variable ile is decremented by 1. 
     * Returns the copy that was made before decrementation. 
     * If ile is zero it won't decrement.
     * 
     * @param x idk, it's unused; destinguishes between right and left decrementation
     * @return Product ; not decremented copied object
     */
    Product operator--(int x);

    /**
     * @brief Add value to ile variable
     * 
     * Operator adds integer to copied object's ile variable.
     * 
     * @param x value to be added
     * @return Product ; copied given object with incremented ile variable by given value
     */
    Product operator+(int x);

    /**
     * @brief Subtract value from ile variable
     * 
     * Operator Subtracts integer from copied object's ile variable.
     * Ile variable caps at zero.
     * 
     * @param x value to be subtracted
     * @return Product ; copied given object with decremented ile variable by given value
     */
    Product operator-(int x);

    /**
     * @brief Multiply ile variable by given integer
     * 
     * Operator copies the given object and multiplies tyhe copied object's ile variable by given integer.
     * 
     * @param x multiplier
     * @return Product 
     */
    Product operator*(int x);
};




#endif
