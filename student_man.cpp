/* WAP to create a class with name Student_Management_System, store Student data
from Rollno 1 to 10. Data includes (Name, RollNo, Percentage).
Display all data in Reverse order using array of object.
*/

#include<iostream>
using namespace std;
class Student_Management_System{
    private: string name; int rollno; float percentage;
    public: Student_Management_System(string n, int r, float p) {
        name = n;
        rollno = r;
        percentage = p;
    }
    public: void display() {
        cout << "\n Name: " <<name<< "\t"<<"RollNo: "<<rollno<<"\t"<< "Percentage: "<<percentage;
    }
};
int main() {
    Student_Management_System obj[10]={};
    for(int i=10;i>0;i--){
        obj[i].display();
    }
    return 0;
}