#include "teacher.h"
#include <iostream>

teacher::teacher()
{

}

teacher::teacher(std::string fName, std::string lName, unsigned char ageSt)
{
    teacher::firstName = fName;
    teacher::lastName = lName;
    teacher::age = ageSt;
}

teacher::~teacher()
{

}

std::string teacher::getFirstName() const
{
    return firstName;
}

void teacher::SetFirstName(std::string fName)
{
    this->firstName = fName;
}

std::string teacher::getLastName() const
{
    return lastName;
}

void teacher::SetLastName(std::string lName)
{
    this -> lastName = lName;
}

char teacher::getAge() const
{
    return age;
}

void teacher::SetAge(unsigned char ageSt)
{
    this -> age = ageSt;
}

void teacher::GradeStudent()
{
    std::cout << "\n" << "Student graded" << std::endl;
}

void teacher::SitInClass()
{
    std::cout << "\n" << "Sitting in front of class" << std::endl;
}
