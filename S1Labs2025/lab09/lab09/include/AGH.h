#ifndef AGH_H
#define AGH_H

#include <string>
#include <iostream>



class AGH {
private:
    static std::string _name;
    AGH();
    static AGH * _ptr;
public:

    /**
     * @brief Utworz klase
     * 
     * Funkcja tworzy klase alokujac na nia pamiec jezeli inny obiekt tej klasy juz jej nie zaolokowal.
     * 
     * @return AGH* - zwraca wskaznik do klasy. Zwraca zawsze wskaznik do jednego obiektu tej klasy.
     */
    static AGH * Create();

    /**
     * @brief Ustaw nazwe uczelni
     * 
     * Ustawia nazwe uczelni AGH. nazwa jest dzielona przez wszytskie obiekty tej klasy.
     * 
     * @return void - nic nie zwraca
     * 
     */
    void SetName(std::string str);

    /**
     * @brief wydrukuj zawartosc
     * 
     * Funkcja drukuje nazwe uczelni
     * 
     * @param[in] str - nazwa do ustawienia
     * @return void - nic nie zwraca
     * 
     */
    void Presentation();

    /**
     * @brief zwalnia pamiec
     * 
     * Funkcja zwalnia pamiec po obiekcie
     * 
     * @return void - nic nie zwraca
     */
    static void Delete();
};



#endif
