/*9	(Pointer to Objects & Dynamic Database Simulation)
Create a Database class that stores records of customers in a retail store. The system should allocate memory dynamically using
a pointer to objects and allow for real-time record addition and removal. Implement a this pointer to handle record updates efficiently.
*/
#include <iostream>
#include <string>
using namespace std;
class Customer {
private:
    int id;
    string name;
    double balance;
public:
    // Use 'this' pointer to set customer details
    void setDetails(int id, string name, double balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }
    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Balance: $" << balance << endl;
    }
    int getId() const {
        return id;
    }
};
class Database {
private:
    Customer* customers;
    int size;
    int capacity;
public:
    // Constructor
    Database(int cap) : capacity(cap), size(0) {
        customers = new Customer[capacity];
    }
    // Destructor
    ~Database() {
        delete[] customers;
    }
    void addCustomer() {
        if (size >= capacity) {
            cout << "Database is full. Cannot add more customers.\n";
            return;
        }
        int id;
        string name;
        double balance;
        cout << "Enter Customer ID: ";
        cin >> id;
        cout << "Enter Customer Name: ";
        cin.ignore(); // Clear newline before getline
        getline(cin, name);
        cout << "Enter Balance: ";
        cin >> balance;
        customers[size].setDetails(id, name, balance);
        size++;

        cout << "Customer added successfully.\n";
    }
    void removeCustomer() {
        int id;
        cout << "Enter Customer ID to remove: ";
        cin >> id;
        bool found = false;
        for (int i = 0; i < size; i++) {
            if (customers[i].getId() == id) {
                // Shift elements left
                for (int j = i; j < size - 1; j++) {
                    customers[j] = customers[j + 1];
                }
                size--;
                cout << "Customer removed successfully.\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Customer not found.\n";
        }
    }
    void displayAll() const {
        if (size == 0) {
            cout << "No customer records to display.\n";
            return;
        }
        cout << "Customer Records:\n";
        for (int i = 0; i < size; i++) {
            customers[i].display();
        }
    }
};
int main() {
    int capacity;
    cout << "Enter maximum number of customer records: ";
    cin >> capacity;
    Database db(capacity);
    int choice;
    do {
        cout << "\n--- Customer Database Menu ---\n";
        cout << "1. Add Customer\n";
        cout << "2. Remove Customer\n";
        cout << "3. Display All Customers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            db.addCustomer();
            break;
        case 2:
            db.removeCustomer();
            break;
        case 3:
            db.displayAll();
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);
    return 0;
}