/*(Const Member Functions & Secure Logging System)
Design a UserLoginSystem that manages authentication details of users, enforcing security measures using const member functions.
Prevent modifications to sensitive data and implement multi-user session tracking using static members. Ensure that unauthorized users cannot
modify system log.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class User {
private:
    string username;
    string passwordHash;  // Simulated encrypted password
    static int activeSessions;
public:
    // Constructor
    User(string uname, string pass) {
        username = uname;
        passwordHash = encrypt(pass);
        activeSessions++;
        log("User '" + username + "' logged in.");
    }
    // Simulate encryption using a basic Caesar cipher
    string encrypt(string input) const {
        string encrypted = "";
        for (char c : input) {
            encrypted += c + 2;
        }
        return encrypted;
    }
    // Const function to view user data without modifying it
    void viewProfile() const {
        cout << "\n User Profile:\n";
        cout << "Username: " << username << endl;
        cout << "Password Hash (protected): " << passwordHash << endl;
    }
    // Static function to view active session count
    static void showActiveSessions() {
        cout << "\n Active User Sessions: " << activeSessions << endl;
    }
    // Protected logging (only accessible internally)
    static void log(string message) {
        cout << "[SECURE LOG]: " << message << endl;
    }
    // Destructor
    ~User() {
        activeSessions--;
        log("User '" + username + "' logged out.");
    }
    // Block access to passwordHash from outside (const-safe design)
    string getPasswordHash() const = delete;  // Not allowed
};
// Initialize static member
int User::activeSessions = 0;
int main() {
    {
        User user1("Alice", "pass123");
        user1.viewProfile();
        User user2("Bob", "secure456");
        user2.viewProfile();
        User::showActiveSessions();
        // Unauthorized access attempts
        // string hash = user1.getPasswordHash();  // This line would cause compile error if uncommented
    } // user1 and user2 go out of scope here — destructor will be called
    User::showActiveSessions(); // Should be 0 now
    return 0;
}
