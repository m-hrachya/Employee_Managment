#ifndef SENIOR_MANAGER
#define SENIOR_MANAGER
#include "manager.hpp"

class SeniorManager : public Manager {
protected:
    int m_managersSupervised;
public:
    SeniorManager(const std::string& name, double baseSalary, int numberOfEmployees, int managersSupervised);
    double calculateSalary() const override;
    void displayInfo() const override;
};

#endif // SENIOR_MANAGER