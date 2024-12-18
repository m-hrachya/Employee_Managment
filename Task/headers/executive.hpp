#ifndef EXECUTIVE
#define EXECUTIVE
#include "seniormanager.hpp"

class Executive : public SeniorManager {
private:
    double m_companyPerformance;
public:
    Executive(const std::string& name, double baseSalary, int numberOfEmployees, int managersSupervised, double companyPerformance);
    double calculateSalary() const override;
    void displayInfo() const override;
};

#endif // EXECUTIVE