/* 程序每次读入一个正3位数，然后输出按位逆序的数字。注意：当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。 */
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] != '0')
            cout << str[i];
        else if (str[2] != '0' && str[1] == '0')
            cout << str[i];
    }
    cout << endl;
    return 0;
}