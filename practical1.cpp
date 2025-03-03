/*Analyse and design classes for a student management system
To create a student class, its constructor, destructor and member function
To create a course class, its constructor, destructor and member functions.
*/
#include<iostream>
using namespace std;
class student{
//    private: 
//    string fname;
//    string lname;
//    string Email;
//    int roll;
    public: student(string firstname, string lastname, string email, string rollno) {
        cout<<"\nInformation of the Student Registered:-";
        cout<<"\nFirst Name of the Student: "<<firstname;
        cout<<"\nLast Name of the Student: "<<lastname;
        cout<<"\nEmail of the Student: "<<email;
        cout<<"\nRoll No of the Student: "<<rollno<<endl;
        // fname = firstname;
        // lname = lastname;
        // Email = email;
        // roll = rollno;
    }
    ~student() {}
};
class course{
    public: course(string CourseName, string CourseID, int Credits) {
        cout<<"\nInformation about the Course enrolled:-";
        cout<<"\nCourse Name: "<<CourseName;
        cout<<"\nCourse ID: "<<CourseID;
        cout<<"\nCredits: "<<Credits;
    }
    ~course() {}
};
int main(){
    string fnm,lnm,em,rn;
    cout<<"Enter the first name of the student: ";
    cin>>fnm;
    cout<<"Enter the last name of the student: ";
    cin>>lnm;
    cout<<"Enter the email of the student: ";
    cin>>em;
    cout<<"Enter the roll number of the student: ";
    cin>>rn;
    student obj1(fnm,lnm,em,rn);
    string CName, CID;
    int Cs;
    cout<<"\nEnter Course Name: ";
    cin>>CName;
    cout<<"Enter Course ID: ";
    cin>>CID;
    cout<<"Enter Credits: ";
    cin>>Cs;
    course obj2(CName,CID,Cs);
    return 0;
}