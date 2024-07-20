#include "Book.h"
#include <iostream>

Book::Book(const std::string &title, const std::string &author, int bookID)
    : title(title), author(author), bookID(bookID) {}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getBookID() const {
    return bookID;
}

void Book::displayInfo() const {
    std::cout << "Book ID: " << bookID << "\nTitle: " << title << "\nAuthor: " << author << std::endl;
}
