#include "course.h"

course::course()
{

}

course::~course()
{

}

void course::setCourseTeacher(teacher cTeacher)
{
    this -> courseTeacher = cTeacher;
}

teacher course::getCourseTeacher() const
{
    return courseTeacher;
}

std::vector<student> course::getCourseStudents() const
{
    return courseStudents;
}

void course::addStudentToACourse(student cStudent)
{
    this -> courseStudents.push_back(cStudent);
}
