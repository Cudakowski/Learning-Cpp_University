#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"
#include <string>
#include <vector>
#include <iostream>

class Polygon
{
private:
    std::string name;
    size_t pointCount{0};
    Point* points{nullptr};
public:
/**
 * @brief Podstawowy konstruktor klasy
 * 
 * Tworzy klasę Polygon o parametrach name="", pointCount=0, points=nullptr
 * i wypisuje komunikat
 */
    Polygon();

/**
 * @brief Konstruktor klasy przyjmujący nazwę klasy
 * 
 * Tworzy klasę Polygon o parametrach name=newName, pointCount=0, points=nullptr
 * i wypisuje komunikat
 * @param newName nazwa klasy 
 */
    Polygon(std::string newName);

/**
 * @brief Konstruktor klasy przyjmujący nazwę klasy i trzy klasy Point
 * 
 * Tworzy klasę Polygon o parametrach name=newName, pointCount=3, points[3],
 * zapisuje podane klasy Point do listy i wypisuje komunikat
 * @param newName nazwa klasy 
 * @param p1 Punkt 1.
 * @param p2 Punkt 2.
 * @param p3 Punkt 3.
 */
    Polygon(std::string newName,Point p1,Point p2,Point p3);

/**
 * @brief Konstruktor klasy przyjmujący nazwę klasy i cztery klasy Point
 * 
 * Tworzy klasę Polygon o parametrach name=newName, pointCount=4, points[4],
 * zapisuje podane klasy Point do listy i wypisuje komunikat
 * @param newName nazwa klasy 
 * @param p1 Punkt 1.
 * @param p2 Punkt 2.
 * @param p3 Punkt 3.
 * @param p4 Punkt 4.
 */
    Polygon(std::string newName,Point p1,Point p2,Point p3,Point p4);

/**
 * @brief Konstruktor klasy przyjmujący nazwę klasy, ilość i wskaźnik do tablicy punktów
 * 
 * Tworzy klasę Polygon o parametrach name=newName, pointCount=4, points[4],
 * zapisuje podane klasy Point do listy i wypisuje komunikat
 * @param newName nazwa klasy 
 * @param count ilość punktów
 * @param newPoints wskaźnik do tablicy punktów
 */
    Polygon(std::string newName,size_t count,Point *newPoints);

/**
 * @brief Destruktor klasy
 * 
 * Usuwa klasę i zwalnia pamięć tablicy points
 */
    ~Polygon();


    /**
     * @brief Wypisanie danych klasy
     * 
     * Funckja wypisywuje dane klasy Polygon
     * @returns nic nie zwraca
     */
    void Presentation(void);

    /**
     * @brief Ustawienie nazwy klasy
     * 
     * Funckja ustawia daną name klsay Polygon na podany string
     * @param newName nowa nazwa do ustawienia
     * @returns nic nie zwraca
     */
    void SetName(std::string newName);

    /**
     * @brief Pobranie
     * 
     * Funckja zwraca tablicę Pointów z danej klasie Polygon
     * @returns zwraca tablicę Pointów; wskaźnik do klasy Point
     */
    Point * GetVertices(void);

    /**
     * @brief Ustawienie wybranego punktu w poligonie
     * 
     * Funckja ustawia wartości wybranego Pointa z tablicy na podane dane. 
     * Jeżeli podany index jest wykracza poza ilość zaalokowanych punktów funkcja nic nie robi.
     * @param index index wybranego pointa (indeksowane od 1)
     * @param newName nowa nazwa wybranego Pointa
     * @param X nowa wartość koordynatu X wybranego Pointa
     * @param X nowa wartość koordynatu Y wybranego Pointa
     * @returns nic nie zwraca
     */
    void SetVertice(size_t index, std::string newName, double X, double Y);

    /**
     * @brief Ustawienie wszystkich punktów poligonu
     * 
     * Funckja ustawia wszystkie punkty poligonu na te podane za pomocą wskaźnika do Pointa alokując pamięć.
     * Ustawia także ilość Pointów na podaną. Jeżeli wcześniej były zapisane punkty, zwalnia pamięć.
     * @param count ilość Pointów w podanej tablicy
     * @param pPoints tablica pointów; wskaźnik do klasy Point
     * @returns nic nie zwraca
     */
    void SetNewVertices(size_t count,Point * pPoints);
};


#endif