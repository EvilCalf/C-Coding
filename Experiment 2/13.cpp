/* 本题要求编写程序计算某年某月某日是该年中的第几天。 */
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int i, year, month, day, n = 0;
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d/%d/%d", &year, &month, &day);
    if ((year % 4 == 0 && year % 100) || year % 400 == 0)
        a[2] = 29;
    for (i = 0; i <= month - 1; i++)
        n += a[i];
    cout << n + day << endl;
    return 0;
}