#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "LibraryMember.h"
#include <vector>

class Library {
private:
    std::vector<Book> books;
    std::vector<LibraryMember> members;

public:
    void addBook(const Book &book);
    void addMember(const LibraryMember &member);
    void displayBooks() const;
    void displayMembers() const;
};

#endif // LIBRARY_H
