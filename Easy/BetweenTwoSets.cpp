int gcd(int a, int b)
{
    if (b > a)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    while (b)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}