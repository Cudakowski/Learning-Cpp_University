#ifndef SERVICE_H
#define SERVICE_H

#include <iostream>
#include "IceMachine.h"

class Service
{
    public:
        /**
         * @brief Przeprowadz test podanej maszyny
         * 
         * Funkcja przeprowadza test podanej maszyny wykonujac nastepujace czynnosci:
         * Dosypuje proszku do pelna. Wlacza maszyne. Wykonuje podana ilosc lodow. Wylacza maszyne.
         * 
         * @param[in] machine podana maszyna do sprawdzenia
         * @param[in] x ilosc lodow do wytworzenia
         * @return void; nic nie zwraca
         */
        void Test(IceMachine* machine, double x);

        
        /**
         * @brief Przeprowadz test kopii podanej maszyny
         * 
         * Funkcja przeprowadza test fabrycznie nowej maszyny o identycznych parametrach co podana wykonujac nastepujace czynnosci:
         * Dosypuje proszku do pelna. Wlacza maszyne. Wykonuje podana ilosc lodow. Wylacza maszyne.
         * 
         * @param[in] machine podana maszyna do skopiowania parametrow
         * @param[in] x ilosc lodow do wytworzenia
         * @return void; nic nie zwraca
         */
            void TestCopy(IceMachine machine, double x);
};



#endif
