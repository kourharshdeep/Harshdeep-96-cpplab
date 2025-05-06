//To create course records using files.
#include <iostream>
#include <fstream>
using namespace std;

struct Course {
    int courseID;
    char courseName[50];
    int duration; // in hours
};

// Function to add course to file
void addCourse() {
    Course c;
    ofstream outFile("courses.dat", ios::binary | ios::app);

    cout << "Enter Course ID: ";
    cin >> c.courseID;
    cin.ignore(); // To clear the buffer
    cout << "Enter Course Name: ";
    cin.getline(c.courseName, 50);
    cout << "Enter Duration (in hours): ";
    cin >> c.duration;

    outFile.write(reinterpret_cast<char*>(&c), sizeof(Course));
    outFile.close();

    cout << "Course added successfully!\n";
}

// Function to display all courses
void displayCourses() {
    Course c;
    ifstream inFile("courses.dat", ios::binary);

    cout << "\nCourse Records:\n";
    while (inFile.read(reinterpret_cast<char*>(&c), sizeof(Course))) {
        cout << "ID: " << c.courseID
             << ", Name: " << c.courseName
             << ", Duration: " << c.duration << " hours\n";
    }

    inFile.close();
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Course\n2. Display Courses\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addCourse(); break;
            case 2: displayCourses(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}