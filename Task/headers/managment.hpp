#ifndef EMPLOYEE_MANAGMENT
#define EMPLOYEE_MANAGMENT
#include "employee.hpp"
#include "developer.hpp"
#include "manager.hpp"
#include "salesperson.hpp"
#include "seniormanager.hpp"
#include "executive.hpp"
#include <vector>
#include <algorithm>

class EmployeeManagment {
private:
    std::vector<Employee*> m_employees;
public:
    void addEmployee(Employee* employee);
    void displayAllEmployees() const;
    double calculateTotalSalary() const;
    void searchEmployeeByName(const std::string& employeeName) const;
    void searchEmployeeByRole(const std::type_info& employeeRole) const;
    void removeEmployeeByName(const std::string& employeeName);
    ~EmployeeManagment();
};

#endif // EMPLOYEE_MANAGMENT