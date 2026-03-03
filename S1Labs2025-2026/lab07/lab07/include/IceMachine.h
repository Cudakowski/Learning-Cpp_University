#ifndef ICE_MACHINE_H
#define ICE_MACHINE_H

#include <iostream>

class IceMachine 
{
    friend class Service;

    private:
        int id;
        bool state;
        double capacity;
        double consumption;
        double powder;
    public:
        /**
         * @brief Ustaw ID
         * 
         * Ustawia ID obiektu na podana liczbe calkowita
         * 
         * @param[in] x nowe id
         * @return void; nic nie zwraca
         */
        void SetID(int x);

        /**
         * @brief Ustaw Stan
         * 
         * Ustawia stan obiektu na podana wartosc bool
         * 
         * @param[in] x nowy stan
         * @return void; nic nie zwraca
         */
        void SetState(bool x);

        /**
         * @brief Ustaw pojemnosc
         * 
         * Ustawia pojemnosc obiektu na podana wartosc double
         * 
         * @param[in] x nowa pojemnosc
         * @return void; nic nie zwraca
         */
        void SetCapacity(double x);

        /**
         * @brief Ustaw zuzycie
         * 
         * Ustawia zuzycie obiektu na podana wartosc double
         * 
         * @param[in] x nowe zuzycie
         * @return void; nic nie zwraca
         */
        void SetConsumption(double x);

        /**
         * @brief Ustaw ilosc proszku
         * 
         * Ustawia ilosc proszku w obiekcie na podana wartosc double
         * 
         * @param[in] x nowa ilosc proszku
         * @return void; nic nie zwraca
         */
        void SetPowder(double x);

        /**
         * @brief Wyswietl parametry obiektu
         * 
         * Wyswietla wszystkie parametry obiektu w konsoli czyli kolejno: 
         * ID, stan, pojemnosc, konsumpcje i ilosc proszku
         * 
         * 
         * @return void; nic nie zwraca
         */
        void Presentation();

        /**
         * @brief Wytwoz lody z proszku
         * 
         * Wykorzystuje proszek, zgodnie z zuzyciem na produkcje lodow. 
         * Gdy nie wystarcza proszku do produkcji oczekiwanej sztuk 
         * lodow produkuje ich tyle ile moze i wykorzystuje caly proszek.
         * 
         * @param[in] x oczekiwana ilosc lodow do wytwrzenia
         * @return void; nic nie zwraca
         */
        void Make(int x);

        /**
         * @brief Uruchom maszyne
         * 
         * Ustawian stan obiektu na true
         * 
         * 
         * @return void; nic nie zwraca
         */
        void Start();

        /**
         * @brief Dosyp proszku
         * 
         * Dosypuje proszek do maszyny. Jezeli podana ilosc proszku jest wieksza niz roznica pojemnosci 
         * i obecnego proszku dosypywany jest proszek do pelna.
         * 
         * @param[in] x proszek do dosypania
         * @return void; nic nie zwraca
         */
        void Reload(double x);

        /**
         * @brief Wylacz maszyne
         * 
         * Ustawian stan obiektu na false
         * 
         * @return void; nic nie zwraca
         */
        void Stop();
};





#endif
