/*program single level inheritance
#include<iostream>
using namespace std;
class myapp{ //parent class
    public: void Message() {
        cout<<"Welcome To My Application"<<endl;
    }
};
class login: public myapp { //child class (Syntax class child class name sign of inheritance: public base class)
    private: int pin1=123, pin2;
    public: void accept() {
        cout<<"Enter your Pin: ";
        cin>>pin2;
        if(pin1 == pin2) {
            cout<<"Login Successful";
        }
        else {
            cout<<"Login Fail";
        }
    }
};
int main() {
    login obj;
    obj.Message();
    obj.accept();
    return 0;
} */

/* wap to 
a. create a base class with name MyApp
b. create a function Message(), display welcome message on screen
c. create a function Login(), accept pin from user and validate pin against value 123 and return Message 'Yes' or 'No'
d. create a derived class with name StudentInfo
e. create a function accept(), store student information like Name, Registration Number, Course Name but only when user Login Successfully
f. Create a function display() to display student information on screen
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
public: void Accept() {
        string loginResult = login();
        if (loginResult == "Yes") {
            cout << "Login successful!" << endl;
            cout << "Enter student name: ";
            cin>>name;
            cout << "Enter registration number: ";
            cin>>regNumber;
            cout << "Enter course name: ";
            cin>>courseName;
        } else {
            cout << "No" << endl;
        }
    }
    void display() {
        if (!name.empty() && !regNumber.empty() && !courseName.empty()) {
            cout << "\nStudent Information:" << endl;
            cout << "Name: " << name << endl;
            cout << "Registration Number: " << regNumber << endl;
            cout << "Course Name: " << courseName << endl;
        } else {
            cout << "No information available." << endl;
        }
    }
};
int main() {
    StudentInfo student;  // Create object of derived class
    student.Message();  // Display welcome message
    student.Accept();   // Accept student information (after login)
    student.display();  // Display student information
    return 0;
}