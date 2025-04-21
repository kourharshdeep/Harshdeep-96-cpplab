/* (Static Objects & Access Control via Friend Functions)
Implement a CyberSecuritySystem where a static object tracks failed login attempts across a network. Use a friend function to reset failed
attempts after authentication is verified. If login attempts exceed a limit, trigger an automatic system lock.
*/
#include <iostream>
#include <string>
using namespace std;
class CyberSecuritySystem {
private:
    string username;
    string password;
    static int failedAttempts;     // shared by all objects
    static const int maxAttempts = 3;
    static bool systemLocked;
public:
    CyberSecuritySystem(string user, string pass)
        : username(user), password(pass) {}

    bool login(string enteredUser, string enteredPass) {
        if (systemLocked) {
            cout << "System is locked due to multiple failed attempts.\n";
            return false;
        }
        if (enteredUser == username && enteredPass == password) {
            cout << "Login successful!\n";
            return true;
        } else {
            failedAttempts++;
            cout << "Login failed. Attempt " << failedAttempts << "\n";
            if (failedAttempts >= maxAttempts) {
                systemLocked = true;
                cout << "Too many failed attempts. System locked.\n";
            }
            return false;
        }
    }
    // Friend function to reset failed attempts
    friend void resetFailedAttempts(CyberSecuritySystem& sys);
};
// Initialize static members
int CyberSecuritySystem::failedAttempts = 0;
bool CyberSecuritySystem::systemLocked = false;
// Friend function definition
void resetFailedAttempts(CyberSecuritySystem& sys) {
    CyberSecuritySystem::failedAttempts = 0;
    CyberSecuritySystem::systemLocked = false;
    cout << "Failed attempts reset. System unlocked.\n";
}
// Example usage
int main() {
    CyberSecuritySystem obj("admin", "password");
    // Try a few failed attempts
    obj.login("admin", "123");
    obj.login("admin", "1234");
    obj.login("admin", "wrong");
    // System is now locked
    obj.login("admin", "password");
    // Reset using friend function
    resetFailedAttempts(obj);
    // Try correct login again
    obj.login("admin", "password");
    return 0;
}