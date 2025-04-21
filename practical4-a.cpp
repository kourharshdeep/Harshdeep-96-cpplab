// To search student details by roll no using a member function of student class. 
/*#include<iostream>
using namespace std;
class Student {
public:
    string StudentName;
    int StudentId;
    float Marks;
    Student(string Name, int Id, float Mark) {
        StudentName = Name;
        StudentId = Id;
        Marks = Mark;
    }
    void Display() {
        cout << "\n Name= " << StudentName << "\t Student Id= " << StudentId << "\t Marks= " << Marks;
    }
    void searchStudent(int id) {
        if (StudentId == id) {
            cout << "\n Student Found!";
            Display();
        }
        else {
            cout << "\n Student Not Found!";
        }
    }
};
int main() {
    Student obj[5] = {
        {"Ram", 101, 450}, {"Sham", 102, 480}, {"Sita", 103, 350},
        {"Gita", 104, 250}, {"Raman", 105, 300}
    };

    int SID;
    cout << "\n Enter Student ID to search: ";
    cin >> SID;

    for (int i = 0; i < 5; i++) {
        obj[i].searchStudent(SID);
    }

    return 0;
}*/
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
    void searchStudent(int id) {
        if (rollno == id) {
            cout << "\n Student rollno Found!";
            Display();
        }
    }
};
int main() {
    Student obj[5] = {
        {"Ram", 101, 450}, {"Sham", 102, 480}, {"Sita", 103, 350},
        {"Gita", 104, 250}, {"Raman", 105, 300}
    };
    int SID;
    cout << "\n Enter rollno to search: ";
    cin >> SID;
    for (int i = 0; i < 5; i++) {
        if (SID == obj[i].rollno) {
            obj[i].searchStudent(SID);
            return 0;
        }
    }
    cout << "\n Student Roll Number not found!";
    return 0;
}