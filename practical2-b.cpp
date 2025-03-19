//To add the details of a student using a parameterized constructor of student class.
/*To allocate appropriate access specifiers to data members of the student and course class along with
justification in comments.
*/
/* We declared Member variables or Attributes of Class Student and Class Course like Student name, Student Id, Marks,
Percentage, Course Name, Course Id, Course Credit as private member to protect our data from unauthorized access.

We declared Member functions like Display(), Grade(), Club Assignment(), Course_information_display(), Course Selection() of class
Course and Class Student as public to share information between different members of class.

We declared Constructor and Destructor of Class Course and Class Student as public because we cannot assign any other access
specifier to them.

In OOPs Programming, we prioritize data over functions and provide layer to security to member variables to protect information
stored inside member variable is not accessible by any unauthorized entity.
*/
#include <iostream>
using namespace std;

class Student {
public:string studentName;int roll_no;float per;
public: Student(string N, int R, float P) {
        roll_no = R;
        studentName = N;
        per = P;
    }
void Display() {
        cout << "\nName = " << studentName << "\tRoll No = " <<roll_no<< "\tPercentage = " << per;
    }
};

int main() {
    int i;
    Student obj[3] = {{"ABC",90,92},{"DEF",95,91}, {"GHI",94,90}};
    for (i=0; i<3; i++) {
        cout<<"\nInformation of student with Roll no: ";
        cin>>obj[i].roll_no;
        obj[i].Display();
    }
}