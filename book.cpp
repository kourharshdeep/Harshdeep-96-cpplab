#include <iostream>
#include <iomanip>  // for setw, setprecision, left, right
#include <string>
using namespace std;

const int MAX_BOOKS = 3;

class Book {
public:
    int id;
    string title;
    string author;
    float price;

    void input() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();  // clear newline from buffer

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    void display() const {
        cout << left << setw(10) << id
             << setw(30) << title
             << setw(25) << author
             << right << setw(10) << fixed << setprecision(2) << price << endl;
    }
};

int main() {
    Book books[MAX_BOOKS];

    cout << "=== Enter Details of " << MAX_BOOKS << " Books ===" << endl;
    for (int i = 0; i < MAX_BOOKS; ++i) {
        cout << "\nBook " << i + 1 << ":" << endl;
        books[i].input();
    }

    cout << "\n\n=== Library Book List ===" << endl;
    cout << left << setw(10) << "ID"
         << setw(30) << "Title"
         << setw(25) << "Author"
         << right << setw(10) << "Price" << endl;
    cout << string(75, '-') << endl;

    for (int i = 0; i < MAX_BOOKS; ++i) {
        books[i].display();
    }

    return 0;
}
