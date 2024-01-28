#include "NumClass.h"
#include <stdio.h>
int isArmstrongRecursion(int x)
{
    int xLength = numLength(x);
    int xSum = getSum(x, xLength);

    if (xSum == x)
        return 1;
    return 0;
}

int getSum(int num, int numLength)
{
    if (num == 0)
        return 0;
    return power((num % 10), numLength) + getSum(num / 10, numLength);
}

int isPalindromeRecursion(int x)
{
    int xLength = numLength(x);
    return checkIsPalindromeRecursion(x, xLength);
}

int checkIsPalindromeRecursion(int num, int numLength)
{
    if (num == 0)
        return 1;
    int firstNum = num % 10;
    int lastNum = num / power(10, numLength - 1);
    return (firstNum == lastNum) && (checkIsPalindromeRecursion((num % power(10, numLength - 1)) / 10, numLength - 2));
}