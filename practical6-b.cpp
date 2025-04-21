//To get the details of a course by course_id using a member function of course class.
#include <iostream>
#include <string>
using namespace std;
class Course {
private:
    int course_id;
    string course_name;
    int credits;
public:
    // Constructor to initialize course details
    Course(int id, string name, int cr) : course_id(id), course_name(name), credits(cr) {}
    // Member function to display course details
    void displayCourseDetails(int id) {
        if (id == course_id) {
            cout << "Course ID: " << course_id << endl;
            cout << "Course Name: " << course_name << endl;
            cout << "Credits: " << credits << endl;
        } else {
            cout << "Course not found!" << endl;
        }
    }
};
int main() {
    // Create a course object
    Course course1(101, "Object Oriented Programming", 4);
    int search_id;
    cout << "Enter Course ID to search: ";
    cin >> search_id;
    // Get course details by course_id
    course1.displayCourseDetails(search_id);
    return 0;
}