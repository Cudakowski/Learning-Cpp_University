#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    int * _grades;
    int _n;
    std::string _name;
public:
    /**
     * @brief konstruktor alokuje tablice n ocen
     * 
     * Konstruktor alokuje n ocen o wartosciach z tablicy grades
     * 
     * @param[in] grades oceny do skopiowania do zaalokowanej pamieci
     * @param[in] n ilosc ocen
     * @param[in] name nazwa studenta
     * 
     */
    Student(int * grades, int n,std::string name);
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



    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


    /**
     * @brief Zwroc oceny
     * 
     * Funkcja zwraca wskaznik do tablicy ocen. Nie alokuje nowej pamieci.
     * 
     * @return int* wskaznik do tablicy ocen
     */
    int * GetGrades();

    /**
     * @brief Zwroc nazwe studenta
     * 
     * Fukcja zwracan nazwe danego studenta
     * 
     * @return std::string nazwa studenta
     */
    std::string GetName();

    /**
     * @brief kopiuj dane z innego obiektu
     * 
     * Funkcja kopiuje dane z innego obiektu. Alokuje dynamicznie pamiec dla tablicy ocen, a potem kopiuje wartosci.
     * 
     * @param[in] s obiekt z ktorego kopiowane sa wartosci
     * 
     * @return void nic nie zwraca
     */
    void Copy(Student & s);

    /**
     * @brief move constructor
     * 
     * Constructor kopiuje dane z podanego obiektu jednoczesnie usuwajac u niego dane.
     * Nie alokuje nowej pamieci dla tablicy ocen. Kopiuje wskaznik i dla podanego obiektu przypisuje nullptr.
     * 
     * @param[in] s obiekt z ktorego przenoszone sa wartosci
     */
    Student(Student&& s);
};

#endif
