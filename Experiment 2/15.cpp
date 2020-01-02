/* 本题要求根据火车的出发时间和达到时间，编写程序计算整个旅途所用的时间。 */
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int h, m, depart, arrive;
    cin >> depart >> arrive;
    h = arrive / 100 - depart / 100;
    m = arrive % 100 - depart % 100;
    if (m < 0)
    {
        m = 60 + m;
        h = h - 1;
    }
    printf("%02d:%02d\n", h, m);
    return 0;
}