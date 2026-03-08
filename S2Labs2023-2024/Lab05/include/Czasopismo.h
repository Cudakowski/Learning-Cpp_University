#ifndef CZASOPISMO_H
#define CZASOPISMO_H

#include <string>
#include "IKsiazka.h"

class Czasopismo: public IKsiazka
{
private:
    
public:
    Czasopismo(std::string _tytul,std::string _autor,int _id,std::string _gatunek): 
        IKsiazka(_tytul,_autor,_id,_gatunek) {}
};



#endif
