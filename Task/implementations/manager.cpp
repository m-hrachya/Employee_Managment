#include "../headers/manager.hpp"

Manager::Manager(const std::string& name, double baseSalary, int numberOfEmployees) : Employee(name, baseSalary) {
    m_numberOfEmployees = numberOfEmployees;
}
double Manager::calculateSalary() const {
    return m_baseSalary + (200 * m_numberOfEmployees);
}
void Manager::displayInfo() const {
    std::cout << "Manager: " << m_name << ", Base Salary: $" << m_baseSalary
                << ", Number of Employees: " << m_numberOfEmployees << std::endl;
}

