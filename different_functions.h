#ifndef DIFFERENT_FUNCTIONS_H
#define DIFFERENT_FUNCTIONS_H
#include <different_functions.cpp>

void simplePointer();
void simplePointerDereferrence();
void referrenceType();
void passByValue(int num1);
void passByRef(int &num1);
void allocatingMemory();

void saxpy(int n, float a, float * __restrict x, float * __restrict y);
void doSaxpy();

#endif // DIFFERENT_FUNCTIONS_H
