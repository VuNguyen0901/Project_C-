#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int bookID;

public:
    Book(const std::string &title, const std::string &author, int bookID);
    
    std::string getTitle() const;
    std::string getAuthor() const;
    int getBookID() const;
    void displayInfo() const;
};

#endif // BOOK_H
