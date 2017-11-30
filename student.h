#ifndef STUDENT_H
#define STUDENT_H
#pragma once
#include <string>

class student
{
public:
    student();
    student(std::string fName, std::string lName, unsigned __int8 ageSt);
    ~student();

    std::string getFirstName() const;
    void SetFirstName(std::string fName);
    std::string getLastName() const;
    void SetLastName(std::string lName);
    __int8 getAge() const;
    void SetAge(unsigned __int8 ageSt);

    void SitInClass();


private:
    std::string firstName;
    std::string lastName;
    unsigned __int8 age;
};

#endif // STUDENT_H
