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