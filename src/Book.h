#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int bookID;

public:
    Book(const string &title, const string &author, int bookID);
    
    string getTitle() const;
    string getAuthor() const;
    int getBookID() const;
    void displayInfo() const;
};

#endif // BOOK_H
