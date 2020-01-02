/* 本题要求编写程序, 计算序列 1 - 1 / 4 + 1 / 7 - 1 / 10 + ... 的前N项之和。 */
#include <stdio.h>
int main()
{
    int n, i, flag = 1;
    double sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++, flag *= -1)
    {
        sum += 1.0 / (3 * i - 2) * flag;
    }
    printf("sum = %.3f\n", sum);
    return 0;
}