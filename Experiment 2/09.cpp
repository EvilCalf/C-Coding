/* 本题要求编写程序，计算平方根序列√ ​1 ​ ​​ +√ ​2 ​ ​​ +√ ​3 ​ ​​ +⋯的前N项之和。可包含头文件math.h，并调用sqrt函数求平方根。 */
#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    double sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += sqrt(i);
    }
    printf("sum = %.2f\n", sum);
    return 0;
}