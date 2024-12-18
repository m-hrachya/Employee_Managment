#include "../headers/seniormanager.hpp"

SeniorManager::SeniorManager(const std::string& name, double baseSalary, int numberOfEmployees, int managersSupervised) : Manager(name, baseSalary, numberOfEmployees) {
    m_managersSupervised = managersSupervised;
}
double SeniorManager::calculateSalary() const {
    return Manager::calculateSalary() + (500 * m_managersSupervised);
}
void SeniorManager::displayInfo() const {
    Manager::displayInfo();
    std::cout << ", Number of Managers Supervised: " << m_managersSupervised << std::endl;
}