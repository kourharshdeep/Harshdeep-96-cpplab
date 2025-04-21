//Example of Multiple Inheritance

#include<iostream>
using namespace std;
class parent1 {
    public: parent1() {
        cout<<"Parent 1 Class Constructor"<<endl;
    }
    public: void fun1() {
        cout<<"Function 1 of Parent 1 Class"<<endl;
    }
};
class parent2 {
    public: parent2() {
        cout<<"Parent 2 Class Constructor"<<endl;
    }
    public: void fun2() {
        cout<<"Function 2 of Parent 2 Class"<<endl;
    }
};
class child: public parent2, public parent1 {
    public: child() {
        cout<<"Child Class Constructor"<<endl;
    }
    public: void fun3() {
        cout<<"Function 3 of Child Class"<<endl;
    }
};