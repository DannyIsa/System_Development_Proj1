#include <stdio.h>
#include "NumClass.h"

int isArmstrong(int x);
int main()
{
    int firstNum;
    int secNum;

    printf("Enter First Num: ");
    scanf("%d", &firstNum);
    printf("Enter Second Num: ");
    scanf("%d", &secNum);

    for (int currentNum = firstNum; currentNum <= secNum; currentNum++)
    {
        if (isPrime(currentNum))
            printf("%d ", currentNum);
    }
    printf("\n");

    for (int currentNum = firstNum; currentNum <= secNum; currentNum++)
    {
        if (isArmstrongRecursion(currentNum))
            printf("%d ", currentNum);
    }
    printf("\n");

    for (int currentNum = firstNum; currentNum <= secNum; currentNum++)
    {
        if (isStrong(currentNum))
            printf("%d ", currentNum);
    }
    printf("\n");

    for (int currentNum = firstNum; currentNum <= secNum; currentNum++)
    {
        if (isPalindromeRecursion(currentNum))
            printf("%d ", currentNum);
    }

    return 0;
}