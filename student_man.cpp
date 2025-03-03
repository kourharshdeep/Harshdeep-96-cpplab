/* write a program 
create a class with name student_Managenent_System
store Student Data from RollNo 1 to 10
Data includes(Name, RollNo, Percentage)
Display All Data in Reverse Order using Array Of Object.
*/

#include<iostream>
using namespace std;
class Student_Management_System{
    int R;
    string N;
    float P;
    public: Student_Management_System(int RollNo, string Name, float Percentage){
        //cout<<"store rollnos from 1 to 10\n";
        R=RollNo;
        N=Name;
        P=Percentage;

    }
public: void display(){
    cout<<"the RollNo = "<<R<<"\t"<<"the Name = "<<N<<"\t"<<"the Percentage = "<<P<<"\n";
}
};
int main(){
    Student_Management_System obj[10]={{1,"in",89},{2,"pop",45.09},{3,"tom",45.09},{4,"rock",45.09},{5,"jery",45.09},{6,"paid",45.09},
    {7,"dack",45.09},{8,"pit",45.09},{9,"dock",45.09},{10,"nick",45.09}};
    int i;
    for (int i=9;i>=0;i--){
        obj[i].display();
    }
    return 0;
}