#ifndef PERSON_H
#define PERSON_H
#pragma once
#include <string>


class person
{
public:
    person();
    person(std::string firstName_in);

    /*
     * While it looks similar to the a constructor, having no return type and the same name as the class,
     * except for the tilde, it's important to note that a destructor cannot have any arguments passed in to it.
     * Therefore, when writing your own destructors, you should not place arguments
     * between the parentheses for the destructor.
     * The compiler will handle the actual calling of the destructor when your object expires or the application is closing.
     * If you choose, you can place code inside the destructor.  One reason you may want to do this
     * is to ensure that any resources used by the object, that may not be destroyed or cleaned up,
     * are taken care of in your object's destructor code.
      */
    ~person();

    std::string getFirstName() const {
        return firstName;
    }

private:
    std::string firstName;
    std::string lastName;
};

#endif // PERSON_H
