int numLength(int x)
{
    int xLength = x;
    while (x > 0)
    {
        xLength++;
        x /= 10;
    }
    return x;
}