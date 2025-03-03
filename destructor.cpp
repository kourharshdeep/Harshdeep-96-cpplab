// Code for Destructor
#include<iostream>
using namespace std;
class Area{
    private: float radius;
    public: Area() { //default constructor
        radius=5; //setting default radius to 5
    } 
    void Calculate() { //function to calculate area
        float area= 3.14*radius*radius;
        cout<<"Area of Circle: "<<area<<endl;
    }
    ~Area() { //destructor
        cout<<"Destructor called. Releasing Resources."<<endl;
    }
};
int main(){
    Area obj; //creating object
    obj.Calculate(); //calling function to calculate area
    return 0;
}