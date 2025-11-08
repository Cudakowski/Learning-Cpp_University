#ifndef CONTAINER_3_H
#define CONTAINER_3_H

#include <iostream>

class Container_3
{
private:
    int max_size{1};
    int size{0};
    int *tab{nullptr};
public:
    /**
     * @brief constructor 
     * 
     * Allocates memory for provided number of elements
     * 
     * @param nSize number of elements
     */
    Container_3(int nSize);
    /**
     * @brief destructor frees memory
     * 
     * Default destructor frees allocated memory
     */
    ~Container_3();

    /**
     * @brief Deletes newest entry
     * 
     * Function deletes newest number in the list.
     * If container is empty prints error.
     * 
     * @returns Returns deleted value; if empty returns 0
     */
    int Delete(void);

    /**
     * @brief Checks if empty
     * 
     * Function returns 1 if container is empty.
     * Otherwise returns 0.
     * 
     * @returns 1 if empty, 0 otherwise
     */
    int IsEmpty(void);

    /**
     * @brief Checks if full
     * 
     * Function returns 1 if container is full.
     * Otherwise returns 0.
     * 
     * @returns 1 if full, 0 otherwise
     */
    int IsFull(void);

    /**
     * @brief Adds element to container
     * 
     * Function adds provided element to container
     * and treats as the newest. If it runs out of memory 
     * it allocates double amount of memory.
     * 
     * @param x Element to add
     * @returns Return type void; Returns nothing
     */
    void Add(int x);

    /**
     * @brief Prints contents of container
     * 
     * Function prints all contents of a container.
     * 
     * @returns Return type void; Returns nothing
     */
    void Print(void);

    /**
     * @brief Returns container size
     * 
     * Functions returns current size of a container.
     * 
     * @returns Returns container size
     */
    int Size(void);
    
    /**
     * @brief Clears container
     * 
     * Funtions deletes all contents of a container.
     * 
     * @returns Return type void; Returns nothing
     */
    void Clear(void);
};


#endif
