/*To allocate appropriate access specifiers to data members of the student and course class along with
justification in comments.
*/
/* We declared Member variables or Attributes of Class Student and Class Course like Student name, Student Id, Marks,
Percentage, Course Name, Course Id, Course Credit as private member to protect our data from unauthorized access.

We declared Member functions like Display(), Grade(), Club Assignment(), Course_information_display(), Course Selection() of class
Course and Class Student as public to share information between different members of class.

We declared Constructor and Destructor of Class Course and Class Student as public because we cannot assign any other access
specifier to them.

In OOPs Programming, we prioritize data over functions and provide layer to security to member variables to protect information
stored inside member variable is not accessible by any unauthorized entity.
*/
#include<iostream>
using namespace std;
class Student{
    private: string studentname; int id; float marks;
    public: Student(string name, int id, float mark){
        studentname=name; this->id=id; this->marks=mark;
    }
    void Display(){
        cout<<"\nStudent Name: "<<studentname<<"\tStudent Id: "<<id;
        cout<<"\nStudent Marks: "<<marks;
    } 
};
class Course{
    private: string CourseName; int CourseID; int CourseCredit;
    public: Course(string name, int id, int credit){
        CourseName=name; CourseID=id; CourseCredit=credit;
    }
    void Display(){
        cout<<"\nCourse Name: "<<CourseName<<"\tCourse Id: "<<CourseID;
        cout<<"\nCourse Credit: "<<CourseCredit;
    }
};
int main() {
    Student obj("ABC",1,98);
    obj.Display();
    Course obj1[2]={{"Ram",60,4},{"Sham",45,5}};
    int i;
    for(i=0;i<=1;i++){
        obj1[i].Display();
    }
    return 0;
}