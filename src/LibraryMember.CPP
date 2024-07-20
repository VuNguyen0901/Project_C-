#include "LibraryMember.h"
#include <iostream>
#include <algorithm>

LibraryMember::LibraryMember(const std::string &name, int memberID)
    : Member(name, memberID) {}

void LibraryMember::borrowBook(const Book &book) {
    borrowedBooks.push_back(book);
    std::cout << "Book titled \"" << book.getTitle() << "\" borrowed by " << getName() << std::endl;
}

void LibraryMember::returnBook(const Book &book) {
    auto it = std::find_if(borrowedBooks.begin(), borrowedBooks.end(),
        [&book](const Book &b) { return b.getBookID() == book.getBookID(); });
    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it);
        std::cout << "Book titled \"" << book.getTitle() << "\" returned by " << getName() << std::endl;
    }
}

void LibraryMember::displayInfo() const {
    Member::displayInfo();
    std::cout << "Borrowed Books: " << std::endl;
    for (const auto &book : borrowedBooks) {
        book.displayInfo();
        std::cout << std::endl;
    }
}
