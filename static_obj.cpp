/* Normal class object v/s static object*/

#include<iostream>
using namespace std;
class program{
    public: program() { //default constructor of the class
        cout<<"Constructor called."<<endl;
    }
    ~program() { //destructor of the class
        cout<<"Destructor called."<<endl;
    }
    void display() {
        cout<<"Display function called"<<endl; //member function of class
    }
};
void fun() { //function with class object
    program obj1;
    obj1.display(); //member function inside this function
}
int main() {
    fun(); //function with class object called
    cout<<"Recalling fun function"<<endl;
    fun(); //function with class object
    return 0;
}