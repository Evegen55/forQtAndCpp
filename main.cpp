#include <iostream>
#include <person.h>
#include <bystroustrup.h>
#include <different_functions.h>
#include <my_math.h>
#include <namespaceexample.h>
#include <lab_one.h>

#include <algorithm>

#include <utility>

#include <MMath.h>
#include <limits.h>
#include <float.h>
#include <cstring>

#include <car.h>

#include "linux_fork_example.h"

using namespace StudyCpp;

class base {
public:
    base()
    { cout<<"Constructing base \n"; }
    virtual ~base()
    { cout<<"Destructing base \n"; }
};

class derived: public base {
public:
    derived()
    { cout<<"Constructing derived \n"; }
    ~derived()
    { cout<<"Destructing derived \n"; }
};


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

    //doSaxpyAndMeasureTime();

    // A normal integer variable
    int Var = 10;

    // A pointer variable that holds address of var.
    int *ptr = &Var;

    // This line prints value at address stored in ptr.
    // Value stored is value of variable "var"
    printf("Value of Var = %d\n", *ptr);

    // The output of this line may be different in different
    // runs even on same machine.
    printf("Address of Var = %p\n", ptr);

    // We can also use ptr as lvalue (Left hand
    // side of assignment)
    *ptr = 20; // Value at address is now 20

    // This prints 20
    printf("After doing *ptr = 20, *ptr is %d\n", *ptr);

    std::cout << "\n\nDeclare an array";
    // Declare an array
    int v[3] = {10, 100, 200};

    // Declare pointer variable
    int *ptr1;

    // Assign the address of v[0] to ptr
    ptr1 = v;

    for (int i = 0; i < 3; i++)
    {
        printf("Value of *ptr = %d\n", *ptr1);
        printf("Value of ptr = %p\n\n", ptr1);

        // Increment pointer ptr by 1
        ptr1++;
    }

    pair <int, char> PAIR1 ;

    PAIR1.first = 100;
    PAIR1.second = 'G' ;

    std::cout << PAIR1.first << " " ;
    std::cout << PAIR1.second << endl ;

    std::cout << "\n https://www.geeksforgeeks.org/sort-algorithms-the-c-standard-template-library-stl/ \n";
    int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    std::cout << "\n The array before sorting is : ";
    show(a);

    sort(a, a+10);

    std::cout << "\n\n The array after sorting is : ";
    show(a);

    std::cout << "\n\n https://www.geeksforgeeks.org/isblank-in-cc/ \n";
    isblankExample();



    pair  <string,double> g1 ("GeeksForGeeks", 1.23); //initialized,  different data type
    pair  <int, char> g2(1, 'a');
    pair  <int, int> g3(1, 10);   //initialized,  same data type
    pair  <int, int> g4(g3);    //copy of g3

    std::cout << "g3.second = " << g3.second << endl ;

    std::cout << "\n\n\n";
    pair <int, double> PAIR111 ;
    pair <string, char> PAIR222 ;

    std::cout << PAIR111.first << endl ;  //it is initialised to 0
    std::cout << PAIR111.second << endl ; //it is initialised to 0

    std::cout << " ";

    std::cout << PAIR222.first << endl ;  //it prints nothing i.e NULL
    std::cout << PAIR222.second << endl ; //it prints nothing i.e NULL

    pair <string, double> PAIR3 ;
    PAIR3 = make_pair ("GeeksForGeeks is Best",4.56);
    std::cout << PAIR3.first << " " ;
    std::cout << PAIR3.second << endl ;

    //logical

    pair<int, int>pair1 = make_pair(1, 12);
    pair<int, int>pair2 = make_pair(9, 12);
    pair<int, int>pair3 = make_pair(9, 11);
    pair<int, int>pair4 = make_pair(10, 11);

    cout << (pair1 == pair2) << endl; //0 NO
    cout << (pair1 != pair2) << endl; //1 YES
    cout << (pair1 >= pair2) << endl; //0 NO
    cout << (pair1 <= pair2) << endl; //1 YES
    cout << (pair1 > pair2) << endl; //0 NO
    cout << (pair1 < pair2) << endl; //1 YES
    cout << (pair3 < pair2) << endl; //1 YES
    cout << (pair2 < pair4) << endl; //1 YES

    doVectors();

    std::cout << "https://www.geeksforgeeks.org/list-cpp-stl/" << endl;
    doLists();

    std::cout << "\n https://www.geeksforgeeks.org/deque-cpp-stl/" << endl;
    doDeque();

    std::cout << "\n https://www.geeksforgeeks.org/queue-cpp-stl/" << endl;
    doQeue();


    long resultMM = MMath::pow(2, 30);
    cout << "\n2 power 30 = " << resultMM << endl;

    std::cout << "\nhttps://www.geeksforgeeks.org/virtual-destructor/" << endl ;
    derived *d = new derived(); //order to create: Constructing base, Constructing derived
    base *b = d;//pointer only
    delete b; //invocation order: Destructing derived, Destructing base

#ifdef LONG_LONG_MAX
    std::cout << "\nLONG_LONG_MAX = " << LONG_LONG_MAX <<std::endl;
#elif LLONG_MAX
    std::cout << "\nLLONG_MAX = " << LLONG_MAX <<std::endl;
#endif

    std::cout << "\nINT_MAX = " << INT_MAX <<std::endl;
    long double counter1;

    //Strings in C++
    //way 1
    char str_c1[10] = "Hello";
    char str_c2[10] = "World";
    char str_c3[10];
    int  len_c ;

    // copy str1 into str3
    strcpy( str_c3, str_c1);
    std::cout << "strcpy( str_c3, str_c1) : " << str_c3 << std::endl;

    // concatenates str1 and str2
    strcat( str_c1, str_c2);
    std::cout << "strcat( str_c1, str_c2): " << str_c1 << std::endl;

    // total lenghth of str1 after concatenation
    len_c = strlen(str_c1);
    std::cout << "strlen(str_c1) : " << len_c << std::endl;

    //way 2
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string str3;
    int  len ;

    // copy str1 into str3
    str3 = str1;
    std::cout << "str3 : " << str3 << std::endl;

    // concatenates str1 and str2
    str3 = str1 + str2;
    std::cout << "str1 + str2 : " << str3 << std::endl;

    // total length of str3 after concatenation
    len = str3.size();
    std::cout << "str3.size() :  " << len << std::endl;

    person pr;
    person *pr_pr = new person();
    pr.SayHello();
    pr_pr->SayHello();

    //1) parent constructor invoked (Vehicle)
    //2) child constructor invoked (Car)
    Car car;
    car.GetPrivateParentsMembers();

    std::printf("\nExample with linux processes\n");
    linux_fork_example();
    std::printf("\nExample 2 with linux processes\n");
    linux_fork_example2();

    return 0;
}
