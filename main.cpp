#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
    float price;
};

void displayBookInfo(Book book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year: " << book.year << endl;
    cout << "Price: $" << book.price << endl;
}

int main() {

    Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 1925, 12.99};

    displayBookInfo(book1);

    return 0;
}
