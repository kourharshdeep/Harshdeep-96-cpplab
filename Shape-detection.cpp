/* 15. (Virtual Functions & AI-Based Shape Classification)
Create an AI-based Shape Detection System using a base class Shape with a virtual function identify(). Derive Rectangle,
Circle, and Triangle classes that override identify() to recognize complex geometric patterns dynamically. Test the system
with real-time images as input.
 */
#include <iostream>
#include <string>
using namespace std;

// Base class representing a general shape
class Shape {
public:
    // Pure virtual function to be overridden by derived classes
    virtual void identify() = 0;

    // Virtual destructor to ensure proper cleanup of derived objects
    virtual ~Shape() {}
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    // Override the identify function for Rectangle
    void identify() override {
        cout << "AI Model: This shape is identified as a Rectangle." << endl;
    }
};

// Derived class for Circle
class Circle : public Shape {
public:
    // Override the identify function for Circle
    void identify() override {
        cout << "AI Model: This shape is identified as a Circle." << endl;
    }
};

// Derived class for Triangle
class Triangle : public Shape {
public:
    // Override the identify function for Triangle
    void identify() override {
        cout << "AI Model: This shape is identified as a Triangle." << endl;
    }
};

// Simulated function that detects shapes based on input string
// In a real AI system, this would use image processing libraries like OpenCV
Shape* detectShape(string input) {
    if (input == "rectangle") {
        return new Rectangle(); // return Rectangle object
    } else if (input == "circle") {
        return new Circle();    // return Circle object
    } else if (input == "triangle") {
        return new Triangle();  // return Triangle object
    } else {
        // If shape is not recognized
        cout << "AI Model: Unable to detect shape." << endl;
        return nullptr;
    }
}

// Main function to test the shape detection system
int main() {
    string shapeInput;

    // Ask user to simulate detected shape (as if AI processed an image)
    cout << "Enter detected shape (rectangle, circle, triangle): ";
    cin >> shapeInput;

    // Call the detection system (simulated AI)
    Shape* shape = detectShape(shapeInput);

    // If a valid shape was detected, call its identify() method
    if (shape) {
        shape->identify();
        delete shape; // Clean up memory
    }

    return 0;
}
