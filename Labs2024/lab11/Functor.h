#ifndef FUNCTOR_H
#define FUNCTOR_H

#include <iostream>

class Functor
{
private:
    int mniejsze{};
    int rowne{};
    int wieksze{};
public:

    /**
     * @brief zwroc a<b oraz zlicz w jakiej a i b sa relacji 
     * 
     * Funkcja sprawdza warunek a<b i zwraca wartość bool porównania.
     * Zlicza też ile razy a bylo mniejsze, rowne badz wieksze od b.
     * 
     * @param a pierwsza liczba do porownania
     * @param b druga liczba do porownania
     * @return true kiedy a<b to prawda
     * @return false kiedy a<b to nie prawda
     */
    bool operator()(int a, int b);

    /**
     * @brief Wypisz statystyki nierownosci
     * 
     * Funkcja wypisuje dane dotyczace ile razy a bylo mniejsze, rowne, badz wieksze od b.
     * 
     * @return nic nie zwraca
     */
    void wypiszStatystyki();
};






#endif
