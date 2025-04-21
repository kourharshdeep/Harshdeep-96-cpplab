/* To implement inheritance for a UG course(s) class, PG course class and deploma course class using multilevel inheritance.
WAP to
a. Create a base class with name UG course class.
b. Create a function with name subject_list(), here in this function display a list of subjects and ask user to select a choice from given list.
c. Create a function with name marks_obtained(), here in this function user ask to enter marks obtained in the selected course.
d. Create a derived class with name pg course class.
e. Create a function with name specialization(), here in this function display a list of subjects and ask user to select a choice from given.
f. Create a function with name marks_obtained(), here in this function user ask to enter marks obtained in the selected course.
g. Create a derived class with name diploma course class.
h. Create a function with name course_list(), here in this function display a list of subject and ask her to select a choice from given list.
i. Create a function with name marks_obtained(), here in this function user askto enter marks obtainedin the selected course.
j. Create a derived class with name result class.
k. Create a function with name selection_criteria(), here in this function display() a selection criteria for the post.
l. post1: software developer:-
5 points for percentage more than 80 percent in UG.
5 points for percentage more than 80 percent in PG.
5 points for percentage more than 60 percent in diploma.

Create a function with name final_result(), candidates secured more than 12 points are qualified for this post.
*/
#include <iostream>
#include <string>
using namespace std;
class UGCourse {
private:string ugSubject;
    float ugMarks;
public:void SubjectList() {
        cout << "UG Course Subjects:\n";
        cout << "1. Computer Science\n";
        cout << "2. Electronics\n";
        cout << "3. Mechanical\n";
        cout << "Select subject (1-3): ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: ugSubject = "Computer Science"; break;
            case 2: ugSubject = "Electronics"; break;
            case 3: ugSubject = "Mechanical"; break;
            default: ugSubject = "Unknown"; break;
        }
    }
    void RarksObtained() {
        cout << "Enter marks obtained in UG (" << ugSubject << "): ";
        cin >> ugMarks;
    }
    float getUGPercentage() {
        return ugMarks;
    }
};
class PGCourse : public UGCourse {
private:string pgSubject;
    float pgMarks;
public:void SpecializationList() {
        cout << "\nPG Course Specializations:\n";
        cout << "1. Data Science\n";
        cout << "2. VLSI\n";
        cout << "3. Thermal Engineering\n";
        cout << "Select specialization (1-3): ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: pgSubject = "Data Science"; break;
            case 2: pgSubject = "VLSI"; break;
            case 3: pgSubject = "Thermal Engineering"; break;
            default: pgSubject = "Unknown"; break;
        }
    }
    void Marksbtained() {
        cout << "Enter marks obtained in PG (" << pgSubject << "): ";
        cin >> pgMarks;
    }
    float getPGPercentage() {
        return pgMarks;
    }
};
class DiplomaCourse : public PGCourse {
private:string diplomaCourse;
    float diplomaMarks;
public:void CourseList() {
        cout << "\nDiploma Courses:\n";
        cout << "1. Web Development\n";
        cout << "2. Embedded Systems\n";
        cout << "3. AutoCAD\n";
        cout << "Select course (1-3): ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: diplomaCourse = "Web Development"; break;
            case 2: diplomaCourse = "Embedded Systems"; break;
            case 3: diplomaCourse = "AutoCAD"; break;
            default: diplomaCourse = "Unknown"; break;
        }
    }
    void MarksObtained() {
        cout << "Enter marks obtained in Diploma (" << diplomaCourse << "): ";
        cin >> diplomaMarks;
    }
    float getDiplomaPercentage() {
        return diplomaMarks;
    }
};
class Result : public DiplomaCourse {
    int totalPoints = 0;
public:void SelectionCriteria() {
        cout << "\n--- Selection Criteria for Software Developer Post ---\n";
        cout << "5 points for > 80% in UG\n";
        cout << "5 points for > 80% in PG\n";
        cout << "5 points for > 80% in Diploma\n";
        if (getUGPercentage() > 80)
            totalPoints += 5;
        if (getPGPercentage() > 80)
            totalPoints += 5;
        if (getDiplomaPercentage() > 80)
            totalPoints += 5;
    }
    void finalresult() {
        cout << "\nTotal Points Scored: " << totalPoints << "\n";
        if (totalPoints >= 12)
            cout << "Congratulations! You are qualified for the post.\n";
        else
            cout << "Sorry! You are not qualified for the post.\n";
    }
};
int main() {
    Result obj;
    obj.SubjectList();
    obj.RarksObtained();
    obj.SpecializationList();
    obj.Marksbtained();
    obj.CourseList();
    obj.MarksObtained();
    obj.SelectionCriteria();
    obj.finalresult();
    return 0;
}
