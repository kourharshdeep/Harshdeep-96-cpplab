//To edit student records using files.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    int searchRoll;
    bool found = false;

    cout << "Enter Roll No to edit: ";
    cin >> searchRoll;

    ifstream inFile("student.txt");
    ofstream tempFile("temp.txt");

    if (!inFile || !tempFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        if (line.find("Roll No:") != string::npos) {
            int rollNo = stoi(line.substr(9));
            if (rollNo == searchRoll) {
                found = true;

                Student s;
                s.rollNo = rollNo;

                cout << "Enter new name: ";
                cin.ignore();
                getline(cin, s.name);
                cout << "Enter new marks: ";
                cin >> s.marks;

                // Write updated record
                tempFile << "Roll No: " << s.rollNo << endl;
                tempFile << "Name: " << s.name << endl;
                tempFile << "Marks: " << s.marks << endl;
                getline(inFile, line); // skip original name
                getline(inFile, line); // skip original marks
            } else {
                // Write original record
                tempFile << line << endl;
                getline(inFile, line); tempFile << line << endl;
                getline(inFile, line); tempFile << line << endl;
            }
        } else {
            tempFile << line << endl;
        }
    }

    inFile.close();
    tempFile.close();

    // Replace original file
    remove("student.txt");
    rename("temp.txt", "student.txt");

    if (found)
        cout << "Record updated successfully!" << endl;
    else
        cout << "Record not found." << endl;

    return 0;
}