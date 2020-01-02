/* 假设有N项物品，大小分别为s ​1 ​​ 、s ​2 ​​ 、…、s ​i ​​ 、…、s ​N ​​ ，其中s ​i ​​ 为满足1≤s ​i ​​ ≤100的整数。要把这些物品装入到容量为100的一批箱子（序号1 - N）中。装箱方法是：对每项物品, 顺序扫描箱子，把该物品放入足以能够容下它的第一个箱子中。请写一个程序模拟这种装箱过程，并输出每个物品所在的箱子序号，以及放置全部物品所需的箱子数目。 */
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int S[N];
    int S2[N];
    int box[N];
    for (int i = 0; i < N; i++)
    {
        box[i] = 100;
    }
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        for (int j = 0; j < N; j++)
        {
            if (box[j] >= S[i])
            {
                box[j] -= S[i];
                S2[i] = j + 1;
                if (S2[i] > cnt)
                    cnt = S2[i];
                break;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << S[i] << " " << S2[i] << endl;
    }
    cout << cnt;
    return 0;
}
