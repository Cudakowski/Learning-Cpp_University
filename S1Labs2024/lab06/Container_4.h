#ifndef CONTAINER_4_H
#define CONTAINER_4_H

#include <iostream>
#include <vector>

class Container_4
{
private:
    //int max_size{1};
    //int size{0};
    std::vector<int> tab;
public:

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
     * Function always returns 0
     * 
     * @returns returns 0
     */
    int IsFull(void);

    /**
     * @brief Adds element to container
     * 
     * Function adds provided element to container
     * and treats as the newest.
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
     * @brief Clears container adn frees memory
     * 
     * Funtions deletes all contents of a container
     *  and frees all memory.
     * 
     * @returns Return type void; Returns nothing
     */
    void Clear(void);
};




#endif
