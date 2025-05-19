#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char calculateGrade(float marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 40) return 'D';
    else return 'F';
}

int main() {
    ifstream inputFile("students.txt");        // Input file
    ofstream outputFile("results.txt");        // Output file

    if (!inputFile || !outputFile) {
        cerr << "Error opening files!" << endl;
        return 1;
    }

    string name;
    float marks;

    outputFile << "Name\t\tMarks\tGrade" << endl;
    outputFile << "-----------------------------" << endl;

    while (inputFile >> name >> marks) {
        char grade = calculateGrade(marks);
        outputFile << name << "\t\t" << marks << "\t" << grade << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Student results processed successfully." << endl;
    return 0;
}
