/*Program to demonstrate working of Static function in program
1. Static functions belongs to class rather than instance of class.
2. can be accessed using class name. e.g.: Program::fun()
3. can access static member only, cannot access non static members of class
because they require instance of class for memory initialization.
*/

#include<iostream>
using namespace std;
class program {
    public: int a=5; //non static variable
    static int b; //static variable
    void fun1() { //non static function
        cout<<"\n (Fun1)Value of a is "<<a; //non static function can access both
        cout<<"\n (Fun1)Value of b is "<<b; //static and non static variable
    }
    static void fun2() { //static function
        //cout<<"\n (Fun2)Value of a is "<<a; //not able to access non variable a
        cout<<"\n (Fun2)Value of b is "<<b; //can access static variable only
    }
};
int program::b=1;
int main() {
    program obj1;
    obj1.fun1(); 
}