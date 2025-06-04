#include<iostream>
using namespace std;

//Base Class Shape.
class Shape {
    public:
    //Virtual function can be overridden by derived classes.
    virtual void calculate() {
        cout<<"Area of Your Shape ";
    }
    //Virtual Destructor- ensures proper cleanup of derived class objects.
    virtual ~Shape() {
        cout<<"Shape Destructor Call"<<endl;
    }
};

//Derived class Rectangle inherits from Shape.
class Rectangle: public Shape {
    public: int width, height, area;
    //Overriding the calculate() function.
    void calculate() {
        cout<<"Enter width of Rectangle ";
        cin>>width;
        cout<<"Enter Height of Rectangle ";
        cin>>height;
        area=height*width;
        cout<<"Area of Rectangle "<<area<<endl;
    }
    //Destructor of Rectangle.
    virtual ~Rectangle() {
        cout<<"Rectangle Destructor Call"<<endl;
    }
};

//Derived class Square inherits from Shape.
class Square: public Shape {
    public: int side, area;
    //Overriding the calculate() function.
    void calculate() {
        cout<<"Enter one side of Square ";
        cin>>side;
        area=side*side;
        cout<<"Area of Square "<<area<<endl;
    }
    //Destructor of Square.
    virtual ~Square(){
        cout<<"Square Destructor Called"<<endl;
    }
};

//Main function.
int main() {
    Shape *S; //Declare a pointer of base class type.
    Rectangle r; //Create a Rectangle Object.
    S=&r; //Base class pointer points to Rectangle object.
    S->calculate(); //Calls Rectangle's calculate() due to virtual function.
    Square sq; //Create a Square Obbject.
    S=&sq; //Base class pointer now points to Square object.
    S->calculate(); //Calls Square's calculate() due to virtual function.

    //Destructors will be called automatically when objects go out of shape.
    return 0;
}