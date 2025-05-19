#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual double area() = 0; // Pure virtual function
    virtual void display() = 0; // Additional virtual function
    virtual ~Shape() {}         // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius;
    }
    void display() override {
        cout << "Circle with radius " << radius << " has area: " << area() << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;
    }
    void display() override {
        cout << "Rectangle with length " << length << " and width " << width << " has area: " << area() << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() override {
        return 0.5 * base * height;
    }
    void display() override {
        cout << "Triangle with base " << base << " and height " << height << " has area: " << area() << endl;
    }
};

// Main Function
int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Triangle(3.0, 7.0);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->display();
        delete shapes[i]; // Free memory
    }

    return 0;
}
