/*Analyse and design classes for a student management system
To create a course class, its constructor, destructor and member functions.
*/
/* 1. Student Class- To store and display Student Information
2. Course Class- To store and display Course Details
3. Admin Class- To Change/ Add/ Delete/ Update, information of Student or Course
4. Examination- To store and display information about the ongoing or upcoming exams
5. Result Class- To store and display Result
6. Department Class- To store and display information of all schools and departments of college
7. Notification Class- To display all latest information and updates
*/

//To create a student class, its constructor, destructor and member function
#include<iostream>
using namespace std;
class Student{
    public: string StudentName; int StudentId;
    float Marks, per;
    public: Student(string Name, int Id, float Mark) {
        StudentName= Name;
        StudentId= Id;
        Marks= Mark;
    }
    void Display() {
        cout<<"Information Entered by the Student is "<<endl;
        cout<<"Name = "<<StudentName<<"\t Student Id is "<<StudentId<<"\t Marks are ";
        cout<<Marks<<endl;
    }
    void Grade() {
        per= Marks/500*100;
        if(per>=80 && per<=100) {
            cout<<"Your Grade is A"<<endl;
        }
        else if(per>=70 && per<80) {
            cout<<"Your Grade is B"<<endl;
        }
        else if(per>=60 && per<70) {
            cout<<"Your Grade is C"<<endl;
        }
        else if(per>=50 && per<60) {
            cout<<"Your Grade is D"<<endl;
        } else {
            cout<<"Not Qualified."<<endl;
        }
    }
    void Club_Assignment() {

    }
    public: ~Student() {
        cout<<"Destructor Invoked ";
    }
};
int main() {
    Student obj[5]={{"Janvi",101,450},{"Khushi",102,480},{"Eeshan",103,260},{"Gagan",104,390},{"Harsh",105,300}};
    int i;
    for(i=0;i<5;i++) {
        cout<<"\nInformation of Student with id "<<obj[i].StudentId<<endl;
        obj[i].Display();
        obj[i].Grade();
        obj[i].Club_Assignment();
    }
    return 0;
}
