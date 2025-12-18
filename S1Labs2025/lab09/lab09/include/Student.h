#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student {
private:
    int * _grades;
    int _n;
public:
    /**
     * @brief konstruktor alokuje tablice n ocen
     * 
     * Konstruktor alokuje n ocen o wartosciach z tablicy grades
     * 
     * @param[in] grades oceny do skopiowania do zaalokowanej pamieci
     * @param[in] n ilosc ocen
     * 
     */
    Student(int * grades, int n);
    /**
     * @brief zwalnia dynamicznie zaalokowana pamiec
     * 
     * Destruktor zwalnia dynamicznie zaalokowana pamiec
     */
    ~Student();

    /**
     * @brief ustaw i-ta ocene na x
     * 
     * Funkcja ustawia ocene na pozycji i-tej na wartosc x
     * @param[in] i - indeks oceny do napisania
     * @param[in] x - nowa wartosc oceny
     * @return void - nic nie zwraca
     */
    void Set(int i, int x);

    /**
     * @brief zwroc ocene na i-tej pozycji
     * 
     * Funkcja zwraca ocene znajdujaca sie na i-tej pozycji w obiekcie
     * 
     * @param[in] i - indeks szukanej oceny
     * @return int wartosc i-tej oceny
     */
    int Get(int i);

    /**
     * @brief Konstruktor kopiujacy
     * 
     * Konstruktor alokuje pamiec i kopiuje dane z podanego obiektu
     * @param[in] s - obiekt z ktorego sa kopiowane dane
     * 
     */
    Student(const Student &s);
};

#endif
