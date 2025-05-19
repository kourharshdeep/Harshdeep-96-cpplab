#include <iostream>
using namespace std;

class MathUtility {
public:
    // Function Overloading
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Operator Overloading for '+'
    MathUtility operator+(const MathUtility& other) {
        MathUtility result;
        result.value = this->value + other.value;
        return result;
    }

    void setValue(int val) {
        value = val;
    }

    int getValue() const {
        return value;
    }

private:
    int value = 0;
};
class BankAccount {
public:
    virtual void showAccountType() {
        cout << "Generic Bank Account" << endl;
    }

    virtual ~BankAccount() {}  // Virtual destructor
};

class SavingsAccount : public BankAccount {
public:
    void showAccountType() override {
        cout << "Savings Account" << endl;
    }
};

class CurrentAccount : public BankAccount {
public:
    void showAccountType() override {
        cout << "Current Account" << endl;
    }
};
int main() {
    // ----------- Compile-Time Polymorphism -----------
    MathUtility mu1, mu2, mu3;
    mu1.setValue(10);
    mu2.setValue(20);

    mu3 = mu1 + mu2; // Operator overloading
    cout << "Operator Overloading Result: " << mu3.getValue() << endl;

    MathUtility util;
    cout << "Function Overloading (2 int): " << util.add(3, 4) << endl;
    cout << "Function Overloading (2 double): " << util.add(2.5, 3.5) << endl;
    cout << "Function Overloading (3 int): " << util.add(1, 2, 3) << endl;

    // ----------- Runtime Polymorphism -----------
    BankAccount* account;  // Base class pointer

    SavingsAccount savings;
    CurrentAccount current;

    account = &savings;
    account->showAccountType();  // Output: Savings Account

    account = &current;
    account->showAccountType();  // Output: Current Account

    return 0;
}