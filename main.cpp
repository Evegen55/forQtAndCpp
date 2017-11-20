#include <iostream>
#include <person.h>
#include <bystroustrup.h>

int main()
{
    std::cout << "Hello World!" << endl;

    person person_1{"Evgenii Lartcev"};
    person person_2{};

    std::string firstname1 = person_1.getFirstName();
    std::cout << firstname1;
    std::cout << "\n";
    std::string firstname2 = person_2.getFirstName();
    std::cout << firstname2;
    std::cout << "\n";

    mainByBS();


    int num = 3;
    int* pNum = &num;
    std::cout << pNum;
    std::cout << "\n";

    return 0;
}
