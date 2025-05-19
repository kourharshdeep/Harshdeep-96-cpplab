/* Create a class Book with data member book name and place.
Create an object dynamically and display its data and deallocates its memory. */
#include <iostream>
using namespace std;
class Book{
public: string bookName; string bookPlace;
    void display(){
        cout << "\n Book Name: "<< bookName;
        cout << "\n Book Place: "<< bookPlace;
    }
};
int main() {
    Book *obj = new Book();
    obj-> bookName="Let us C";
    obj-> bookPlace="Library";
    obj->display();
    delete obj;
    return 0;
}