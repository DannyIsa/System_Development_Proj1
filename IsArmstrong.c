#include <stdio.h>
#include "utils/power.c"

// int power(int x, int y);

int isArmstrong(int x)
{
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
        armstrong += power(digits[i], xLength);
    }

    ///// Test
    for (int i = 0; i < xLength; i++)
    {
        printf("digit %d = %d\n", i, digits[i]);
    }
    printf("armstrong = %d\n", armstrong);
    printf("isArmstrong = %d\n", x == armstrong);
    /////

    if (x == armstrong)
    {
        return 1;
    }

    return 0;
}
