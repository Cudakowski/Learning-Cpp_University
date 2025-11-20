#ifndef OKRAG_H
#define OKRAG_H

#include "Figura.h"
#include <iostream>

class Okrag : public Figura {

public:
    /**
     * @brief print type
     * 
     * Function prints type of the Okrag object
     * 
     * @return void ; returns nothing
     * 
     */
    void Rysuj() const override;
    
};

#endif

