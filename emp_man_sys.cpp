/* WAP for Employee Management System
a. Create a class with Name Employee.
b. Create a parameterized constructor to initialize class attributes like,
Employee Name, Employee Code, Basic Salary.
c. Create a member function Display() to display records on Screen.
d. Create a function Gross_Salary() which calculate coponents of salary like ->
TA(3% of Basic Salary), DA(4% of Basic Salary), HRA(5% of Basic Salary),
PF(4% of Basic Salary).
Gross Salary is sum of Basic, TA, DA, HRA, PF is deducted from Gross Salary.
e. Create a function update() to increment Basic Salary of Employees are:-
Gross Salary Between 10000 to 20000, 10% Increment.
Gross Salary Between 20000 to 30000, 15% Increment.
Gross Salary above 30000, 20% Increment.
f. Create a function update_profile(), if user wants to correct its name or code.
g. Create a function with name Get_Data() that only reads Employee Data but not able to modify user data.
*/
#include<iostream>
using namespace std;
class Employee{
    public: string emp_name;
    int emp_code;
    public: Employee(string name, int code) {
    emp_name=name; emp_code=code;
    }
    void Display(){
        cout<<"Enter the Employee's name: "<<emp_name<<endl;
        cout<<"Enter the Employee's code: "<<emp_code<<endl;
    }
};
void Gross_Salary(Employee obj1){
    float bas_sal, TA, DA, HRA, PF, gross_sal;
    cout<<"Enter the Employee's basic salary: ";
    cin>>bas_sal;
    TA = 0.03 * bas_sal;
    DA = 0.04 * bas_sal;
    HRA = 0.05 * bas_sal;
    PF = 0.04 * bas_sal;
    gross_sal = bas_sal + TA + DA + HRA - PF;
    cout<<"Gross Salary: "<<gross_sal<<endl;
}
void Update(Employee &obj) {
    float gross_sal, bas_sal;
    if (gross_sal>=10000 && gross_sal<=20000) {
        bas_sal = gross_sal * 0.10;
        cout<<"Incremented Salary: "<<bas_sal;
    } else if(gross_sal>20000 && gross_sal<=30000) {
        bas_sal = gross_sal * 0.15;
        cout<<"Incremented Salary: "<<bas_sal;
    }
    else if(gross_sal>30000){
        bas_sal = gross_sal * 0.20;
        cout<<"Incremented Salary: "<<bas_sal;
    }
}

int main() {
    Employee obj("Harsh",96);
    obj.Display();
    Gross_Salary(obj);
    obj.Display();
    Update(obj);
    cout<<"\nUpdated info: "<<endl;
    obj.Display();
}