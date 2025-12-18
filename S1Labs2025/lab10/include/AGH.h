#ifndef AGH_H
#define AGH_H

#include <string>
#include <iostream>



class AGH {
private:
    static std::string _name;
    static std::string _name2;
    AGH();
    static AGH * _ptr;
    static AGH * _ptr2;
    static int _n;
public:

    /**
     * @brief Utworz klase
     * 
     * Funkcja tworzy klase alokujac na nia pamiec jezeli inny obiekt tej klasy juz jej nie zaolokowal.
     * Dziala tak odpowiednio dla dwoch obiektow tej klasy. Co drugie wywolanie odnosi sie do drugiego obiektu.
     * 
     * @return AGH* - zwraca wskaznik do klasy. Zwraca zawsze wskaznik do jednego obiektu tej klasy.
     */
    static AGH * Create();

    /**
     * @brief Ustaw nazwe uczelni
     * 
     * Ustawia nazwe uczelni AGH. Dwie nazwy sa dzielone przez obiekty tej klasy. Osobna nazwa dla utworzonych jako parzyste i nieparzyste.
     * 
     * @param[in] str - nazwa do ustawienia
     * @return void - nic nie zwraca
     * 
     */
    void SetName(std::string str);

    /**
     * @brief wydrukuj zawartosc
     * 
     * Funkcja drukuje nazwe uczelni
     * 
     * @return void - nic nie zwraca
     * 
     */
    void Presentation();

    /**
     * @brief zwalnia pamiec
     * 
     * Funkcja zwalnia pamiec po obu obiektach.
     * 
     * @return void - nic nie zwraca
     */
    static void Delete();
};



#endif
