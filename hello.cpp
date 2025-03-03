//function with no return type and no parameter
#include<iostream>
//include:- preprocessor directive
//iostream:- input output stream/ supports functions related to input and output.
// iostream have definition of all pre-define input and output functions used in this.
using namespace std;
/* Using is a keyword
namespace:- collection of pre-defined classes.
std:- name of the pre-define namespace.
*/
/* class is a keyword (pre-define word already defined in library) used to define a class
Program is a user define name.
For user define name, we use some naming connections.
*/
class Program { //memory will be allocated to this
    //block all statements are enclosed inside the bracket
    public: //Access specifier
    void Display() { //function definition without any return type or parameter
        cout<<"Hello"<<endl;
        cout<<"How are you?"<< endl;
    }
    public: void Fun(){
        cout<< "Meow";
    }
}; //terminator or end statement
int main() {
    Program obj;
/* syntax of object:- class name object name */
    obj.Display(); //function calling syntax
// object name .Access Method/ function name(); 
    obj.Fun();
    return 0;
}