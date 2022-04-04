#include "CommissionEmployee.h"
#include <iostream>

using namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate)
    : Employee( first, last, ssn ) {
    setGrossSales( sales );
    setComissionRate( rate );
}

void CommissionEmployee::setComissionRate( double rate ) {
    this->comissionRate = ((rate > 0.0 && rate < 1.0) ? rate : 0.0);
}

double CommissionEmployee::getComissionRate() const {
    return this->comissionRate;
}

void CommissionEmployee::setGrossSales(double sales) {
    this->grossSales = ((sales < 0.0) ? 0.0 : sales);
}

double CommissionEmployee::getGrossSales() const {
    return this->grossSales;
}

double CommissionEmployee::earnings() const {
    return getComissionRate() * getGrossSales();
}

void CommissionEmployee::print() const {
    cout << "commission employee: ";
    Employee::print();
    cout << "\ngross sales: " << getGrossSales() << ": commission rate: " << getComissionRate();
}