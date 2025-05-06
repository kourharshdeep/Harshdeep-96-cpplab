//To search student records using files.
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// Define a structure for student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int searchRoll;
    bool found = false;

    cout << "Enter roll number to search: ";
    cin >> searchRoll;

    ifstream inFile("student.txt");

    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        if (line.find("Roll No:") != string::npos) {
            int rollNo = stoi(line.substr(9));
            if (rollNo == searchRoll) {
                found = true;
                cout << line << endl; // Roll No line
                getline(inFile, line); cout << line << endl; // Name line
                getline(inFile, line); cout << line << endl; // Marks line
                break;
            }
        }
    }

    if (!found) {
        cout << "Student with Roll No " << searchRoll << " not found." << endl;
    }

    inFile.close();
    return 0;
}