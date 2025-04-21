/* Copy Constructor & Deep Copy for Image Processing)
Develop an ImageProcessing class that handles image files. Implement a copy constructor to ensure deep copy of pixel data when applying filters 
or transformations. Compare deep copy vs. shallow copy by modifying one object’s pixels and observing unintended modifications 
in the other object.
*/
#include <iostream>
#include <cstring> // for memcpy
using namespace std;
class ImageProcessing {
private:
    int width;
    int height;
    unsigned char* pixels; // dynamically allocated pixel array
public:
    // Constructor
    ImageProcessing(int w, int h) : width(w), height(h) {
        pixels = new unsigned char[width * height];
        for (int i = 0; i < width * height; i++)
            pixels[i] = 0; // initialize pixels to black (0)
    }
    // Copy Constructor (Deep Copy)
    ImageProcessing(const ImageProcessing& other)
        : width(other.width), height(other.height) {
        pixels = new unsigned char[width * height];
        memcpy(pixels, other.pixels, width * height);
        cout << "Deep copy constructor called.\n";
    }
    // Destructor
    ~ImageProcessing() {
        delete[] pixels;
    }
    // Set pixel value at a specific index
    void setPixel(int index, unsigned char value) {
        if (index >= 0 && index < width * height)
            pixels[index] = value;
    }
    // Get pixel value
    unsigned char getPixel(int index) const {
        if (index >= 0 && index < width * height)
            return pixels[index];
        return 0;
    }
    // Display pixel data
    void displayPixels() const {
        for (int i = 0; i < width * height; i++)
            cout << (int)pixels[i] << " ";
        cout << "\n";
    }
    // Shallow copy for comparison
    void shallowCopyFrom(const ImageProcessing& other) {
        // WARNING: This leads to shared pixel data (shallow copy)
        width = other.width;
        height = other.height;
        pixels = other.pixels;
        cout << "Shallow copy performed.\n";
    }
};
int main() {
    ImageProcessing obj1(5, 1); // 5 pixels
    obj1.setPixel(0, 100);
    obj1.setPixel(1, 150);
    cout << "Original Image:\n";
    obj1.displayPixels();

    // Deep copy using copy constructor
    ImageProcessing obj2 = obj1;
    obj2.setPixel(0, 255); // Modify deep copy
    cout << "\nAfter modifying deep copy:\n";
    cout << "Original Image:\n";
    obj1.displayPixels(); // should remain unchanged
    cout << "Deep Copy Image:\n";
    obj2.displayPixels(); // should reflect changes

    // Shallow copy example
    ImageProcessing obj3(5, 1);
    obj3.shallowCopyFrom(obj1);
    obj3.setPixel(1, 200); // modifies original too
    cout << "\nAfter modifying shallow copy:\n";
    cout << "Original Image:\n";
    obj1.displayPixels(); // will show changed pixel
    cout << "Shallow Copy Image:\n";
    obj3.displayPixels();
    return 0;
}