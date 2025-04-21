/* (Array of Pointers to Objects & Multi-Level Healthcare System)
Design a HospitalManagement system using an array of pointers to objects to track patient records. Patients should be categorized into general,
 critical, and ICU cases, dynamically allocating memory based on their condition. Implement a function to display real-time be availability*/
#include <iostream>
#include <string>
using namespace std;
class Patient {
protected:
    string name;
    int age;
    string condition;
public:
    void setDetails(string name, int age, string condition) {
        this->name = name;
        this->age = age;
        this->condition = condition;
    }
    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Condition: " << condition << endl;
    }
    string getCondition() const {
        return condition;
    }
};
class HospitalManagement {
private:
    Patient* patients[100];  // Array of pointers to objects
    int count;
    int generalBeds, criticalBeds, icuBeds;
public:
    HospitalManagement(int g, int c, int i) : generalBeds(g), criticalBeds(c), icuBeds(i), count(0) {}
    ~HospitalManagement() {
        for (int i = 0; i < count; i++) {
            delete patients[i];
        }
    }
    void addPatient() {
        if (count >= 100) {
            cout << "Hospital capacity full!\n";
            return;
        }
        string name, condition;
        int age;
        cout << "Enter patient name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter condition (General / Critical / ICU): ";
        cin >> condition;
        // Check bed availability
        if ((condition == "General" && generalBeds == 0) ||
            (condition == "Critical" && criticalBeds == 0) ||
            (condition == "ICU" && icuBeds == 0)) {
            cout << "No bed available in " << condition << " ward.\n";
            return;
        }
        patients[count] = new Patient();
        patients[count]->setDetails(name, age, condition);
        count++;
        if (condition == "General") generalBeds--;
        else if (condition == "Critical") criticalBeds--;
        else if (condition == "ICU") icuBeds--;
        cout << "Patient admitted successfully.\n";
    }
    void displayPatients() const {
        if (count == 0) {
            cout << "No patients admitted yet.\n";
            return;
        }
        cout << "\n--- Patient Records ---\n";
        for (int i = 0; i < count; i++) {
            patients[i]->display();
        }
    }
    void showBedAvailability() const {
        cout << "\n--- Bed Availability ---\n";
        cout << "General: " << generalBeds << "\n";
        cout << "Critical: " << criticalBeds << "\n";
        cout << "ICU: " << icuBeds << "\n";
    }
};
int main() {
    int g, c, i;
    cout << "Enter available beds (General, Critical, ICU): ";
    cin >> g >> c >> i;
    HospitalManagement hm(g, c, i);
    int choice;
    do {
        cout << "\n--- Hospital Menu ---\n";
        cout << "1. Add Patient\n";
        cout << "2. Display All Patients\n";
        cout << "3. Show Bed Availability\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: hm.addPatient(); break;
            case 2: hm.displayPatients(); break;
            case 3: hm.showBedAvailability(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);
    return 0;
}