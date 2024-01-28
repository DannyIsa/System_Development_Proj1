#include "NumClass.h"

int power(int x, int y);

int isArmstrong(int x)
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

    int armstrong = 0;
    for (int i = 0; i < xLength; i++)
    {
        armstrong += power(digits[i], xLength);
    }

    if (x == armstrong)
    {

        return 1;
    }

    return 0;
}

int isPalindrome(int x)
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

    int xLengthHalf = xLength / 2;
    for (int i = 0; i < xLengthHalf; i++)
    {
        if (digits[i] != digits[xLength - i - 1])
            return 0;
    }
    return 1;
}

int power(int x, int y)
{
    if (y == 0)
        return 1;
    return (x * power(x, y - 1));
}