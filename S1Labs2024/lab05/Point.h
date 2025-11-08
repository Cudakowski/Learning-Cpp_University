#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>

class Point
{
private:
    std::string name;
    double X{0};
    double Y{0};
public:
/**
 * @brief Podstawowy konstruktor klasy
 * 
 * Tworzy klasę Point o parametrach name="", X=0, Y=0
 * i wypisuje komunikat
 */
    Point();
/**
 * @brief Konstruktor klasy przyjmujący nazwę
 *
 * Tworzy klasę Point o parametrach name=newName, X=0, Y=0
 * i wypisuje komunikat
 * 
 * @param newName nazwa punktu
 */
    Point(std::string newName);
/**
 * @brief Konstruktor klasy przyjmujący nazwę i koordynaty
 *
 * Tworzy klasę Point o parametrach name=newName, X=x, Y=y
 * i wypisuje komunikat
 * 
 * @param newName nazwa punktu
 * @param X koordynat X
 * @param Y koordynat Y
 */
    Point(std::string newName,double x, double y);
/**
 * @brief Destruktor klasy 
 *
 * Przy dekonstrukcji klasy Point wypisuje komunikat
 */
    ~Point();

    /**
     * @brief Wypisanie danych klasy
     * 
     * Funckja wypisywuje dane klasy Point
     * @returns nic nie zwraca
     */
    void Presentation(void);
    /**
     * @brief Ustawienie nazwy klasy
     * 
     * Funckja ustawia daną name klsay Point na podany string
     * @param newName nowa nazwa do ustawienia
     * @returns nic nie zwraca
     */
    void SetName(std::string newName);
    /**
     * @briefWUstawienie koordynatu X klasy
     * 
     * Funckja ustawia daną X klasy Point na podaną wartość
     * @param x nowa wartość koordynatu X
     * @returns nic nie zwraca
     */
    void SetX(double x);
    /**
     * @brief Ustawienie koordynatu Y klasy
     * 
     * Funckja ustawia daną Y klasy Point na podaną wartość
     * @param y nowa wartość koordynatu Y
     * @returns nic nie zwraca
     */
    void SetY(double y);
    /**
     * @brief Pobieanie nazwy klasy
     * 
     * Funkcja zwraca nazwę klasy 
     * @returns zwraca nazwę klasy o typie std::string
     */
    std::string GetName(void);
    /**
     * @brief Pobieanie koordynatu X
     * 
     * Funkcja zwraca wartość koordynatu X klasy Point
     * @returns zwraca wartość koordynaty X typu double
     */
    double GetX(void);
    /**
     * @brief Pobieanie koordynatu Y
     * 
     * Funkcja zwraca wartość koordynatu Y klasy Point
     * @returns zwraca wartość koordynaty Y typu double
     */
    double GetY(void);
};



#endif