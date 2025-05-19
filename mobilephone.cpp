#include <iostream>
#include <string>
using namespace std;

// Base class
class Device {
protected:
    string brand;
public:
    // Parameterized constructor
    Device(string b) {
        brand = b;
        cout << "Device constructor called for brand: " << brand << endl;
    }
};

// Derived class
class MobilePhone : public Device {
    string model;
public:
    // Constructor chaining using initializer list
    MobilePhone(string b, string m) : Device(b), model(m) {
        cout << "MobilePhone constructor called for model: " << model << endl;
    }
};

// Main function
int main() {
    // Creating a MobilePhone object
    MobilePhone phone("Samsung", "Galaxy S21");

    return 0;
}
