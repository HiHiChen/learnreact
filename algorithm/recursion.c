// 数列的前两个数字为 f(1) = 0 f(2) = 1
// 数列中的每个数字是前两个数字的和，即f(n) = f(n-1)+f(n-2)

int fib(int n)
{
    if (n == 1 || n == 2)
        return n - 1;
    int res = fib(n - 1) + fib(n - 2);
    return res;
}
