// Method 1 (Pass by Value): Passing Object as Parameter to Function

#include<iostream>
using namespace std;
class result{
    public: string name; int rollno; float marks;
    public: result(string name1, int rollno1, float marks1) {
        name=name1;
        rollno=rollno1;
        marks=marks1;
    }
    public: void display(){
        cout<<"Name:"<<name<<"\tRoll Number:"<<rollno<<"\tMarks:"<<marks;
    }
    public: void credits(float sem1_marks, float sem2_marks, float sem3_marks){
        float total_credits = (sem1_marks + sem2_marks + sem3_marks)/10;
    }
};
void semester1(result sem1){
    sem1.marks=400;
    cout<<"\nMarks of Semester 1 is "<<sem1.marks;
}
void semester2(result sem2){
    sem2.marks=350;
    cout<<"\nMarks of Semester 2 is "<<sem2.marks;
}
void semester3(result sem3){
    sem3.marks=450;
    cout<<"\nMarks of Semester 3 is "<<sem3.marks;
}

int main(){
    result obj("Abc",1,0);
    obj.display();
    semester1(obj);
    semester2(obj);
    semester3(obj);
    return 0;
}