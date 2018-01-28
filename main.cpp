#include <iostream>
#include <person.h>
#include <bystroustrup.h>
#include <different_functions.h>
#include <my_math.h>
#include <namespaceexample.h>

#include <lab_one.h>

using namespace StudyCpp;

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

    /*
     * The keyword new is used to allocate memory for an object at runtime and delete is used to release that memory.
     * This is also where the constructors and destructors play a big part.
     *
     * In the first line, we declare a pointer called pTwo
     * that will hold the memory address of a Person object that will reside
     * in an area of computer memory known as the heap.
     * We have not created an actual object in memory yet, we have simply asked the computer
     * to allocate sufficient memory to store the object.
     */
    person *ptwo = new person{};
    /*
     * You will now need to use the arrow selection operator to access the members of the class
     *
     */
    std::string firstname2 = ptwo -> getFirstName();//the same
    std::cout << firstname2;
    std::cout << "\n" << "ptwo before deleting: " << ptwo << endl;
    delete ptwo;
    //    std::string firstname1 = ptwo -> getFirstName(); not allowed here
    std::cout << "\n" << firstname2 << endl;
    std::cout << "\n" << "ptwo after deleting: " << ptwo << endl; //the same


    int result = my_math::pow(2, 10);
    std::cout << "\n" << result << endl;

    person person_hello{};
    person_hello.SayHello();

    // create a Person instance using default constructor
    // we dynamically allocate memory for a new Person object called pOne by using a pointer and the new keyword

    person *person_hello_two = new person();

    /*
     *  we create a new Person object called p without using a pointer or the new keyword.
     * The way that we declare our objects is important for determining how we call the member functions
     * or access the public member variables as shown in this code sample.
     * we declare a new reference variable that is a reference to the Person object we called p.
     * We call the SayHello() member function on p by using the dot operator and that works.
     * We also call the SayHello function using the dot operator and that works as well because we set pRef as a reference to p.
     */
    person p;
    person &pRef = p;

    p.SayHello();

    // pointer method of calling a member function
    /*
     * however that in order to call the SayHello() function from the dynamically allocated Person object called person_hello_two,
     * we had to use the member selection operator (->) to gain access to the SayHello() function.
     */
    person_hello_two->SayHello();

    // reference method of calling a member function
    pRef.SayHello();
    pRef.SetFirstName("Other name");
    pRef.SayHello();

    double radius = 12.5;
    double area = Geometry::Area(radius);
    std::cout << "\narea is: " << area << endl;

    std::cout << "\n\n\n\n" << endl;
    DoSmthWithStudents();

    std::cout << "Size of char : " << sizeof(char) << " byte" << endl;
    std::cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    std::cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
    std::cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
    std::cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;
    std::cout << "Size of unsigned long int : " << sizeof(unsigned int) << " bytes" << endl;
    std::cout << "Size of float : " << sizeof(float) << " bytes" <<endl;
    std::cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    std::cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" <<endl;

    //SAXPY operation with array on 1 m elements
    //TODO - measure time to do saxpy 1000 times and compare with java
    doSaxpy();


    return 0;
}
