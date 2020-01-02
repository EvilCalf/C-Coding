/* 本题要求实现一个求整数的逆序数的简单函数。*/
#include <stdio.h>

int reverse(int number);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int reverse(int number)
{
    int symbol = 1, temp, sum = 0;

    if (number < 0)
    {
        number = -number;
        symbol = -1;
    }

    while (number > 0)
    {
        temp = number % 10;
        sum = sum * 10 + temp;
        number /= 10;
    }
    sum *= symbol;

    return sum;
}