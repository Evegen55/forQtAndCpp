#ifndef TEACHER_H
#define TEACHER_H
#pragma once
#include <string>

class teacher
{
public:
    teacher();
    teacher(std::string fName, std::string lName, unsigned char ageSt);
    ~teacher();

    std::string getFirstName() const;
    void SetFirstName(std::string fName);
    std::string getLastName() const;
    void SetLastName(std::string lName);
    char getAge() const;
    void SetAge(unsigned char ageSt);

    void GradeStudent();
    void SitInClass();


private:
    std::string firstName;
    std::string lastName;
    unsigned char age;
};

#endif // TEACHER_H
