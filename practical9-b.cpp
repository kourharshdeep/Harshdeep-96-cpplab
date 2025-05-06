//To delete student records using files.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int searchRoll;
    bool found = false;

    cout << "Enter Roll No to delete: ";
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
            string recordBlock = line + "\n";

            getline(inFile, line); recordBlock += line + "\n"; // Name
            getline(inFile, line); recordBlock += line + "\n"; // Marks
            getline(inFile, line); recordBlock += line + "\n"; // Separator

            if (rollNo == searchRoll) {
                found = true; // Skip writing this record
                continue;
            } else {
                tempFile << recordBlock;
            }
        } else {
            tempFile << line << endl; // For any stray lines
        }
    }

    inFile.close();
    tempFile.close();

    remove("student.txt");
    rename("temp.txt", "student.txt");

    if (found)
        cout << "Record deleted successfully!" << endl;
    else
        cout << "Record not found." << endl;

    return 0;
}