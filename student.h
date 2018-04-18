#ifndef STUDENT_H
#define STUDENT_H
#pragma once
#include <string>

class student
{
public:
    student();
    student(std::string fName, std::string lName, unsigned char ageSt);
    ~student();

    std::string getFirstName() const;
    void SetFirstName(std::string fName);
    std::string getLastName() const;
    void SetLastName(std::string lName);
    char getAge() const;
    void SetAge(unsigned char ageSt);

    void SitInClass();


private:
    std::string firstName;
    std::string lastName;
    unsigned char age;
};

#endif // STUDENT_H
