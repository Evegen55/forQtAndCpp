#include <my_math.h>

//The stdafx.h file is the precompiled header directive that is used in Visual Studio
//but some other compilers also make use of it.

int my_math::pow(int base, int exp)
{
    int result = 1;

    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }

    return result;
}
