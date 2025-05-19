#include <iostream>
using namespace std;

// ----------- Base Class -----------
class Media {
public:
    Media() {
        cout << "Media constructor called." << endl;
    }

    virtual ~Media() {  // Virtual destructor
        cout << "Media destructor called." << endl;
    }
};

// ----------- Derived Class -----------
class Video : public Media {
private:
    int* buffer;
public:
    Video() {
        buffer = new int[100];  // Allocate memory
        cout << "Video constructor: allocated buffer." << endl;
    }

    ~Video() {
        delete[] buffer;  // Clean up memory
        cout << "Video destructor: buffer deleted." << endl;
    }
};

int main() {
    Media* mediaPtr = new Video();  // Base class pointer to derived object

    cout << "--- Deleting mediaPtr ---" << endl;
    delete mediaPtr;  // Calls both Video and Media destructors

    return 0;
}
