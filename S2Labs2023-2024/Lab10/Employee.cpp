#include "Employee.h"

Employee::Employee(std::string name, std::string position, int workHours, double hourlyPay): 
    _name{name}, _position{position}, _workHours{workHours}, _hourlyPay{hourlyPay} {}

double Employee::getSalary()const {return _hourlyPay;}
int Employee::getHours()const {return _workHours;}
std::string Employee::getName() const{return _name;}

