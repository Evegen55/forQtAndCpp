#include "person.h"
#include <iostream>

person::person()
{
    person::firstName = "firstName";
}
person::person(std::string firstName_in) {
    person::firstName = firstName_in;
}

person::~person()
{
    std::cout << "\n" << "memory released" << std::endl;
}

void person::SayHello()
{
    std::string s = "\nHello, " + person::firstName;
    std::cout << s << std::endl;
}
