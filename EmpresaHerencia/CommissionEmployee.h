#ifndef EMPRESAHERENCIA_COMMISSIONEMPLOYEE_H
#define EMPRESAHERENCIA_COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee : public Employee {
    private:
        double grossSales;
        double comissionRate;
    public:
        CommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );
        void setGrossSales( double );
        double getGrossSales() const;
        void setComissionRate( double );
        double getComissionRate() const;
        double earnings() const override;
        void print() const override;
};


#endif //EMPRESAHERENCIA_COMMISSIONEMPLOYEE_H
