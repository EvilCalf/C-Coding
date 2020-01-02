/* 天梯赛每年有大量参赛队员，要保证同一所学校的所有队员都不能相邻，分配座位就成为一件比较麻烦的事情。为此我们制定如下策略：假设某赛场有 N 所学校参赛，第 i 所学校有 M[i] 支队伍，每队 10 位参赛选手。令每校选手排成一列纵队，第 i + 1 队的选手排在第 i 队选手之后。从第 1 所学校开始，各校的第 1 位队员顺次入座，然后是各校的第 2 位队员…… 以此类推。如果最后只剩下 1 所学校的队伍还没有分配座位，则需要安排他们的队员隔位就坐。本题就要求你编写程序，自动为各校生成队员的座位号，从 1 开始编号。 */
#include <iostream>
using namespace std;
int main()
{
    int n, m, max = 0, map[101][101] = {0}, s[101][101] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m > max)
            max = m;
        for (int j = 0; j < m * 10; j++)
        {
            map[i][j] = 1;
        }
    }
    int flag = -1;
    int now = 1;
    for (int i = 0; i < max * 10; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[j][i])
            {
                if (flag != j)
                {
                    s[j][i] = now++;
                    flag = j;
                }
                else
                {
                    now += 1;
                    s[j][i] = now++;
                    flag = j;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("#%d\n", i + 1);
        for (int j = 0; j < max * 10; j++)
            if (s[i][j])
            {
                printf("%d%c", s[i][j], (j + 1) % 10 ? ' ' : '\n');
            }
    }
    return 0;
}