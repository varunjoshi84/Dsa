#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:
    
    Book() {
        title = "Unknown Title";
        author = "Unknown Author";
        pages = 0;
    }

    
    Book(string t, string a) {
        title = t;
        author = a;
        pages = 0;  
    }

    
    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
    }

  
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main() {
    
    Book book1;
    cout << "Physios:" << endl;
    book1.displayDetails();
    cout << endl;

   
    Book book2("Chemestiriy", "Amitab Bachan");
    cout << "Book 2 Details:" << endl;
    book2.displayDetails();
    cout << endl;

    
    Book book3("maaith", "Neha Kakoor", 328);
    cout << "Book 3 Details:" << endl;
    book3.displayDetails();

    return 0;
}
