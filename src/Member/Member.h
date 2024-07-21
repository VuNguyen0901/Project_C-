#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
private:
    std::string name;
    int memberID;

public:
    Member(const std::string &name, int memberID);
    
    std::string getName() const;
    int getMemberID() const;
    virtual void displayInfo() const;
    virtual ~Member() = default; // Add virtual destructor
};

#endif // MEMBER_H
