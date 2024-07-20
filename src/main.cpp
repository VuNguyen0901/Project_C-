// #include "Library.h"
#include "Book.h"
#include "Member.h"

int main() {
    // Library library;

    // Create books
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1);
    Book book2("To Kill a Mockingbird", "Harper Lee", 2);

    book1.displayInfo();
    Member member1("John Doe", 101);
    member1.displayInfo();
    
    return 0;
}
