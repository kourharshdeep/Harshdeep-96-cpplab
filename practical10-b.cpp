//To search records by course id using files
#include <iostream>
#include <fstream>
using namespace std;

struct Course {
    int courseID;
    char courseName[50];
    int duration; // in hours
};

void addCourse() {
    Course c;
    ofstream outFile("courses.dat", ios::binary | ios::app);

    cout << "Enter Course ID: ";
    cin >> c.courseID;
    cin.ignore();
    cout << "Enter Course Name: ";
    cin.getline(c.courseName, 50);
    cout << "Enter Duration (in hours): ";
    cin >> c.duration;

    outFile.write(reinterpret_cast<char*>(&c), sizeof(Course));
    outFile.close();

    cout << "Course added successfully!\n";
}

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

void searchCourseByID(int searchID) {
    Course c;
    bool found = false;
    ifstream inFile("courses.dat", ios::binary);

    while (inFile.read(reinterpret_cast<char*>(&c), sizeof(Course))) {
        if (c.courseID == searchID) {
            cout << "\nCourse Found:\n";
            cout << "ID: " << c.courseID
                 << ", Name: " << c.courseName
                 << ", Duration: " << c.duration << " hours\n";
            found = true;
            break;
        }
    }

    inFile.close();

    if (!found)
        cout << "\nCourse with ID " << searchID << " not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Course\n2. Display Courses\n3. Search Course by ID\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addCourse(); break;
            case 2: displayCourses(); break;
            case 3:
                int id;
                cout << "Enter Course ID to search: ";
                cin >> id;
                searchCourseByID(id);
                break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}