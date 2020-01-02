/* 本题要求编写程序，计算序列 2 / 1 + 3 / 2 + 5 / 3 + 8 / 5 + ... 的前N项之和。注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。*/

#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    double sum = 2;
    double tmp1, tmp2;
    tmp1 = 2;
    tmp2 = 1;
    for (int i = 0; i < N - 1; i++)
    {
        double tmp = tmp2;
        tmp2 = tmp1;
        tmp1 = tmp1 + tmp;
        sum += tmp1 / tmp2;
    }
    printf("%.2f\n", sum);
    return 0;
}
