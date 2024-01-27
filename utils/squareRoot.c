int squareRoot(int x)
{
    if (x < 0)
    {
        return -1;
    }
    double check = num / 2;
    int prevCheck;
    do
    {
        prevCheck = check;
        check = (check + num / check) / 2;
    } while (check * check != num && check != prevCheck);
    return check;
}