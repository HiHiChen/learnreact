int hammingWeight(int n)
{
    int res = 0;

    if (n % 2 != 0)
    {
        res++;
    }
    if (n / 2 == 0)
    {
        return res;
    }
    n = n / 2;

    return hammingWeight(n / 2);
}