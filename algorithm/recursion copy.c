int f(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int l = 0;
    int r = 1;
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        l = r;
        r = res;
        res = l + r;
    }
    return res;
}