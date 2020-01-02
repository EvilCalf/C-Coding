/* 本题要求实现函数，可以根据下表查找到星期，返回对应的序号。
序号 星期 0 Sunday 1 Monday 2 Tuesday 3 Wednesday 4 Thursday 5 Friday 6 Saturday */
#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex(char *s);

int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if (n == -1)
        printf("wrong input!\n");
    else
        printf("%d\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int getindex(char *s)
{
    int week;
    char *day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (week = 0; week <= 6; week++)
    {
        if (strcmp(s, day[week]) == 0)
            break;
    }

    if (week == 7)
        week = -1;
    return week;
}