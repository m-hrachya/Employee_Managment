#ifndef EMPLOYEE
#define EMPLOYEE
#include <iostream>
#include <string>

class Employee {
protected:
    std::string m_name;
    double m_baseSalary;
public:
    Employee(const std::string& name, double baseSalary);
    virtual ~Employee() {}
    virtual double calculateSalary() const = 0;
    virtual void displayInfo() const = 0;
    virtual std::string getName() const;
};

#endif // EMPLOYEE