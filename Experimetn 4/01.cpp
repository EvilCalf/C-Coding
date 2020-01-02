/* 本题要求实现一个判断素数的简单函数、以及利用该函数计算给定区间内素数和的函数。
素数就是只能被1和自身整除的正整数。注意：1不是素数，2是素数。 */
#include <math.h>
#include <stdio.h>

int prime(int p);
int PrimeSum(int m, int n);

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++)
    {
        if (prime(p) != 0)
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime(int p)
{
    int i, temp = 1;
    if (p <= 0 || p == 1)
    {
        return 0;
    }
    if (p == 2)
    {
        return 1;
    }
    for (i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            temp = 0;
            break;
        }
    }
    return temp;
}

int PrimeSum(int m, int n)
{
    int p, sum = 0;
    for (p = m; p <= n; p++)
    {
        if (prime(p) != 0)
        {
            sum += p;
        }
    }
    return sum;
}
