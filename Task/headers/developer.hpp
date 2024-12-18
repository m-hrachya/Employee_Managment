#ifndef DEVELOPER
#define DEVELOPER
#include "employee.hpp"

class Developer : public Employee {
private:
    int m_projectsCount;
public:
    Developer(const std::string& name, double baseSalary, int projectsCount);
    double calculateSalary() const override;
    void displayInfo() const override;
};

#endif // DEVELOPER