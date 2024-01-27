#include <stdio.h>

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