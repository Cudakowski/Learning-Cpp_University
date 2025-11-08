#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
//#include <cmath>


/**
 * @brief Wykonywanie prostej operacji
 * 
 * Funkcja wukonuje podana operacje na podanych wartosciach.
 * Akceptowane operacje to: +, -, *, /.
 * Gdy podana operacja nie jest obslugiwana funkcja drukuje blad i zwraca 0.0
 * Przy dzieleniu przez zero funkcja drukuje blad i zwraca 0.0
 * 
 * @param[in] a pierwsza wartosc
 * @param[in] b druga wartosc
 * @param[in] op znak operacji
 * 
 * 
 * @return wartosc wyniku podanej operacji
 */
double basic_operation(double a, double b, char op);

#ifdef FULL_FUNCTIONALITY
#include <cmath>

/**
 * @brief Wyswietlanie informacji o operacji
 * 
 * Funkcja wyswietla informacje o podanej informacji.
 * W przypadku nie rozpoznania operacji funkcja wyswietla blad.
 * 
 * @param[in] op znak operacji
 * 
 * @return nic nie zwraca
 */
void print_operation_info(char op);

/**
 * @brief Wykonywanie zaawansowanej operacji
 * 
 * Funkcja wukonuje podana operacje na podanych wartosciach.
 * Akceptowane operacje to: ^.
 * Gdy podana operacja nie jest obslugiwana funkcja drukuje blad i zwraca 0.0
 * 
 * @param[in] a pierwsza wartosc
 * @param[in] b druga wartosc
 * @param[in] op znak operacji
 * 
 * @return wartosc wyniku podanej operacji
 */
double advanced_calculation(double a, double b, char op);


#endif

#endif
