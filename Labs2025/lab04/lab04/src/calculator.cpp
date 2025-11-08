#include "../include/calculator.h"
//#include "calculator.h"

double basic_operation(double a, double b, char op)
{
    switch (op)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        if (b==0.0)
        {
            std::cout<<"Error: Division by zero!\n";
            return 0.0;
        }
        return a/b;
        break;
    default:
        std::cout<<"Error: Unknown operation '"<<op<<"'\n";
        return 0.0;
        break;
    }
}



#ifdef FULL_FUNCTIONALITY

void print_operation_info(char op)
{
    switch (op)
    {
    case '^':
        std::cout<<"Operation '^' is exponentiation\n";//zakladam ze mogloby tu byc cos jeszcze dlatego tak projektuje kod
        break;
    
    default:
        std::cout<<"Error: Unknown operation '"<<op<<"'\n";
        break;
    }
}

double advanced_calculation(double a, double b, char op)
{
    switch (op)
    {
    case '^':
        return pow(a,b);//zakladam ze mogloby tu byc cos jeszcze dlatego tak projektuje kod
        break;
    
    default:
        std::cout<<"Error: Unknown operation '"<<op<<"'\n";
        return 0.0;
        break;
    }
}


#endif
