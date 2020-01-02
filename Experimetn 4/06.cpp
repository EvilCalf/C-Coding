/* 让我们定义d ​n ​​ 为：d ​n ​​ = p ​n + 1 ​​ −p ​n ​​ ，其中p ​i ​​ 是第i个素数。显然有d ​1 ​​ = 1，且对于n > 1有d ​n ​​ 是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。 现给定任意正整数N(< 10 ​5 ​​) ，请计算不超过N的满足猜想的素数对的个数。 */
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool prime(int p)
{
    int k;
    int n;
    n = (int)sqrt((double)p);

    for (k = 2; k <= n; k++)
    {

        if (p % k == 0)
        {
            break;
        }
    }

    if (k > n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int N;
    cin >> N;
    int P[N];
    int flag = 0;
    int result = 0;
    for (int i = 5; i <= N; i++)
    {
        if (prime(i) && prime(i - 2))
            result++;
    }
    cout << result << endl;
    return 0;
}
