#include "Member.h"
#include <iostream>

Member::Member(const std::string &name, int memberID)
    : name(name), memberID(memberID) {}

std::string Member::getName() const {
    return name;
}

int Member::getMemberID() const {
    return memberID;
}

void Member::displayInfo() const {
    std::cout << "Member ID: " << memberID << "\nName: " << name << std::endl;
}
