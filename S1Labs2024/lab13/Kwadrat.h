#ifndef KWADRAT_H
#define KWADRAT_H

#include "Figura.h"
#include <iostream>

class Kwadrat : public Figura {

public:
    /**
     * @brief print type
     * 
     * Function prints type of the kwadrat object
     * 
     * @return void ; returns nothing
     * 
     */
    void Rysuj() const override;
};

#endif


