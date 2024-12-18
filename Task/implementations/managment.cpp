#include "../headers/managment.hpp"

void EmployeeManagment::addEmployee(Employee* employee) {
    m_employees.push_back(employee);
}
void EmployeeManagment::displayAllEmployees() const{
    for (const auto& employee : m_employees) {
        employee->displayInfo();
    }
}
double EmployeeManagment::calculateTotalSalary() const {
    double totalSalary = 0;
    for (const auto& employee : m_employees) {
        totalSalary += employee->calculateSalary();
    }
    return totalSalary;
}
void EmployeeManagment::searchEmployeeByName(const std::string& employeeName) const {
    for (const auto& employee : m_employees) {
        if (employee->getName() == employeeName) {
            employee->displayInfo();
            return;
        }
    }
    std::cout << employeeName << ": employee not found." << std::endl;
}

void EmployeeManagment::searchEmployeeByRole(const std::type_info& employeeRole) const {
    bool found = false;
    for (const auto& employee : m_employees) {
        if (typeid(*employee) == employeeRole) {
            employee->displayInfo();
            found = true;
            return;
        }
    }
    std::cout << "Employee not found." << std::endl;
}
void EmployeeManagment::removeEmployeeByName(const std::string& employeeName) {
    for (const auto& employee : m_employees) {
        if (employee->getName() == employeeName) {
            delete employee;
            m_employees.erase(std::remove(m_employees.begin(), m_employees.end(), employee), m_employees.end());
            return;
        }
    }
    std::cout << "Employee not found." << std::endl;
}
EmployeeManagment::~EmployeeManagment() {
    for (auto employee : m_employees) {
        delete employee;
    }
}