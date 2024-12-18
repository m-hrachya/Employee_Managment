#include "../headers/executive.hpp"

Executive::Executive(const std::string& name, double baseSalary, int numberOfEmployees, int managersSupervised, double companyPerformance) : SeniorManager(name, baseSalary, numberOfEmployees, managersSupervised) {
    m_companyPerformance = companyPerformance;
}
double Executive::calculateSalary() const {
    return SeniorManager::calculateSalary() + (1000 * m_companyPerformance);
}
void Executive::displayInfo() const {
    SeniorManager::displayInfo();
    std::cout << ", Company Performance: " << m_companyPerformance << std::endl;
}
