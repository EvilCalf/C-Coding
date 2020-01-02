/* 所谓“螺旋方阵”，是指对任意给定的N，将1到N×N的数字从左上角第1个格子开始，按顺时针螺旋方向顺序填入N×N的方阵里。本题要求构造这样的螺旋方阵*/
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int c = 1, x = 0, y = 0, n, a[10][10] = {0};
    cin >> n;
    a[x][y] = 1;
    while (n * n != c)
    {
        while (y + 1 < n && !a[x][y + 1])
            a[x][++y] = ++c;
        while (x + 1 < n && !a[x + 1][y])
            a[++x][y] = ++c;
        while (y - 1 >= 0 && !a[x][y - 1])
            a[x][--y] = ++c;
        while (x - 1 >= 0 && !a[x - 1][y])
            a[--x][y] = ++c;
    }
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            printf("%3d", a[x][y]);
        }
        cout << endl;
    }
}
