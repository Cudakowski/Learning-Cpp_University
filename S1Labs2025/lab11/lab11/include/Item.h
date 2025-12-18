#ifndef ITEM_H
#define ITEM_H

#include <iostream>

class Item
{
private:
    std::string _name;
    int _weight;
    int _volume;
public:
    /**
     * @brief Konstruuje przedmiot z podanymi danymi
     * 
     * Konstruktur inicjalizuje zmienne obiektu za pomoca podanych wartosci.
     * 
     * @param[in] name nazwa przedmiotu
     * @param[in] weight waga przedmiotu
     * @param[in] volume objetosc przedmiotu
     */
    Item(std::string name, int weight, int volume);

    /**
     * @brief Drukuj zawartosc
     * 
     * Funkcja drukuje zawartosc przedmiotu w przyjaznym formacie
     * 
     * @return void, nic nie zwraca
     */
    void Presentation();

    /**
     * @brief zwraca wage
     * 
     * Funkcja zwaraca wage przedmiotu
     * 
     * @return int, waga przedmiotu
     */
    int getW();

    /**
     * @brief zwraca objetosc
     * 
     * Funkcja zwaraca objetosc przedmiotu
     * 
     * @return int, objetosc przedmiotu
     */
    int getV();
};



#endif
