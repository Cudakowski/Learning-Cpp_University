#ifndef PALLET_H
#define PALLET_H

#include "Box.h"

class Pallet
{
private:
    int _count; 
    int _weight;
    int _volume;
public:
    /**
     * @brief Konstruuje palete z podanymi danymi
     * 
     * Konstruktur inicjalizuje zmienne obiektu za pomoca wartosci podanego pudelka. Zaczyna liczenie od 1.
     * 
     * @param[in] box inicjalizuje wage i objetosc za pomoca danych z tego pudelka
     */
    Pallet(Box box);

    /**
     * @brief Dodaj parametry pudelka
     * 
     * Funkcja dodaje parametry pudelka do parametrow palety i inkrementuje liczbe pudelek
     * 
     * @param[in] box pudelko z ktorego wartosci wagi i obletosci sa dodawane do palety
     * 
     * @return void, nic nie zwraca
     */
    void AddBox(Box box);


    /**
     * @brief Drukuj zawartosc
     * 
     * Funkcja drukuje zawartosc palety w przyjaznym formacie
     * 
     * @return void, nic nie zwraca
     */
    void Presentation();

    /**
     * @brief zwraca wage
     * 
     * Funkcja zwaraca wage palety
     * 
     * @return int, waga palety
     */
    int getW();

    /**
     * @brief zwraca objetosc
     * 
     * Funkcja zwaraca objetosc palety
     * 
     * @return int, objetosc palety
     */
    int getV();
};



#endif
