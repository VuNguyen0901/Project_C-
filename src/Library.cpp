#include "Library.h"
#include <iostream>

void Library::addBook(const Book &book) {
    books.push_back(book);
}

void Library::addMember(const LibraryMember &member) {
    members.push_back(member);
}

void Library::displayBooks() const {
    std::cout << "Library Books: " << std::endl;
    for (const auto &book : books) {
        book.displayInfo();
        std::cout << std::endl;
    }
}

void Library::displayMembers() const {
    std::cout << "Library Members: " << std::endl;
    for (const auto &member : members) {
        member.displayInfo();
        std::cout << std::endl;
    }
}
