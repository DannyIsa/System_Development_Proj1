#include "NumClass.h"
#include <stdio.h>

int factorial(int x);

int isPrime(int x)
{
    int xHalf = x / 2;

    for (int i = 2; i < xHalf; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int isStrong(int x)
{
    int tempX = x;
    int xLength = 0;
    while (tempX > 0)
    {
        xLength++;
        tempX /= 10;
    }
    int tempX2 = x;

    int digits[xLength];
    for (int i = 0; i < xLength; i++)
    {
        digits[xLength - i - 1] = tempX2 % 10;
        tempX2 /= 10;
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

int factorial(int x) // calculates factorial up to 9
{
    if (x < 0)
    {
        printf("Error! factorial of negative number doesnt exist!");
        return 0;
    }

    if (x == 0 || x == 1)
        return 1;

    int res = 1;
    for (int i = 2; i <= x; i++)
    {
        res *= i;
    }
    return res;
}