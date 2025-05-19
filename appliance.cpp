#include <iostream>
using namespace std;

// ----------- Base Class -----------
class Appliance {
public:
    void showInfo() {
        cout << "This is a generic appliance." << endl;
    }

    virtual void start() {
        cout << "Starting appliance..." << endl;
    }

    virtual ~Appliance() {} // Virtual destructor for safe deletion
};

// ----------- Derived Class -----------
class WashingMachine : public Appliance {
public:
    void showInfo() {
        cout << "This is a washing machine." << endl;
    }

    void start() override {
        cout << "Starting washing machine..." << endl;
    }
};
int main() {
    Appliance* appliancePtr;
    WashingMachine wm;

    appliancePtr = &wm;

    cout << "--- Non-Virtual Function Call ---" << endl;
    appliancePtr->showInfo();  // Calls Appliance::showInfo()

    cout << "--- Virtual Function Call ---" << endl;
    appliancePtr->start();     // Calls WashingMachine::start()

    return 0;
}