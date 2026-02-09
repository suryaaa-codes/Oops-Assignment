// Program 113: Library management system
#include <iostream>
#include <string>

using namespace std;
class Book {
    int bookId;
    string title;
    string author;
public:
    void getDetails() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
    }

    void displayDetails() {
        cout << "\nBook ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b[3];
    cout << "Enter details for 3 books:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nBook " << i + 1 << ":" << endl;
        b[i].getDetails();
    }

    cout << "\nLibrary Catalog:" << endl;
    for (int i = 0; i < 3; i++) {
        b[i].displayDetails();
    }

    return 0;
}



