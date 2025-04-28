/*Program:- This pointer*/
#include<iostream>
using namespace std;
class A{
    private: int x; //local variable
    public: A(int x) { //Parameterized Variable
        this->x =x;
    }
    public: void Display() {
        cout<<"Value of Local Variable is "<<this->x; //printing value of local variable
    }
};
int main() {
    A obj(1);
    obj.Display();
    return 0;
}