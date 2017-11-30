#ifndef COURSE_H
#define COURSE_H
#pragma once

#include "teacher.h"
#include "student.h"

#include<vector>


class course
{
public:
    course();
    ~course();

    void setCourseTeacher(teacher cTeacher);
    teacher getCourseTeacher() const;
    std::vector<student> getCourseStudents() const;
    void addStudentToACourse(student cStudent);

private:
    teacher courseTeacher;
    std::vector<student> courseStudents;
};

#endif // COURSE_H
