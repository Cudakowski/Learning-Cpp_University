#ifndef COMPANY_H
#define COMPANY_H

#include "Employee.h"
#include <string>
#include <functional>
#include <vector>
#include <iostream>
#include <algorithm>

class Company 
{
private:
    std::vector<Employee*> _tab;
public:
    ~Company();

    void addEmployee(std::string name, std::string position, int workHours, double hourlyPay);
    void displayEmployees();
    void sortEmployees(std::function<bool(Employee* a, Employee* b)> fun);
    void removeEmployees( std::function<bool(Employee* a)> fun);
};

#endif
