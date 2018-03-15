#include "MMath.h"

long MMath::pow(long base, long exp)
{
    long result = 1;

    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }

    return result;
}
