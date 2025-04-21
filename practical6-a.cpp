#include<iostream>
using namespace std;
class Course {
public:
    string CourseName;
    int CourseId, Credits;
    Course(string name, int id, int credit) : CourseName(name), CourseId(id), Credits(credit) {}
    void Display() {
        cout << "\n Course Name: " << CourseName << "  ID: " << CourseId << "  Credits: " << Credits;
    }
    void DeleteDetails() {
        CourseName = "";
        CourseId = 0;
        Credits = 0;
        cout << "\n Course details deleted successfully!";
    }
};
int main() {
    Course courses[3] = {{"Math", 101, 4}, {"Physics", 102, 3}, {"CS", 103, 5}};
    cout << "\n Initial Course Details:";
    for (int i = 0; i < 3; i++) courses[i].Display();
    int index;
    cout << "\n\n Enter index to delete course: ";
    cin >> index;
    if (index >= 0 && index < 3) {
        courses[index].DeleteDetails();
    } else {
        cout << "\n Invalid index!";
    }
    cout << "\n\n Updated Course Details:";
    for (int i = 0; i < 3; i++) courses[i].Display();
    return 0;
}