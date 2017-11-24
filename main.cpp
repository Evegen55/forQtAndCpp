#include <iostream>
#include <person.h>
#include <bystroustrup.h>
#include <different_functions.h>
#include <my_math.h>

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
    std::string firstname2 = ptwo -> getFirstName();//the same
    std::cout << firstname2;
    std::cout << "\n" << "ptwo before deleting: " << ptwo << endl;
    delete ptwo;
    //    std::string firstname1 = ptwo -> getFirstName(); not allowed here
    std::cout << "\n" << firstname2 << endl;
    std::cout << "\n" << "ptwo after deleting: " << ptwo << endl; //the same


    int result = my_math::pow(2, 10);
    std::cout << "\n" << result << endl;

    return 0;
}
