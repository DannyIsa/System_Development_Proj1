#include <stdio.h>
#include "NumClass.h"

int isArmstrong(int x);
int main()
{
    int firstNum;
    int secNum;

    printf("Enter First Num: ");
    scanf("%d", &firstNum);
    if (firstNum <= 0)
    {
        printf("Number must be bigger then 0");
        firstNum = 0;
    }

    printf("Enter sec Num: ");
    scanf("%d", &secNum);
    if (secNum <= 0)
    {
        printf("Number must be bigger then 0");
        secNum = 0;
    }

    int difference = 0;

    if (firstNum > secNum)
        difference = firstNum - secNum + 1;
    else
        difference = secNum - firstNum + 1;

    int armstrongNums[difference];
    int palindromeNums[difference];
    int strongNums[difference];
    int primeNums[difference];

    int counter = 0;
    for (int currentNum = firstNum; currentNum <= secNum; currentNum++)
    {
        if (isArmstrongRecursion(currentNum))
            armstrongNums[counter] = currentNum;

        if (isPalindromeRecursion(currentNum))
            palindromeNums[counter] = currentNum;

        if (isStrong(currentNum))
            strongNums[counter] = currentNum;

        if (isPrime(currentNum))
            primeNums[counter] = currentNum;

        counter++;
    }

    for (int i = 0; i <= counter; i++)
    {
        // if (armstrongNums[i] != 0)
    }

    return 0;
}