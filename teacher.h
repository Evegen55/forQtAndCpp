#ifndef TEACHER_H
#define TEACHER_H
#pragma once
#include <string>

class teacher
{
public:
    teacher();
    teacher(std::string fName, std::string lName, unsigned __int8 ageSt);
    ~teacher();

    std::string getFirstName() const;
    void SetFirstName(std::string fName);
    std::string getLastName() const;
    void SetLastName(std::string lName);
    __int8 getAge() const;
    void SetAge(unsigned __int8 ageSt);

    void GradeStudent();
    void SitInClass();


private:
    std::string firstName;
    std::string lastName;
    unsigned __int8 age;
};

#endif // TEACHER_H
