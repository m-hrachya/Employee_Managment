#include "../headers/salesperson.hpp"

SalesPerson::SalesPerson(const std::string& name, double baseSalary, double totalSales) : Employee(name, baseSalary) {
    m_totalSales = totalSales;
}
double SalesPerson::calculateSalary() const {
    return m_baseSalary + (0.1 * m_totalSales);
}
void SalesPerson::displayInfo() const {
    std::cout << "Sales Person: " << m_name << ", Base Salary: $" << m_baseSalary
                << ", Total Sales: $" << m_totalSales << std::endl;
}
