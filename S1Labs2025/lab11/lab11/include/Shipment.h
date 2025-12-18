#ifndef SHIPMENT_H
#define SHIPMENT_H

#include "Pallet.h"

class Shipment
{
    
private:
    int _count; 
    int _weight;
    int _volume;
public:
    /**
     * @brief Konstruuje dostawe z podanymi danymi
     * 
     * Konstruktur inicjalizuje zmienne obiektu za pomoca wartosci podanego pudelka.
     * 
     * @param[in] box pudelko z ktorego sa pobierane dane
     */
    Shipment(Box box);

    /**
     * @brief Konstruuje dostawe z podanymi danymi
     * 
     * Konstruktur inicjalizuje zmienne obiektu za pomoca wartosci podanego przedmiotu.
     * 
     * @param[in] item przedmiot z ktorego sa pobierane dane
     */
    Shipment(Item item);

    /**
     * @brief Konstruuje dostawe z podanymi danymi
     * 
     * Konstruktur inicjalizuje zmienne obiektu za pomoca wartosci podanej palety.
     * 
     * @param[in] pal paleta z ktorej sa pobierane dane
     */
    Shipment(Pallet pal);

    /**
     * @brief Drukuj zawartosc
     * 
     * Funkcja drukuje zawartosc dostawy w przyjaznym formacie
     * 
     * @return void, nic nie zwraca
     */
    void Presentation();
    
};



#endif
