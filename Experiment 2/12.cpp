/* 本题要求编写程序，找出给定的n个数中的最大值及其对应的最小下标（下标从0开始）。 */
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int num[10];
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    int maxValue = *max_element(num, num + N);
    int maxPosition = max_element(num, num + N) - num;
    cout << maxValue << " " << maxPosition << endl;
    return 0;
}
