#include "DailyEmployee.h"
#include <iostream>

using namespace std;

DailyEmployee::DailyEmployee(const string &first, const string &last, const string &ssn, double dailyWage, double daysWorked)
    : Employee(first, last, ssn){
    setWage(dailyWage);
    setDays(daysWorked);
}

void DailyEmployee::setWage(double dailyWage) {
    this->wage = (dailyWage < 0.0 ? 0.0 : dailyWage);
}

double DailyEmployee::getWage() const {
    return this->wage;
}

void DailyEmployee::setDays( double daysWorked ) {
    this->days = (((daysWorked >= 0.0) && (daysWorked >= daysPerWeek)) ? daysWorked : 0.0);
}

double DailyEmployee::getDays() const {
    return this->days;
}

double DailyEmployee::earnings() const {
    if(getDays() > 0){
        return getWage() * getDays();
    }else{
        return 0;
    }
}

void DailyEmployee::print() const {
    cout << "daily employee: ";
    Employee::print();
    cout << "\ndays wage: " << getWage() << "; days worked: " << getDays();
}