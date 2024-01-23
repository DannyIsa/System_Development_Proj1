#include <stdio.h>
#include "library.h"

// int power(int x, int y);

int isArmstrong(int x)
{
    printf("inside isArmstrong\n");
    printf("%d\n", x);
    int temp = x;
    int xLength = 0;

    while (temp > 0)
    {
        xLength++;
        temp /= 10;
    }

    int digits[xLength];
    for (int i = 0; i < xLength; i++)
    {
        digits[xLength - i - 1] = x % 10;
        x /= 10;
    }

    int armstrong = 0;
    for (int i = 0; i < xLength; i++)
    {
        printf("power = %d\n", power(digits[i], xLength)); ///// Test
        armstrong += power(digits[i], xLength);
    }

    ///// Test
    for (int i = 0; i < xLength; i++)
    {
        printf("digit %d = %d\n", i, digits[i]);
    }
    printf("armstrong = %d\n", armstrong);
    int isEqual = (x == armstrong);
    printf("isArmstrong = %d\n", isEqual);
    /////

    if (x == armstrong)
    {
        return 1;
    }

    return 0;
}
