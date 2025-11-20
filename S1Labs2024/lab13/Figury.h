#ifndef FIGURY_H
#define FIGURY_H

#include <vector>
#include "Figura.h"

class Figury {
private:
    std::vector<Figura *> vec{};
public:
    /**
     * @brief add one object pointer to vector
     * 
     * Adds one pointer to object to vector
     * 
     * @return void ; returns nothing
     */
    void DodajFigure(Figura *);

    /**
     * @brief print all messages
     * 
     * Prints all messages for all elements
     * 
     * @return void ; returns nothing
     */
    void Rysuj() const;
};

#endif
