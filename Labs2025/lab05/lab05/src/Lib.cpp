#include "Lib.h"
#include <iostream>

using namespace std;

void fun1();

void fun3()
{
    cout << "----------\n";
    extern int i;
    extern int j;
    i++;
    j++;

    cout << "i = " << i << "\n";
    cout << "j = " << j << "\n";

    cout << "----------\n";
}

void fun2()
{
    cout << "----------\n";
    extern int i;
    extern int j;
    static int k{};
    i++;
    j++;
    k++;

    cout << "i = " << i << "\n";
    cout << "j = " << j << "\n";
    cout << "k = " << k << "\n";

    fun1();

    cout << "----------\n";
}

