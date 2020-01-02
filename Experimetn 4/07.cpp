/* 本题要求统计给定整数M和N区间内素数的个数并对它们求和。 */
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool prime(int p)
{
    int k;
    int n;
    if (p < 2)
        return 0;
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
    int M, N;
    cin >> M >> N;
    int num = 0;
    int sum = 0;
    for (int i = M; i <= N; i++)
    {
        if (prime(i))
        {
            num++;
            sum += i;
        }
    }
    cout << num << " " << sum << endl;
    return 0;
}
