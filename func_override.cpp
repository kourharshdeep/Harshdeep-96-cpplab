/* Function Over-riding:- Updation Base class function in derived class.
Basic Program
*/
#include<iostream>
using namespace std;
class Base {
    public: Base(){
        cout<<"\n Base Class Constructor";
    }
    public: ~Base() {
        cout<<"\n Base Class Destructor";
    }
    virtual void fun1() { //we are declaring base class function as virtual to instruct compiler to over-ride this function at run time
        cout<<"\n Base Class Function";
    }
};
class Derived: public Base{
    public: Derived(){
        cout<<"\n Derived Class Constructor";
    }
    public: ~Derived() {
        cout<<"\n Derived Class Destructor";
    }
    void fun1() override{ /*this keyword is optional not mandatory here but it is a good practice to use this */
        cout<<"\n Derived Class Function";
    }
};
int main() {
    Derived obj;
    obj.fun1();
    return 0;

}