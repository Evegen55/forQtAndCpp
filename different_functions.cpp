#include<different_functions.h>

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
    cout << pNum << endl;
    cout << "*pNum = " << *pNum << endl;
    cout << "For now num is: \n";
    cout << "num = " << num << endl;
    cout << "\n";

    //Using the dereference operator, you can gain direct access to the underlying value in the variable num.
    //and modify it
    //we are using the dereference operator to change the underlying value of num, indirectly.
    cout << "For now num was modifyed by pointer: \n";
    *pNum = 45;
    cout << "*pNum = " << *pNum  << endl;
    cout << "num = " << num << endl;
}
