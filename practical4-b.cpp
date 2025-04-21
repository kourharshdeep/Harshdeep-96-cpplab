//To get the results of students by roll no using a member function of student class.
#include<iostream>
using namespace std;
class Student {
public:
    string StudentName;
    int rollno;
    float Marks;
    Student(string Name, int Id, float Mark) {
        StudentName = Name;
        rollno = Id;
        Marks = Mark;
    }
    void Display() {
        cout << "\n Name: " << StudentName << "\t Student Id: " << rollno << "\t Marks: " << Marks;
    }
    void Result(int id) {
        if (rollno== id) {
            cout << "\n Student Rollno Found!";
            Display();
            if (Marks >= 250) {
                cout << "\n Result: Passed";
            } else {
                cout << "\n Result: Failed";
            }
        }
    }
};
int main() {
    Student obj[5] = {
        {"Ram", 101, 450}, {"Sham", 102, 480}, {"Sita", 103, 350},
        {"Gita", 104, 250}, {"Raman", 105, 300}
    };
    int SID;
    cout << "\n Enter Roll No to get results: ";
    cin >> SID;
    for (int i = 0; i < 5; i++) {
        if (SID == obj[i].rollno) {
            obj[i].Result(SID);
            return 0;
        }
    }
    cout << "\n Student Rollno not found!";
    return 0;
}