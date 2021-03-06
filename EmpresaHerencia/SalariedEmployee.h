#ifndef EMPRESAHERENCIA_SALARIEDEMPLOYEE_H
#define EMPRESAHERENCIA_SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee{
    private:
        double weeklySalary;
    public:
        SalariedEmployee(const string &, const string &, const string &, double = 0.0);
        void setWeeklySalary( double );
        double getWeeklySalary() const;
        double earnings() const override;
        void print() const override;
};


#endif //EMPRESAHERENCIA_SALARIEDEMPLOYEE_H
