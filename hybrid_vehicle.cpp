/*(Multiple Inheritance & Cross-Industry Data Analysis)
Implement a Hybrid Vehicle Monitoring System using:
Base class 1: Vehicle (speed, fuel efficiency).
Base class 2: ElectricSystem (battery health, charge time).
Derived class: HybridCar that combines attributes from both.
Resolve ambiguity in function calls using explicit scope resolution when accessing common attributes.
*/
#include <iostream>
using namespace std;
// Base class 1: Vehicle
class Vehicle {
public:
    float speed;            // Speed in km/h
    float fuelEfficiency;   // Fuel efficiency in km/l
    void inputDetails() {
        cout << "Enter Vehicle speed (km/h): ";
        cin >> speed;
        cout << "Enter Vehicle fuel efficiency (km/l): ";
        cin >> fuelEfficiency;
    }
    void showDetails() {
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Fuel Efficiency: " << fuelEfficiency << " km/l" << endl;
    }
};
// Base class 2: ElectricSystem
class ElectricSystem {
public:
    float batteryHealth;    // Battery health in percentage
    float chargeTime;       // Charge time in hours
    void inputDetails() {
        cout << "Enter Battery health (%): ";
        cin >> batteryHealth;
        cout << "Enter Charge time (hrs): ";
        cin >> chargeTime;
    }
    void showDetails() {
        cout << "Battery Health: " << batteryHealth << "%" << endl;
        cout << "Charge Time: " << chargeTime << " hours" << endl;
    }
};
// Derived class: HybridCar (Multiple Inheritance)
class HybridCar : public Vehicle, public ElectricSystem {
public:
    void inputAllDetails() {
        cout << "--- Enter Hybrid Vehicle Data ---" << endl;
        // Resolving ambiguity: specify which class function to call
        Vehicle::inputDetails();
        ElectricSystem::inputDetails();
    }
    void displayAllDetails() {
        cout << "\n--- Hybrid Car Monitoring Report ---" << endl;
        // Resolving ambiguity using scope resolution
        Vehicle::showDetails();
        ElectricSystem::showDetails();
    }
};
// Main function
int main() {
    HybridCar myHybrid;
    // Get data for both base classes
    myHybrid.inputAllDetails();
    // Display combined data
    myHybrid.displayAllDetails();
    return 0;
}