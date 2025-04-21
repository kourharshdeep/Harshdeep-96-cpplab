/* Write a program
a. To create a base class with name Employee Management System.
b. Create a function with name SalaryCalculate(), this function will calculate Employees salary, accept Basic Salary from User, Number of Working
days and calculate salary.
c. create derived class with name Manager.
d. Override Base class function, SalaryCalculate() and Calculate Manage adding component like TA 3% of Basic Salary, DA 10% of Basic Salary.
e. Create a Derived Class with Name Developer
Override Base class function, SalaryCalculate() and Calculate Developer adding component like TA 5% of Basic Salary, DA 12% of Basic Salary.
f. Create Derived class with name Accountant.
g. Over-ride Base class function, SalaryCalculate() and Salary Account adding component like TA 4% of Baisc Salary, DA 9% of Basic Salary.
*/
#include <iostream>
using namespace std;
class EmployeeManagementSystem {
    public: double basicSalary, workingDays, salary, TA, DA;
public:
    virtual void salaryCalculate() {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Number of Working Days: ";
        cin >> workingDays;

        salary = (basicSalary / 30) * workingDays;
        cout << "Employee Salary: " << salary << endl;
    }
};
class Manager : public EmployeeManagementSystem {
public:
    void salaryCalculate() override {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Number of Working Days: ";
        cin >> workingDays;

        TA = 0.03 * basicSalary;
        DA = 0.10 * basicSalary;
        salary = ((basicSalary / 30) * workingDays) + TA + DA;
        cout << "Manager Salary: " << salary << endl;
    }
};
class Developer : public EmployeeManagementSystem {
public:
    void salaryCalculate() override {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Number of Working Days: ";
        cin >> workingDays;

        TA = 0.05 * basicSalary;
        DA = 0.12 * basicSalary;
        salary = ((basicSalary / 30) * workingDays) + TA + DA;
        cout << "Developer Salary: " << salary << endl;
    }
};
class Accountant : public EmployeeManagementSystem {
public:
    void salaryCalculate() override {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Number of Working Days: ";
        cin >> workingDays;
        TA = 0.04 * basicSalary;
        DA = 0.09 * basicSalary;
        salary = ((basicSalary / 30) * workingDays) + TA + DA;
        cout << "Accountant Salary: " << salary << endl;
    }
};
int main() {
    EmployeeManagementSystem* emp;
    Manager manager;
    Developer developer;
    Accountant accountant;
    cout << "Select Employee Type (1- Manager, 2- Developer, 3- Accountant): ";
    int choice;
    cin >> choice;
    switch (choice) {
    case 1:
        emp = &manager;
        break;
    case 2:
        emp = &developer;
        break;
    case 3:
        emp = &accountant;
        break;
    default:
        cout << "Invalid Choice!" << endl;
        return 0;
    }
    emp->salaryCalculate();
    return 0;
}