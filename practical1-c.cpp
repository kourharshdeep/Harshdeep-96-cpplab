//To create a course class, its constructor, destructor and member functions.

#include<iostream>
using namespace std;
class Course{
    public:string CourseName; int CourseID; float CourseCredits;
    public: Course(string Name,int ID, float Credits) {
        CourseName=Name;
        CourseID=ID;
        CourseCredits=Credits;
    }
    void Display() {
        cout<<"\n Course Name is "<<CourseName<<"\t Course ID is "<<CourseID;
        cout<<"\n Course Credits are "<<CourseCredits;
    }
    private: float per, Att;
    public:void CourseAssignment() {
        //Here Accept Student Percentage, Attendence and Assign Course According to
        /* 1. Percentage greater than 80 or Attendence more than 90, Course option All
        2. Percentage between 70 to 80 or Attendence more than 80, Course option Java
        3. Percentage between 60 to 70 or Attendence more than 70, Course option CPP
        4. Percentage between 50 or 60 or Attendence more than 60, Course option PHP
        5. Percentage between 40 to 50 or Attendence more than 50, Course option C
        */
       cout<<"\nEnter Your Percentage and Attendence ";;
       cin>>per>>Att;
       if(per>=80 || Att>90) {
        cout<<"\n Course Option is All ";
       }
       else if(per>70 && per<=80 || Att>80) {
        cout<<"\nCourse Option is Java ";
       }
       else if(per>60 && per<=70 || Att>70) {
        cout<<"\nCourse Option is CPP ";
       }
       else if(per>50 && per<=60 || Att>60) {
        cout<<"\nCourse Option is PHP ";
       }
       else if(per>40 && per<=50 || Att>50) {
        cout<<"\nCourse Option is C ";
       }
       else {
        cout<<"\nNo Course Alloted";
       }
    }
    public: ~Course(){
        cout<<"\nMemory Released!!";
    }
};
int main() {
    Course obj[5]= {{"C",1,8},{"C++",2,6},{"Java",3,4},{"SQL",4,12},{"PHP",5,16}};
    int i;
    for(i=0;i<5;i++) {
        obj[i].Display();
    }
    obj[i].CourseAssignment();
    return 0;
}