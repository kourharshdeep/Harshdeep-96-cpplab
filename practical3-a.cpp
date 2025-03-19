/* 3(a) To update the details of a student using a member function of student class.
*/
#include<iostream>
using namespace std;
class student{
    public: string studentname; int studentID;
    float marks, per;
    public: student(string name, int id, float marks) {
        studentname = name; studentID = id; marks = marks;
    }
    void display() {
        cout<<"\nName="<<studentname<<"\tStudentID="<<studentID<<"\tMarks=";
        cout<<marks<<endl;
    }
};
void semester1(student sem1) {
    sem1.marks= 400;
    cout<<"\nMarks in Semester1: "<<sem1.marks;
}
void semester2(student sem2) {
    sem2.marks= 450;
    cout<<"\nMarks in Semester2: "<<sem2.marks;
}
void Update(student &obj) {
    cout << "\nEnter your updated information Name, StudentID, Marks "<<endl;
    cin>>obj.studentname>>obj.studentID>>obj.marks;
}
int main() {
    student obj1("ABC",101,0);
    obj1.display();
    semester1(obj1);
    semester2(obj1);
    obj1.display();
    Update(obj1);
    cout<<"\n Your updated info is ";
    obj1.display();
}