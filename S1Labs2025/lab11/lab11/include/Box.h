#ifndef BOX_H
#define BOX_H

#include "Item.h"

class Box
{
private:
    int _count; 
    int _weight;
    int _volume;
public:

    /**
     * @brief Konstruuje pudelko z podanymi danymi
     * 
     * Konstruktur inicjalizuje zmienne obiektu za pomoca wartosci podanego przedmiotu. Zaczyna liczenie od 1.
     * 
     * @param[in] item inicjalizuje wage i objetosc za pomoca danych z tego przedmiotu
     */
    Box(Item item);

    /**
     * @brief Dodaj parametry przedmiotu
     * 
     * Funkcja dodaje parametry przedmiotu do parametrow pudelka i inkrementuje liczbe przedmiotow
     * 
     * @param[in] item przedniot z ktorego wartosci wagi i obletosci sa dodawane do pudelka
     * 
     * @return void, nic nie zwraca
     */
    void AddItem(Item item);

    /**
     * @brief Drukuj zawartosc
     * 
     * Funkcja drukuje zawartosc pudelka w przyjaznym formacie
     * 
     * @return void, nic nie zwraca
     */
    void Presentation();

    /**
     * @brief zwraca wage
     * 
     * Funkcja zwaraca wage pudelka
     * 
     * @return int, waga pudelka
     */
    int getW();

    /**
     * @brief zwraca objetosc
     * 
     * Funkcja zwaraca objetosc pudelka
     * 
     * @return int, objetosc pudelka
     */
    int getV();
};



#endif
