/* Implement Polymorphism for member function to UG class, PG class and Diploma Class
Polymorphism:- Function Overloading and Function Over-riding
WAP to
a. Create a base class with MyStudyApp.
b. Create a function Login() overload this function for Admin, Student and Guest Login.
c. Login function for Admin has two parameter username(admin) and Pin(121),
d. Login function for Student has 1 parameter (Registration Number, Range b/w 1 to 100).
e. Login function for Guest has no parameter.
f. Create a function Greet() as pure virtual function of this class.
g. Create a function Accept() to store user information.
h. Create a function Display() to display user information.
i. Create a function Derived Class UG_Class.
j. Accept choice from user to Login as Admin, Student or Guest, according to user's choice invoke base class Login() function,
Now over-ride base class functions Greet() this function will Greet user with custom message e.g., Welcome Admin, Override Accept() and Display()
function store and display user detail for Student Admission in UG_Class.
k. Create a Dervied class PG_Class,
accept choice from user to Login as Admin, Student or Guest, according to user choice invoke base class Login() Function,,
now override base class functions.
*/
#include <iostream>
#include <string>
using namespace std;
class MyStudyApp {
public:
    bool Login(string username, int pin) {
        if (username == "admin" && pin == 121) {
            cout << "Admin Login Successful!\n";
            return true;
        } else {
            cout << "Invalid Admin Credentials.\n";
            return false;
        }
    }
    bool Login(int regNo) {
        if (regNo >= 1 && regNo <= 100) {
            cout << "Student Login Successful!\n";
            return true;
        } else {
            cout << "Invalid Student Credentials.\n";
            return false;
        }
    }
    bool Login() {
        cout << "Guest Login Successful!\n";
        return true;
    }
    virtual void Greet() = 0;
    virtual void Accept() = 0;
    virtual void Display() = 0;
};
class UG_Class : public MyStudyApp {
private:
    string name;
    int regNo;
    string course;
public:
    void Greet() override {
        cout << "Welcome UG Student!" << endl;
    }
    void Accept() override {
        cout << "Enter UG Student Name: ";
        cin >> name;
        cout << "Enter Registration Number (1-100): ";
        cin >> regNo;
        cout << "Enter UG Course: ";
        cin >> course;
    }
    void Display() override {
        cout << "UG Student Name: " << name << endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "UG Course: " << course << endl;
    }
};
class PG_Class : public MyStudyApp {
private:
    string name;
    int regNo;
    string specialization;
public:
    void Greet() override {
        cout << "Welcome PG Student!" << endl;
    }
    void Accept() override {
        cout << "Enter PG Student Name: ";
        cin >> name;
        cout << "Enter Registration Number (1-100): ";
        cin >> regNo;
        cout << "Enter PG Specialization: ";
        cin >> specialization;
    }
    void Display() override {
        cout << "PG Student Name: " << name << endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "PG Specialization: " << specialization << endl;
    }
};
int main() {
    MyStudyApp* obj;
    int classChoice, loginType;
    cout << "Choose your class:\n1. UG\n2. PG\nChoice: ";
    cin >> classChoice;
    if (classChoice == 1)
        obj = new UG_Class();
    else
        obj = new PG_Class();
    cout << "\nLogin as:\n1. Admin\n2. Student\n3. Guest\nChoice: ";
    cin >> loginType;
    bool loginSuccess = false;
    switch (loginType) {
        case 1: {
            string username;
            int pin;
            cout << "Enter Admin Username: ";
            cin >> username;
            cout << "Enter Admin PIN: ";
            cin >> pin;
            loginSuccess = obj->Login(username, pin);
            break;
        }
        case 2: {
            int regNo;
            cout << "Enter Registration Number (1-100): ";
            cin >> regNo;
            loginSuccess = obj->Login(regNo);
            break;
        }
        case 3:
            loginSuccess = obj->Login();
            break;
        default:
            cout << "Invalid Login Type.\n";
            delete obj;
            return 0;
    }
    if (!loginSuccess) {
        delete obj;
        return 0;
    }
    cout << endl;
    obj->Greet();
    obj->Accept();
    obj->Display();
    delete obj;
    return 0;
}