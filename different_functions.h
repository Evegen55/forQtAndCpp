#ifndef DIFFERENT_FUNCTIONS_H
#define DIFFERENT_FUNCTIONS_H
#include <different_functions.cpp>

void simplePointer();
void simplePointerDereferrence();
void referrenceType();
void passByValue(int num1);
void passByRef(int &num1);
void allocatingMemory();
void show(int a[]);

/**
 * @brief saxpy uses __restrict it means it works correctly with MSVC compiler only.
 * In MinGW it can't work.
 *
 * @param n
 * @param a
 * @param x
 * @param y
 */
void saxpy(int n, float a, float * __restrict x, float * __restrict y);

void doSaxpy();
void doSaxpyAndMeasureTime();

#endif // DIFFERENT_FUNCTIONS_H
