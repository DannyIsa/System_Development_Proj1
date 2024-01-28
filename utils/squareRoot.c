int squareRoot(int x)
{
    if (x < 0)
    {
        return -1;
    }
    double check = x / 2;
    int prevCheck;
    do
    {
        prevCheck = check;
        check = (check + x / check) / 2;
    } while (check * check != x && check != prevCheck);
    return check;
}