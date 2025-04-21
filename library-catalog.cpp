/*(Dynamic Initialization & Multi-Format Library Catalog)
Develop a LibraryCatalog class where books can be dynamically initialized through constructors with default values. The system should allow:
Adding physical books and e-books.
Assigning ISBN dynamically at runtime.
Searching books based on multiple criteria (author, title, genre, or publication year).  in cpp with comments*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Book {
private: string title; string author; string genre;
    int publicationYear; string isbn; bool isEbook; 
public: Book(string t = "Untitled", string a = "Unknown", string g = "General", int y = 0, bool ebook = false)
        : title(t), author(a), genre(g), publicationYear(y), isEbook(ebook) {}
    void setISBN(const string& newISBN) {
        isbn = newISBN;
    }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getGenre() const { return genre; }
    int getYear() const { return publicationYear; }
    string getISBN() const { return isbn; }
    string getFormat() const { return isEbook ? "E-Book" : "Physical"; }
    void display() const {
        cout << "-----------------------------\n";
        cout << "Title      : " << title << endl;
        cout << "Author     : " << author << endl;
        cout << "Genre      : " << genre << endl;
        cout << "Year       : " << publicationYear << endl;
        cout << "ISBN       : " << isbn << endl;
        cout << "Format     : " << getFormat() << endl;
    }
};
class LibraryCatalog {
private:
    vector<Book> books;
public:
    void addBook(const Book& book) {
        books.push_back(book);
    }
    void search(const string& keyword, const string& criteria) const {
        bool found = false;
        for (const Book& book : books) {
            if ((criteria == "title" && book.getTitle() == keyword) ||
                (criteria == "author" && book.getAuthor() == keyword) ||
                (criteria == "genre" && book.getGenre() == keyword) ||
                (criteria == "year" && to_string(book.getYear()) == keyword)) {
                book.display();
                found = true;
            }
        }
        if (!found) {
            cout << "No books found for given criteria.\n";
        }
    }
};
int main() {
    LibraryCatalog catalog;
    Book book1("To Kill a Mockingbird", "Harper Lee", "Fiction", 1960, false);
    book1.setISBN("9780061120084");
    Book book2("Inferno", "Dan Brown", "Mystery", 2013, true);
    book2.setISBN("9780804172264");
    Book book3("The Great Gatsby", "F. Scott Fitzgerald", "Classic", 1925, false);
    book3.setISBN("9780743273565");
    catalog.addBook(book1);
    catalog.addBook(book2);
    catalog.addBook(book3);
    cout << "Search by Author (Dan Brown):\n";
    catalog.search("Dan Brown", "author");
    cout << "\nSearch by Year (1925):\n";
    catalog.search("1925", "year");
    cout << "\nSearch by Genre (Fiction):\n";
    catalog.search("Fiction", "genre");
    return 0;
}
