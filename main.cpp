#include <iostream>
#include <person.h>
#include <bystroustrup.h>
#include <different_functions.h>

int main()
{
    //    std::cout << "Hello World!" << endl;

    //    person person_1{"Evgenii Lartcev"};
    //    person person_2{};
    //    std::string firstname1 = person_1.getFirstName();
    //    std::cout << firstname1;
    //    std::cout << "\n";
    //    std::string firstname2 = person_2.getFirstName();
    //    std::cout << firstname2;
    //    std::cout << "\n";

    //    mainByBS();
    //    simplePointer();
    //    simplePointerDereferrence();
    //    referrenceType();

    int num = 3;
    cout << "In main()" << endl;
    cout << "Value of num is " << num << endl;

    passByValue(num);
    std::cout << "\n";
    passByRef(num);

    cout << "Back in main and the value of num is  " << num << endl;

    allocatingMemory();

    person *ptwo = new person{};
    std::string firstname2 = ptwo -> getFirstName();
    std::cout << firstname2;
    delete ptwo;
//    std::string firstname1 = ptwo -> getFirstName(); not allowed here

    return 0;
}
