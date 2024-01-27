#include "library.h"

int isPalindrome(int x)
{
    int tempX1 = x;
    int xLength = numLength(x);

    int digits[xLength];
    for (int i = 0; i < xLength; i++)
    {
        digits[xLength - i - 1] = tempX1 % 10;
        tempX1 /= 10;
    }

    int xLengthHalf = xLength / 2;
    for (int i = 0; i < xLengthHalf; i++)
    {
        if (digits[i] != digits[xLength - i - 1])
            return 0;
    }
    return 1;
}