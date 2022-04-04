#ifndef EMPRESAHERENCIA_HOURLYEMPLOYEE_H
#define EMPRESAHERENCIA_HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
    private:
        double wage;
        double hours;
    public:
        static const int hoursPerWeek = 168;
        HourlyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );
        void setWage( double );
        double getWage() const;
        void setHours( double );
        double getHours() const;
        double earnings() const override;
        void print() const override;
};


#endif //EMPRESAHERENCIA_HOURLYEMPLOYEE_H
