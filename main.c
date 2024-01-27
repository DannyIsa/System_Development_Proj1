#include <stdio.h>
#include "library.h"

int isArmstrong(int x);
int main()
{
    printf("IsArmstrong 1634 = %d\n", isArmstrong(1634));
    printf("Ispalindrome 12321 = %d\n", isPalindrome(12321));
    printf("IsPrime 17 = %d\n", isPrime(17));
    printf("IsStrong 145 = %d\n", isStrong(145));
    printf("isArmstrongRecursion 1634 = %d\n", isArmstrongRecursion(1634));
    printf("IspalindromeRecursion 23588532 = %d\n", isPalindromeRecursion(23588532));
    return 0;
}