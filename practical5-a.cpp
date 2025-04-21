// To add the details of a course using a parameterized constructor of course class.
#include<iostream>
using namespace std;
class Course {
public:
    string CourseName;
    int CourseId;
    int Credits;
    // Parameterized constructor to initialize course details
    Course(string name, int id, int credit) {
        CourseName = name;
        CourseId = id;
        Credits = credit;
    }
    void Display() {
        cout << "\n Course Name: " << CourseName 
             << "\t Course ID: " << CourseId 
             << "\t Credits: " << Credits;
    }
};
int main() {
    // Creating Course objects with parameterized constructor
    Course course1("Mathematics", 101, 4);
    Course course2("Physics", 102, 3);
    Course course3("Computer Science", 103, 5);
    // Display course details
    course1.Display();
    course2.Display();
    course3.Display();
    return 0;
}