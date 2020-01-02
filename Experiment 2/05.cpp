/* 报数游戏是这样的：有n个人围成一圈，按顺序从1到n编好号。从第一个人开始报数，报到m（ < n）的人退出圈子；下一个人从1开始报数，报到m的人退出圈子。如此下去，直到留下最后一个人。 */
#include <stdio.h>
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++)
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
void CountOff(int n, int m, int out[])
{
    int i, j, p;
    int num[MAXN];

    for (i = 0; i < n; i++)
    {
        num[i] = i + 1;
    }

    int count = 0;
    i = 0, j = 0, p = 0;
    while (count < n)
    {
        if (num[i] != -1)
        {
            p++;
        }
        if (p == m)
        {
            j++;
            out[i] = j;
            p = 0;
            num[i] = -1;
            count++;
        }
        i++;
        if (i == n)
        {
            i = 0;
        }
    }
}