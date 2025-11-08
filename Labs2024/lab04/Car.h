#ifndef CAR_H
#define CAR_H

class Car
{
private:
    int ID;
	bool State;
	double TankCapacity;
	double Consumption;
	double Fuel;
public:

/** @brief Ustawienie ID 
 * 
 * Funkcja ustawia ID obiektu
 * 
 * @param[in] x  wartość ID
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
    void SetID(int x);

/** @brief Ustawienie stanu
 * 
 * Funkcja ustawia stan obiektu
 * 
 * @param[in] x  wartość stanu
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
	void SetState(bool x);

/** @brief Ustawienie pojemności baku
 * 
 * Funkcja ustawia pojemność baku obiektu
 * 
 * @param[in] x  wartość pojemności
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
	void SetTankCapacity(double x);

/** @brief Ustawienie tego ile pali
 * 
 * Funkcja ustawia to ile pojazd spala litrów paliwa na 100km
 * 
 * @param[in] x  wartość spalania na 100km
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
	void SetConsumption(double x);

/** @brief Ustawienie zawartości paliwa
 * 
 * Funkcja ustawia ile pojazd zwiera paliwa. 
 * Przy podaniu wartości większej niż pojemność baku ustawiana jest 
 * najwyższa możliwa wartość czyli wartość pojemności.
 * 
 * @param[in] x  wartość zawartego paliwa
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
	void SetFuel(double x);




/** @brief Pobranie pojemności baku 
 * 
 * Funkcja zwraca pojemnośc baku samochodu.
 * 
 * @return funkcja typu double, zwraca pojemnośc baku. 
 * 
*/
    double GetTankCapacity();


/** @brief Wypisanie danych obiektu
 * 
 * Funkcja wypisuje wszystkie dane obiektu w przystępnej formie.
 * 
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
    void Presentation(void);

/** @brief Spalenie paliwa
 * 
 * Funkcja zużywa tyle paliwa ile potrzeba na przejechnie podanego dystansu. 
 * Kiedy paliwo się skończy samochód nie jedzie dalej.
 * 
 * @param[in] x  wartość kilometrów do przejechania
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
    void Drive(double x);

/** @brief Uruchomienie slnika
 * 
 * Funkcja uruchamia silnik obiektu jeżeli w baku jest paliwo.
 * 
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
    void Start(void);

/** @brief Dolanie paliwa
 * 
 * Funkcja dodaje paliwa do baku. Sprawdza czypodana wartośc jest dodatnia oraz czy samochód jest wyłączony.
 * 
 * 
 * @param[in] x  wartość dolanego paliwa
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
    void Refuel(double x);

/** @brief Wyłączenie slnika
 * 
 * Funkcja wyłącza silnik. 
 * 
 * @return funkcja typu void, dlatego nic nie zwraca. 
 * 
*/
    void Stop(void);
};


#endif