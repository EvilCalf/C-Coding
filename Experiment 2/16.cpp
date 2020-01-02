/* 有时候人们用四位数字表示一个时间，比如1106表示11点零6分。现在，你的程序要根据起始时间和流逝的时间计算出终止时间。
读入两个数字，第一个数字以这样的四位数字表示当前时间，第二个数字表示分钟数，计算当前时间经过那么多分钟后是几点，结果也表示为四位数字。当小时为个位数时，没有前导的零，即5点30分表示为530。注意，第二个数字表示的分钟数可能超过60，也可能是负数。 */
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int start, pass;
    cin >> start >> pass;
    int h, m;
    h = start / 100;
    m = start % 100;
    int end = h * 60 + m + pass;
    h = end / 60;
    m = end % 60;
    if (h < 10)
        printf("%01d%02d\n", h, m);
    else
        printf("%02d%02d\n", h, m);
    return 0;
}