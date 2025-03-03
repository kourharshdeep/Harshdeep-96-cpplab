/* wap to demonstrate working of array of object(Method1) */
#include<iostream>
using namespace std;
class Program{ //class declaration
    private: int regno; float marks; //private number of class
    public: Program(int R, float M) { //parametrized constructor of class
        regno= R;
        marks= M;
    }
    public: void display(){ //function of class
        cout<<"\n RegNumber = "<<regno<<"\t"<<"Marks = "<<marks;
    }
};
int main() {
    Program obj[3]={{101,450},{102,430},{103,440}}; //array of object with manual initialization
    for(int i=0; i<3; i++){
        obj[i].display(); //calling of display function with array of object
    }
    return 0;
}
