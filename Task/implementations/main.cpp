#include "../headers/managment.hpp"

int main() {
    EmployeeManagment management;
    Employee* john = new Developer("John Doe", 1000, 5);
    Employee* jane = new Manager("Jane Smith", 6000, 3);
    Employee* mike = new Executive("Mike Smith",10000, 5, 4, 50);
    management.addEmployee(john);
    management.addEmployee(jane);
    management.addEmployee(mike);
    management.displayAllEmployees();
    management.searchEmployeeByName("John Doe");
    management.searchEmployeeByName("Mike Tyson");
    
    management.searchEmployeeByRole(typeid(Manager));
    management.removeEmployeeByName("Jane Smith");
    management.searchEmployeeByRole(typeid(Manager));
}