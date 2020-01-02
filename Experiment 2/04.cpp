/* 本题要求实现一个对数组进行循环右移的简单函数：一个数组a中存有n（ > 0）个整数，将每个整数循环向右移m（≥0）个位置，即将a中的数据由（a ​0 ​​ a ​1 ​​ ⋯a ​n−1 ​​ ）变换为（a ​n−m ​​ ⋯a ​n−1 ​​ a ​0 ​​ a ​1 ​​ ⋯a ​n−m−1 ​​ ）（最后m个数循环移至最前面的m个位置）。*/
#include <stdio.h>
#define MAXN 10

int ArrayShift(int a[], int n, int m);

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for (i = 0; i < n; i++)
    {
        if (i != 0)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
int ArrayShift(int a[], int n, int m)
{
    int i, j;
    m = m % n;
    int tmp[n];
    for (j = 0; j < n; j++)
    {
        tmp[j] = a[j];
    }
    for (i = 0; i < n; i++)
    {
        if (i >= (n - m))
        {
            a[i + m - n] = tmp[i];
        }
        else
        {
            a[i + m] = tmp[i];
        }
    }
}
