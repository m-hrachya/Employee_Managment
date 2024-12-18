#include "../headers/employee.hpp"

Employee::Employee(const std::string& name, double baseSalary) {
    m_name = name;
    m_baseSalary = baseSalary;
}

std::string Employee::getName() const {
    return m_name;
}