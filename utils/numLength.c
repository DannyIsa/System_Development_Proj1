int numLength(int x)
{
    int xLength = 0;
    while (x > 0)
    {
        xLength++;
        x /= 10;
    }
    return xLength;
}