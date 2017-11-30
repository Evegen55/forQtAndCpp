#include "student.h"
#include <iostream>

student::student()
{
//    student::firstName = "fName";
//    student::lastName = "lName";
//    student::age = 18;
}

student::student(std::string fName, std::string lName, unsigned char ageSt)
{
    student::firstName = fName;
    student::lastName = lName;
    student::age = ageSt;
}

student::~student()
{

}

std::string student::getFirstName() const
{
    return firstName;
}

void student::SetFirstName(std::string fName)
{
    this->firstName = fName;
}

std::string student::getLastName() const
{
    return lastName;
}

void student::SetLastName(std::string lName)
{
    this -> lastName = lName;
}

char student::getAge() const
{
    return age;
}

void student::SetAge(unsigned char ageSt)
{
    this -> age = ageSt;
}

void student::SitInClass()
{
    std::cout << "\n" << this -> firstName << " is sitting in main theater" << std::endl;
}
