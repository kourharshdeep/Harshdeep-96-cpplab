#include<iostream>
using namespace std;
class parent {
    public: parent() {  //base class constructor
        cout<<"Parent class constructor"<<endl;
    }
    public: ~parent() {  //base class destructor
        cout<<"Parent class destructor"<<endl;
    }
    void fun1() {  //base class function
        cout<<"Parent class function 1"<<endl;
    }
};
class child: public parent {  //child class extending parent class
    public: child() {   //derived class 1 constructor
        cout<<"Child class constructor"<<endl;
    }
    public: ~child() {  //derived class 1 destructor
        cout<<"Child class destructor"<<endl;
    }
    void fun2() {   //derived class 1 function
        cout<<"Child class function 2"<<endl;
    }
};
class grand_child: public child {   //grand child class extending child class (To implement multi-level inheritance)
    public: grand_child() {   //derived class 2 constructor
        cout<<"Grand Child class Constructor"<<endl;
    }
    public: ~grand_child() {   //derived class 2 destructor
        cout<<"Grand Child class Destructor"<<endl;
    }
    void fun3() {   //derived class 2 function
        cout<<"Grand Child class function 3"<<endl;
    }
};
int main() {
    grand_child obj;
    obj.fun1();
    obj.fun2();
    obj.fun3();
    return 0;
}