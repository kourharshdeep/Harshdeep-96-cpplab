//wap to demonstrate the use of use of constant variable, constant function, constant object in a program.
#include<iostream>
using namespace std;
class program {
    public: const int a=1; //constant variable
    int b=2;
    public: void fun1() const { //consant function
        cout<<"Value of a and b is: "<<a<<"\t"<<b<<endl;
        //a++; //this will raise error as constant function cannot modify variable or normal variable
        //b++; //constant function will not modify value of any variable inside its function definition
    }
    public: void fun2() { //normal function
        cout<<"Value of a and b is: "<<a<<"\t"<<b<<endl;
        //a++; //this will raise error as we cannot modify value of constant variable after its initialization
        b++;
    }
};
int main() {
    const program obj1; //constant object of class, can call only constant member of class
    obj1.fun1();
    //obj1.fun2(); //this will raise error as constant object cannot call normal object
    program obj2; //normal object of class
    obj2.fun1(); //can call both constant and normal member of class
    obj2.fun2();
}