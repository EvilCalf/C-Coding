/* 本题要求实现一个计算整数因子和的简单函数，并利用其实现另一个函数，输出两正整数m和n（0 < m≤n≤10000）之间的所有完数。所谓完数就是该数恰好等于除自身外的因子之和。例如：6 = 1 + 2 + 3，其中1、2、3为6的因子。 */
#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m)
        printf("%d is a perfect number\n", m);
    if (factorsum(n) == n)
        printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int factorsum(int number)
{
    int sum = 0;
    if (number == 1)
        sum = 1;
    else
    {
        for (int i = 1; i <= number / 2; i++)
        {
            if (number % i == 0)
                sum += i;
        }
    }

    return sum;
}

void PrintPN(int m, int n)
{
    int flag = 0, sum;
    for (int i = m; i <= n; i++)
    {
        sum = 0;
        if (factorsum(i) == i)
        {
            flag = 1;
            printf("%d = ", i);
            if (i == 1)
                printf("1");
            else
            {
                for (int k = 1; k <= i / 2; k++)
                {
                    if (i % k == 0)
                    {
                        printf("%d", k);
                        sum += k;
                        if (sum != i)
                            printf(" + ");
                    }
                }
            }
            printf("\n");
        }
    }
    if (flag == 0)
        printf("No perfect number\n");
}
