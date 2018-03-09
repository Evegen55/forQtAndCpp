#include<different_functions.h>
#include <iostream>
#include <chrono>  // for high_resolution_clock
#include <ctype.h>

#include <list>
#include <iterator>

/**
 * @brief simplePointer
 *
 * Now that you know what a pointer is, you may be wondering why you need them.
 * One reason for using pointers is application performance.
 * In our simple examples thus far, the amount of data that we have passed into functions has been small.
 * But if we were using large data structures, as class files can sometimes be,
 * or if need to perform repetitive operations on lookup tables,
 * then it is far more efficient to pass a pointer, which is just the memory address,
 * than it is to pass the entire data structure.
 * As you saw in the code example that passed a variable by reference,
 * pointers can also be used to modify the value in the variable passed in.
 * Once again, the pointer provides a direct link to the underlying value of the variable
 * allowing you to change the value without the overhead of copying the value into the function.
 * Pointers also allow you to dynamically allocate memory in your application.
 * You may run across a requirement for this when creating arrays and objects in your C++ code.
 * Dynamically allocating means that you do not need to know the size of memory
 * that will be needed for an object at compile time but rather that the size will be allocated during runtime of the application.
 */

void simplePointer()
{

    int num = 3;
    int *pNum = &num;
    std::cout << "\n";
    std::cout << "pointer to an int is: ";
    std::cout << pNum;
    std::cout << "\n";
    std::cout << *pNum; //Using the dereference operator, you can gain direct access to the underlying value in the variable num.
    std::cout << "\n";
}

void simplePointerDereferrence()
{
    int num = 3;
    int *pNum = &num;
    cout << "pNum = " <<pNum << endl;
    cout << "*pNum = " << *pNum << endl;
    cout << "For now num is: \n";
    cout << "num = " << num << endl;
    cout << "\n";

    //Using the dereference operator, you can gain direct access to the underlying value in the variable num.
    //and modify it
    //we are using the dereference operator to change the underlying value of num, indirectly.
    cout << "For now num was modifyed by pointer: \n";
    *pNum = 45;
    cout << "pNum = " <<pNum << endl;
    cout << "*pNum = " << *pNum  << endl;
    cout << "num = " << num << endl;

    cout << "\n";
    cout << "&num = " <<&num;

    cout << "\n";
    int *pNum_1 = &num;
    cout << "*pNum1 = " << *pNum_1  << endl;
    cout << "pNum1 = " << pNum_1  << endl;
    cout << "num = " << num << endl;

    cout << "\n";
    int pNum_2 = *pNum; //yet another variable
    int *pNum_3 = &pNum_2;
    cout << "pNum3 = " << pNum_3  << endl;
}

void referrenceType()
{
    int num = 3;
    int &refNum = num;

    cout << "num contains " << num << endl;
    cout << "refNum contains " << refNum << endl;

    refNum++;    // increment refNum by 1

    cout << "num contains " << num << endl;
    cout << "refNum contains " << refNum << endl;
    cout << "refNum is located at " << &refNum << " and num is located at " << &num << endl;
}

void passByValue(int num1)
{
    cout << "In passByValue()" << endl;
    cout << "Value of num1 is " << num1 << endl;

    // modify num1, won't impact num
    num1++;

    cout << "num1 is now " << num1 << endl;
}

void passByRef(int &num1)
{
    cout << "In passByRef()" << endl;
    cout << "Value of num1 is " << num1 << endl;

    // modify num1 which will now change num
    num1++;

    cout << "num1 is now " << num1 << endl;
}

void allocatingMemory()
{
    // declare a pointer to int and allocate space for it
    // with the keyword new
    int *pInt = new int;

    // declare a pointer to double and allocate space for it
    // with the keyword new
    double * pDouble = new double;

    // store the value 3 in the memory location
    // pointed to by pInt
    *pInt = 3;

    // store the value 5.0 in the memory location
    // pointed to by pDouble
    *pDouble = 5.0;

    // Use whatever method makes sense to you to ensure that memory is released
    // like using a delete keyword for every new keyword.
    delete pInt;
    delete pDouble;

    cout << "pDouble is now " << pDouble << "\n" << *pDouble << endl;

}

void saxpy(int n, float a, float * __restrict x, float * __restrict y)
{
    for (int i = 0; i < n; ++i)
    {
        y[i] = a*x[i] + y[i];
    }
}

void doSaxpy()
{
    int N = 1 << 20;
    float *x, *y;
    //first, allocate memory in RAM
    x = (float*)malloc(N * sizeof(float));
    y = (float*)malloc(N * sizeof(float));
    //initialize array in RAM
    for (int i = 0; i < N; i++) {
        x[i] = 1.0f;
        y[i] = 2.0f;
    }
    // Perform SAXPY on 1M elements
    saxpy(N, 2.0, x, y);
    //std::cout << "\n\n" << "result at index 0 is: " << y[0] << "\n"
    // << "result at index N-1 is: " << y[N-1] << "\n";
    free(x);
    free(y);
}

//TODO - compare measured time with java
void doSaxpyAndMeasureTime()
{
    // Record start time
    auto start = std::chrono::high_resolution_clock::now();

    for (int k = 0; k < 1000; ++k) {
        //SAXPY operation with array on 1 m elements
        doSaxpy();
    }

    // Record end time
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "\n\n\n Elapsed time: " << elapsed.count() << " s\n";
}


void show(int a[])
{
    for(int i = 0; i < 10; ++i) {
        std::cout << '\t' << a[i];
    }
}

int isblankExample()
{
    std::string str = "Geeks for Geeks";
    std:: cout << "\n" <<str << std::endl;
    int i = 0;

    // to store count of blanks
    int count = 0;
    while (str[i]) {

        // to get ith character
        // from string
        char ch = str[i++];

        // mark a new line when space
        // or horizontal tab is found
        if (isblank(ch)) {
            std::cout << std::endl;
            count++;
        } else {
            std::cout << ch;
        }

    }

    std::cout << "\nTotal blanks are : "
              << count << std::endl;
}

void doVectors()
{
    vector <int> g1;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ir;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    std::cout << "Output of begin() and end()\t:\t";
    for (i = g1.begin(); i != g1.end(); ++i)
        std::cout << *i << '\t';

    std::cout << endl << endl;
    std::cout << "Output of rbegin() and rend()\t:\t";
    for (ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << '\t';

    std::cout << "\nSize : " << g1.size();
    std::cout << "\nCapacity : " << g1.capacity();
    std::cout << "\nMax_Size : " << g1.max_size();

    std::cout << "\nReference operator [g] : g1[2] = " << g1[2];
    std::cout << std::endl;
    std::cout << "at : g1.at(4) = " << g1.at(4);
    std::cout << std::endl;
    std::cout << "front() : g1.front() = " << g1.front();
    std::cout << std::endl;
    std::cout << "back() : g1.back() = " << g1.back();
    std::cout <<std::endl;
}

void showlist(list<int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        std::cout << '\t' << *it;
    std::cout << '\n';
}

void doLists()
{
    list <int> gqlist1, gqlist2;


    for (int i = 0; i < 10; ++i)
    {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    std::cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);

    std::cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);

    std::cout << "\ngqlist1.front() : " << gqlist1.front();
    std::cout << "\ngqlist1.back() : " << gqlist1.back();

    std::cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);

    std::cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    std::cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);

    std::cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);
}
