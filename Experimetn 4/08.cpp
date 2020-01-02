/* 给定两个均不超过9的正整数a和n，要求编写程序求a + aa + aaa++⋯+ aa⋯a（n个a）之和。 */
#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("s = %d\n", SumA(a, n));

    return 0;
}

int fn(int a, int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum * 10 + a;
    }
    return sum;
}
int SumA(int a, int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += fn(a, i + 1);
    }
    return sum;
}