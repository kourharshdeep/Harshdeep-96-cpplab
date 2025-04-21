/*Constructors & Destructors
(Parameterized Constructor & Smart Device Configuration)
Develop a SmartDevice class that simulates a home automation system. Implement constructor overloading to support multiple initialization modes:
Default mode: Initializes with basic settings.
Custom mode: Accepts device type, power usage, and smart features.
Secure mode: Initializes with encrypted authentication
*/
#include <iostream>
#include <string>
using namespace std;
class SmartDevice {
private:
    string deviceType;
    double powerUsage; // in watts
    string features;
    bool isSecure;
    string encryptedAuth;
public:
    // Default constructor (Basic settings)
    SmartDevice() {
        deviceType = "Generic Device";
        powerUsage = 10.0;
        features = "Basic ON/OFF";
        isSecure = false;
        encryptedAuth = "";
        cout << "Initialized in Default Mode.\n";
    }
    // Custom constructor (Custom Mode)
    SmartDevice(string type, double power, string feat) {
        deviceType = type;
        powerUsage = power;
        features = feat;
        isSecure = false;
        encryptedAuth = "";
        cout << "Initialized in Custom Mode.\n";
    }
    // Secure constructor (Secure Mode with authentication)
    SmartDevice(string type, double power, string feat, string auth) {
        deviceType = type;
        powerUsage = power;
        features = feat;
        encryptedAuth = encrypt(auth);
        isSecure = true;
        cout << "Initialized in Secure Mode with Encrypted Authentication.\n";
    }
    // Simulated encryption (for illustration)
    string encrypt(string input) {
        string encrypted = "";
        for (char ch : input) {
            encrypted += ch + 1; // Simple Caesar cipher
        }
        return encrypted;
    }
    // Show device info
    void showDetails() {
        cout << "\n Device Information:\n";
        cout << "Type       : " << deviceType << endl;
        cout << "Power Usage: " << powerUsage << " W\n";
        cout << "Features   : " << features << endl;
        if (isSecure) {
            cout << "Secure     : Yes\n";
            cout << "Auth Token : " << encryptedAuth << endl;
        } else {
            cout << "Secure     : No\n";
        }
    }
    // Destructor
    ~SmartDevice() {
        cout << "Device '" << deviceType << "' shutting down. Resources released.\n";
    }
};
int main() {
    // Default mode device
    SmartDevice device1;
    device1.showDetails();
    // Custom mode device
    SmartDevice device2("Smart Light", 7.5, "Dimmable, Remote Access");
    device2.showDetails();
    // Secure mode device
    SmartDevice device3("Smart Lock", 5.0, "Remote Unlock, Notifications", "mySecret123");
    device3.showDetails();
    return 0;
}
