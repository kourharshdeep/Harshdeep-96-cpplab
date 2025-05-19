/* Program: Pointer to Object */
#include<iostream>
using namespace std;
class Program{
    public: int regNo; string name;
    public: Program(int number, string Name){
        regNo=number;
        name=Name;
    }
    public: void display() {
        cout<<"\n Name: "<<name;
        cout<<"\n Registration Number: "<<regNo;
    }
};
int main() {
    Program obj1(1, "user1"); //important for mcqs (select the correct pointer syntax)
    Program *obj2= &obj1; //Pointer to Object (*obj2 pointer pointing to address of object obj1)
    obj2->display(); //accessing class member function using Pointer to Object
    obj2->name="user2"; //modifying class member variable using Pointer to Object
    obj2->display();
    return 0;
}