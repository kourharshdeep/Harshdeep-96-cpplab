/*(Constructor in an Array of Objects & Workforce Management)
Implement a CompanyHRSystem that manages 500 employee records using an array of objects. Each object should be initialized through a
parameterized constructor. Implement a function to filter and display employees with performance scores above a given threshold.
*/
#include <iostream>
#include <string>
using namespace std;
// Employee class
class Employee {
private:
    int id;
    string name;
    string department;
    float performanceScore;
public:
    // Parameterized constructor
    Employee(int empId, string empName, string dept, float score) {
        id = empId;
        name = empName;
        department = dept;
        performanceScore = score;
    }
    float getPerformanceScore() const {
        return performanceScore;
    }
    void displayEmployee() const {
        cout << "\n------------------------------\n";
        cout << "ID          : " << id << endl;
        cout << "Name        : " << name << endl;
        cout << "Department  : " << department << endl;
        cout << "Performance : " << performanceScore << endl;
    }
};
// HR System
class CompanyHRSystem {
private:
    Employee* employees[500];
    int employeeCount;
public:
    CompanyHRSystem() {
        employeeCount = 0;
    }
    void addEmployee(int id, string name, string dept, float score) {
        if (employeeCount < 500) {
            employees[employeeCount++] = new Employee(id, name, dept, score);
        } else {
            cout << "Cannot add more than 500 employees.\n";
        }
    }
    void displayTopPerformers(float threshold) const {
        bool found = false;
        cout << "\nEmployees with performance above " << threshold << ":\n";
        for (int i = 0; i < employeeCount; ++i) {
            if (employees[i]->getPerformanceScore() > threshold) {
                employees[i]->displayEmployee();
                found = true;
            }
        }
        if (!found) {
            cout << "No employees found above the threshold.\n";
        }
    }
    ~CompanyHRSystem() {
        for (int i = 0; i < employeeCount; ++i) {
            delete employees[i];
        }
    }
};
// Main function
int main() {
    CompanyHRSystem hrSystem;
    int n;
    cout << "Enter number of employees to add (max 500): ";
    cin >> n;
    cin.ignore();  // Clear the newline left in buffer
    if (n > 500 || n <= 0) {
        cout << "Invalid number of employees!\n";
        return 1;
    }
    for (int i = 0; i < n; ++i) {
        int id;
        string name, dept;
        float score;
        cout << "\nEnter details for Employee #" << (i + 1) << ":\n";
        cout << "ID: ";
        cin >> id;
        cin.ignore();  // clear buffer before getline
        cout << "Name: ";
        getline(cin, name);
        cout << "Department: ";
        getline(cin, dept);
        cout << "Performance Score (0 - 100): ";
        cin >> score;
        cin.ignore();  // clear buffer for next loop iteration
        hrSystem.addEmployee(id, name, dept, score);
    }
    float threshold;
    cout << "\nEnter performance threshold to filter: ";
    cin >> threshold;
    hrSystem.displayTopPerformers(threshold);
    return 0;
}