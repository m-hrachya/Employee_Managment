#ifndef SALES_PERSON
#define SALES_PERSON
#include "employee.hpp"

class SalesPerson : public Employee {
private:
    double m_totalSales;
public:
    SalesPerson(const std::string& name, double baseSalary, double totalSales);
    double calculateSalary() const override;
    void displayInfo() const override;
};

#endif // SALES_PERSON