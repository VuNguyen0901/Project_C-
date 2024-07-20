#include "Book.h"
#include <iostream>


Book::Book(const string &title, const string &author, int bookID)
    : title(title), author(author), bookID(bookID) {}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

int Book::getBookID() const {
    return bookID;
}

void Book::displayInfo() const {
    cout << "Book ID: " << bookID << "\nTitle: " << title << "\nAuthor: " << author << endl;
}
