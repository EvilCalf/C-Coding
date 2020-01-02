#include <iostream>
#include <map>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int h = 0;
    int w;
};

Student s[1000000];
int main()
{
    int n, p = 0;
    cin >> n;
    bool isendl = false;
    map<int, Student> mp;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        cin >> s[i].name >> s[i].h >> s[i].w;
        if (mp[num].h < s[i].h)
        {
            mp[num] = s[i];
        }
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (isendl)
        {
            cout << endl;
        }
        isendl = true;
        printf("%06d", it->first);
        cout << ' ' << it->second.name << ' ' << it->second.h << ' ' << it->second.w;
    }
}