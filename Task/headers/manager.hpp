#ifndef MANAGER
#define MANAGER
#include "employee.hpp"

class Manager : public Employee {
protected:
    int m_numberOfEmployees;
public:
    Manager(const std::string& name, double baseSalary, int numberOfEmployees);
    double calculateSalary() const override;
    void displayInfo() const override;
};

#endif // MANAGER