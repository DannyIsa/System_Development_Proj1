#include "library.h"

int isStrong(int x)
{
    int tempX1 = x;
    int xLength = numLength(x);

    int digits[xLength];
    for (int i = 0; i < xLength; i++)
    {
        digits[xLength - i - 1] = tempX1 % 10;
        tempX1 /= 10;
    }

    int strong = 0;
    for (int i = 0; i < xLength; i++)
    {
        strong += factorial(digits[i]);
    }

    if (strong == x)
        return 1;
    return 0;
}