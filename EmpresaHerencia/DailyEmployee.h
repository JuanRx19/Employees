#ifndef EMPRESAHERENCIA_DAILYEMPLOYEE_H
#define EMPRESAHERENCIA_DAILYEMPLOYEE_H

#include "Employee.h"

class DailyEmployee : public Employee{
    private:
        double wage;
        double days;
    public:
        static const int daysPerWeek = 7;
        DailyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );
        void setWage( double );
        double getWage() const;
        void setDays( double );
        double getDays() const;
        double earnings() const override;
        void print() const override;
};


#endif //EMPRESAHERENCIA_DAILYEMPLOYEE_H
