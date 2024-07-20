#ifndef LIBRARYMEMBER_H
#define LIBRARYMEMBER_H

#include "Member.h"
#include "Book.h"
#include <vector>

class LibraryMember : public Member {
private:
    std::vector<Book> borrowedBooks;

public:
    LibraryMember(const std::string &name, int memberID);
    
    void borrowBook(const Book &book);
    void returnBook(const Book &book);
    void displayInfo() const override;
};

#endif // LIBRARYMEMBER_H
