#include "../headers/developer.hpp"

Developer::Developer(const std::string& name, double baseSalary, int projectsCount) : Employee(name, baseSalary) {
    m_projectsCount = projectsCount;
}

double Developer::calculateSalary() const {
    return m_baseSalary + (100 * m_projectsCount);
}

void Developer::displayInfo() const {
    std::cout << "Developer: " << m_name << ", Base Salary: $" << m_baseSalary
                << ", Projects Count: " << m_projectsCount << std::endl;
}