#ifndef SERVICE_H
#define SERVICE_H


#include "Car.h"

class Service
{

public:

/** @brief Test samochodu
 * 
 * Funkcja dolewa do pełna paliwa i przeprowadza jazdę testową na podanym dystansie na podanym samochodzie.
 * 
 * @param[in] MyCar1  wskaźnik do samochodu
 * @param[in] x  wartość kilometrów do przejechania
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
    void Test(Car *MyCar1, double x);

/** @brief Test identycznego nowego samochodu
 * 
 * Funkcja dolewa do pełna paliwa i przeprowadza jazdę testową na podanym dystansie na nowym fabrycznie samochodzie.
 * 
 * @param[in] MyCar1  wartość samochodu
 * @param[in] x  wartość kilometrów do przejechania
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
    void TestCopy(Car MyCar1, double x);
};

#endif
