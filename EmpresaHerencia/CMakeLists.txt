cmake_minimum_required(VERSION 3.21)
project(EmpresaHerencia)

set(CMAKE_CXX_STANDARD 14)

add_executable(EmpresaHerencia main.cpp Employee.cpp Employee.h SalariedEmployee.cpp SalariedEmployee.h HourlyEmployee.cpp HourlyEmployee.h CommissionEmployee.cpp CommissionEmployee.h BasePlusCommissionEmployee.cpp BasePlusCommissionEmployee.h DailyEmployee.cpp DailyEmployee.h)
