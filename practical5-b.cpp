//To update the details of a course using a member function of course class. 
#include<iostream>
using namespace std;
class Course {
public:
    string CourseName;
    int CourseId;
    int Credits;
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
    void UpdateDetails(string name, int id, int credit) {
        CourseName = name;
        CourseId = id;
        Credits = credit;
        cout << "\n Course details updated successfully!";
    }
};
int main() {
    Course courses[3] = {{"Math", 101, 4}, {"Physics", 102, 3}, {"CS", 103, 5}};
    cout << "\n Initial Course Details:";
    for (int i = 0; i < 3; i++) 
        courses[i].Display();
    int index;
    cout << "\n\n Enter index to update: ";
    cin >> index;
    if (index >= 0 && index < 3) {
        string newName;
        int newId, newCredits;
        cout << " Enter new course name, ID, and credits: ";
        cin >> newName >> newId >> newCredits;
        courses[index].UpdateDetails(newName, newId, newCredits);
        courses[index].Display();
    } else {
        cout << "\n Invalid index!";
    }
    return 0;
}