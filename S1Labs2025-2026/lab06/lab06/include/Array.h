#ifndef ARRAY_H
#define ARRAY_H

/**
 * @brief Dynamicznie alokuj pamiec do tablicy
 * 
 * Funkcja przypisuje dynamicznie pamiec do tablicy i wzraca wskaznik do niej.
 * Jezeli podany rozmiar jest mniejszy od 1 funkcja zwraca nullptr.
 * 
 * @param[in] arraySize rozmiar tablicy
 * 
 * @return wskaznik do nowej tablicy, nullptr jezeli podany rozmiar jest zbyt maly
 */
int * InitArray(int arraySize);


/**
 * @brief wypelnij funkcje sekwencja sumy wartosci poprzedniego wyrazu i indeksu obecnego wyrazu
 * 
 * Funkcja wypelnia tablice sekwencja sumy wartosci poprzedniego wyrazu i indeksu obecnego wyrazu.
 * 
 * @param[in] array wskaznik do tablicy
 * @param[in] arraySize rozmiar tablicy
 * 
 * @return nic nie zwraca
 */
void CreateSequence(int *array,int arraySize);


/**
 * @brief zmien rozmiar tablicy na nowy
 * 
 * Funkcja zmienia rozmiar podanej wskaznikiem tablicy dynamicznej z starego na nowy. 
 * Dealokuje uprzednio zaalokowana pamiec i alokuje nowa.
 * W przypadku podania nowego rozmiaru mniejszego niz 1 funkcja zwalnia pamiec tablicy i zwraca nullptr.
 * 
 * @param[in] array wskaznik do tablicy
 * @param[in] arraySize stary rozmiar
 * @param[in] newArraySize nowy rozmiar
 * 
 * @return zwraca wskaznik do tablicy o zmienionym rozmiarze
 */
int * ChangeArraySize(int *array,int arraySize,int newArraySize);


/**
 * @brief dealokuj pamiec tablicy
 * 
 * Funkcja dealokuje pamiec tablicy
 * 
 * @param[in] array wskaznik do tablicy
 * 
 * @return nic nie zwraca
 */
void DeleteArray(int *array);

#endif
