/* Program to demonstrate the concept of Fucntion overloading.
Create a class with name spaces , create a functoin with name area() ,with area function calculate area of circle, area of rectangle,
area of triangle, using function overloading
*/

#include <bits/stdc++.h>
using namespace std;
class Shapes {
public: double area(double radius) {
        return M_PI * radius * radius;
    }
    double area(double length, double breadth) {
        return length * breadth;
    }
    double area(double base, double height, int) {
        return 0.5 * base * height;
    }
};
int main() {
    Shapes shape;
    double circleArea = shape.area(5.0);  
    double rectangleArea = shape.area(4.0, 6.0);  
    double triangleArea = shape.area(3.0, 8.0, 0);  
    cout << "Area of Circle: " << circleArea << endl;
    cout << "Area of Rectangle: " << rectangleArea << endl;
    cout << "Area of Triangle: " << triangleArea << endl;
    return 0;
}
