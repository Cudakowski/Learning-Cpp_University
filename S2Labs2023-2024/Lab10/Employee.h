#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee 
{
private:
    std::string _name; 
    std::string _position; 
    int _workHours; 
    double _hourlyPay;
public:
    Employee(std::string name, std::string position, int workHours, double hourlyPay);
    double getSalary() const;
    int getHours() const;
    std::string getName() const;
};

#endif
