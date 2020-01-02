/* 一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下： 首先对前17位数字加权求和，
权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2} ；
然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：
 Z：0 1 2 3 4 5 6 7 8 9 10 
 M：1 0 X 9 8 7 6 5 4 3 2 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string *str = new string[n];
    for (int i = 0; i < n; i++) //输入身份证号
    {
        cin >> str[i];
    }
    char a[n];
    int sum[n];
    int LL[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = str[i].at(17);
        sum[i] = 0;
        LL[i] = 1;
    }
    char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int N[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 17; i++)
        {
            if (str[j].at(i) >= '0' && str[j].at(i) <= '9')
            {
                sum[j] += (str[j].at(i) - '0') * N[i];
            }
            else
            {
                LL[j] = 0;
                break;
            }
        }
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (LL[i] == 0 || M[sum[i] % 11] != a[i])
        {
            cout << str[i] << endl;
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "All passed" << endl;
    }
    return 0;
}
