#include "Figury.h"

void Figury::DodajFigure(Figura * x)
{
    vec.push_back(x);
}

void Figury::Rysuj() const
{
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i]->Rysuj();
    }
    
}
