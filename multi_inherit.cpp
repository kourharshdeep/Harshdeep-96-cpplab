/* wap to 
a. create a base class with name MyApp
b. create a function Message(), display welcome message on screen
c. create a function Login(), accept pin from user and validate pin against value 123 and return Message 'Yes' or 'No'
d. create a derived class with name StudentInfo
e. create a function accept(), store student information like Name, Registration Number, Course Name but only when user Login Successfully
f. Create a function display() to display student information on screen
g. Create one more derived class with name Grade_Calc, this class will take inheitance from StudentInfo Class.
h. Create a function cal(), this function will accept marks from accept() function of StudentInfo class and calculate percentage and Grade as per
    following:
    Percentage between 80 to 100 'A'
    Percentage between 70 to 80 'B'
    Percentage between 60 to 70 'C'
    Otherwise Not Qualified.
*/
#include <iostream>
#include <string>
using namespace std;
class MyApp {
public: void Message() {
        cout << "Welcome to My Application!" << endl;
    }
    string login() {
        int pin;
        cout << "Enter PIN: ";
        cin >> pin;
        if (pin == 123) {
            return "Yes";
        } else {
            return "No";
        }
    }
};
class StudentInfo : public MyApp {
private: string name; string regNumber; string courseName;
public: float marks[5];
public: void Accept() {
        if (login() == "Yes") {
            cout << "Login successful!" << endl;
            cout << "Enter student name: ";
            cin>>name;
            cout << "Enter registration number: ";
            cin>>regNumber;
            cout << "Enter course name: ";
            cin>>courseName;
            cout<<"Enter marks for 5 subjects: ";
            for(int i=0;i<5;i++){
                cin>>marks[i];
            }
        } else {
            cout << "Login Failed!!!" << endl;
        }
    }
    void display() {
        cout<<"Student Information: "<<endl;
            cout << "Name: " << name << endl;
            cout << "Registration Number: " << regNumber << endl;
            cout << "Course Name: " << courseName << endl;
            cout << "Marks: "<<endl;
            for(int i=0;i<5;i++){
                cout<<marks[i]<<" ";
            }
            cout<<endl;
    }
};
class GradeCalc: public StudentInfo {
    public: void cal() {
        float total=0;
        for(int i=0;i<5;i++) {
            total += marks[i];
        }
        float percentage = (total/500)*100;
        cout<<"Percentage: "<<percentage<<"%"<<endl;
        if(percentage>=80 && percentage <=100) {
            cout<<"Grade: A"<<endl;
        } else if(percentage>=70 && percentage<80) {
            cout<<"Grade: B"<<endl;
        }
        else if(percentage>=60 && percentage<70){
            cout<<"Grade: C"<<endl;
        } else {
            cout<<"Grade: Not Qualified"<<endl;
        }
    }
};
int main() {
    GradeCalc gradeCalcObj;
    gradeCalcObj.Message();
    gradeCalcObj.Accept();
    gradeCalcObj.display();
    gradeCalcObj.cal();
    return 0;
}