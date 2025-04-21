//example of constant variable
/*example 1
#include<iostream>
using namespace std;
class Program{
    public: const int a=1;
    void display(){
        cout<<"Value of a is "<<a<<endl; //member function can access constant member of class
        // a=2; //this will raise error, we cannot modify constant variable
    }
};
int main(){
    Program obj;
    obj.display();
    return 0;
} */
/*example 2
#include<iostream>
using namespace std;
class Program{
    public:int b;
    public: Program(const int a){ //constant variable in constructor
        b=a; //passing value of constant variable to local variable
    }
    void display() {
        cout<<"Value of a is: "<<b; //member function can access constanst member of class
        //a=2; //this will raise error, we cannot modify constant variable
    }
};
int main() {
    Program obj(1);
    obj.display();
    return 0;
} */
/* Write a program to
a. Create a constant variable a initialize with value 5,
b. Create a variable b and initialize it with value 6,
c. Create a constant function Modify() and
Increment value of a and b by 2 inside function definition
d. Create a member function Update() and increment value of a and b by inside this function definition.
Write your observation in detail using comments.
#include<iostream>
using namespace std;
class program{
    public: const int a=5;
    int b=6;
    void Modify(){
        //a=a+2;
        b=b+2;
    }
    void update(){
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};
int main() {
    program obj;
    obj.Modify();
    obj.update();
    return 0;
} */