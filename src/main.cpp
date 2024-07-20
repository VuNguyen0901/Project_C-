#include "Library.h"
#include "Book.h"
#include "LibraryMember.h"

int main() {
    Library library;

    // Create books
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1);
    Book book2("To Kill a Mockingbird", "Harper Lee", 2);

    // Add books to the library
    library.addBook(book1);
    library.addBook(book2);

    // Create library members
    LibraryMember member1("John Doe", 101);
    LibraryMember member2("Jane Smith", 102);

    // Add members to the library
    library.addMember(member1);
    library.addMember(member2);

    // Members borrow books
    member1.borrowBook(book1);
    member2.borrowBook(book2);

    // Display library books and members
    library.displayBooks();
    library.displayMembers();

    // Members return books
    member1.returnBook(book1);
    member2.returnBook(book2);

    // Display library members after returning books
    library.displayMembers();

    return 0;
}
