#include "lab_one.h"
#include "person.h"
#include "teacher.h"
#include "student.h"
#include "course.h"

#include <iostream>
#include<vector>

/*
 * The Student and Teacher classes need to have private member variables for first and last names, age, address, city, and phone along with public accessors for these.
 * Each class needs to have a default constructor and one that sets the values of the member variables when the object is created.  Each class should also have a destructor.
 * Ensure that you are using a header (.h) and an implementation file (.cpp) for each class.
 * The Teacher class needs to have a method called GradeStudent() that accepts no arguments and returns nothing.
 * Have this method output an appropriate message to the console such as "Student graded".
 * Add a method to both Student and Teacher called SitInClass().  it should take no arguments and return no arguments but,
 * to illustrate class scope, have the method output, "Sitting at front of class" for the teacher and "Sitting in main theater" for the students.
 * In the DoSmthWithStudents() method:
 *
 * Instantiate three Student objects called Student1, Student2, and Student3, provide values for the member variables.
 * Instantiate a Course object called Intermediate C++.
 * Add your three students to this Course object.
 * Instantiate at least one Teacher object.
 * Add that Teacher object to your Course object
 * Using cout statements where appropriate, follow these instructions:
 * Output the name of the course
 * Call the GradeStudent() method on the Teacher object
 * Leave your application open and answer the Lab assessment questions
 *
 * P.S. my version is quite different
 */
void DoSmthWithStudents()
{
    teacher *pTeacher = new teacher("John", "Doe", 35);
    pTeacher -> GradeStudent();
    std::cout << pTeacher -> getAge() + 15 << std::endl;

    student *student1 = new student("John_1", "Doe_1", 15);
    student *student2 = new student("John_2", "Doe_2", 14);
    student *student3 = new student("John_3", "Doe_3", 13);

    course *pCourse = new course();
    pCourse -> setCourseTeacher(*pTeacher);
    pCourse -> addStudentToACourse(*student1);
    pCourse -> addStudentToACourse(*student2);
    pCourse -> addStudentToACourse(*student3);

    std::cout << "\n Students in total: " << pCourse -> getCourseStudents().size() << std::endl;

    std::vector<student> gettedStudents = pCourse -> getCourseStudents();
    for (int i = 0; i<gettedStudents.size(); ++i) {
        gettedStudents[i].SitInClass();
    }

    std::cout << "The end" << std::endl;

}

