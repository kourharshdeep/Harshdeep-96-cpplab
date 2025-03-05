/* Method 1: Pass by Reference
WAP to demonstrate working of Passing object as Parameter to function.
*/

#include<iostream>
using namespace std;
class program {
    public: int a;
    public: program(int b) { //parameterized constructor of program class.
        a=b;
    }
    public: void display() {
        cout<<"Value of a is "<<a<<endl;
    }
};
void modify(program &obj2) { //modify function will accept obj2 as parameter
    obj2.a=10; //any change inside this function will modify original value of a.
    //this will create reference to obj1.
    cout<<"Modified value is "<<obj2.a<<endl;
}
int main() {
    program obj1(9); //original object of class with initilization of parameterized constructor
    obj1.display();
    modify(obj1); //calling modify function
    obj1.display(); //used to show that even after using modify function the value of obj still remains same
    return 0;
}