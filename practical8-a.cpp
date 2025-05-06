//To store student records in presistent storage, i.e., files.
#include <iostream>
#include <fstream>
using namespace std;

// Define a structure for student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student s;

    // Get student data from user
    cout << "Enter Roll Number: ";
    cin >> s.rollNo;
    cin.ignore(); // To clear the newline from the input buffer
    cout << "Enter Name: ";
    cin.getline(s.name, 50);
    cout << "Enter Marks: ";
    cin >> s.marks;

    // Create an output file stream
    ofstream outFile("student.txt", ios::app); // app mode adds to the file

    if (!outFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Write data to file
    outFile << "Roll No: " << s.rollNo << endl;
    outFile << "Name: " << s.name << endl;
    outFile << "Marks: " << s.marks << endl;
    outFile << "-----------------------------" << endl;

    outFile.close();
    cout << "Student record saved successfully!" << endl;

    return 0;
}