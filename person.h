#ifndef PERSON_H
#define PERSON_H
#include <string>


class person
{
public:
    person();
    person(std::string firstName_in);
    ~person();

    std::string getFirstName() const {
        return firstName;
    }

private:
    std::string firstName;
    std::string lastName;
};

#endif // PERSON_H
