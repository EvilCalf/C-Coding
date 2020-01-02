/* 水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 1 ​3 ​​ + 5 ​3 ​​ + 3 ​3 ​​ 。 本题要求编写两个函数，一个判断给定整数是否水仙花数，另一个按从小到大的顺序打印出给定区间(m, n) 内所有的水仙花数。 */
#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic(int number)
{
    int x, count = 0, i, sum = 1, a, b = 0;
    x = number;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    x = number;
    while (x != 0)
    {
        a = x % 10;
        for (i = 1; i <= count; i++)
        {
            sum = sum * a;
        }
        b = sum + b;
        x = x / 10;
        sum = 1;
    }
    if (b == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void PrintN(int m, int n)
{
    int i;
    for (i = m + 1; i < n; i++)
    {
        if (narcissistic(i) == 1)
            printf("%d\n", i);
    }
}