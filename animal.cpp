#include <iostream>
using namespace std;

// ----------- Base Class -----------
class Animal {
public:
    void speak() {
        cout << "Animal speaks (non-virtual)" << endl;
    }

    virtual void move() {
        cout << "Animal moves (virtual)" << endl;
    }

    virtual ~Animal() {}  // Virtual destructor for safe polymorphism
};

// ----------- Derived Class -----------
class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks (non-virtual)" << endl;
    }

    void move() override {
        cout << "Dog runs (virtual)" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dogObj;

    animalPtr = &dogObj;

    cout << "--- Calling speak() ---" << endl;
    animalPtr->speak();  // Calls Animal::speak() — non-virtual

    cout << "--- Calling move() ---" << endl;
    animalPtr->move();   // Calls Dog::move() — virtual

    return 0;
}
