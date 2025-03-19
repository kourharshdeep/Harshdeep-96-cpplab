/* 3(b) To delete the details of a student using a member function of student class.
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
        cout<<"\n Name="<<studentname<<"\t Marks=";
        cout<<marks<<endl;
    }
};
void semester1(student sem1) {
    sem1.marks=400;
    cout<<"\n Marks in Semester1:"<<sem1.marks;
}
void semester2(student sem2) {
    sem2.marks=450;
    cout<<"\n Marks in Semester2:"<<sem2.marks;
}
void Delete(student *pobj){
    cout<<"\n Student Record Not Found";
    pobj->studentname= " ";
    pobj->studentID=0;
    pobj-> marks=0;
}
int main() {
    student obj1("ABC",101,0);
    obj1.display();
    semester1(obj1);
    semester2(obj1);
    obj1.display();
    cout<<"\n Deleted Record";
    Delete(&obj1);
    obj1.display();
}