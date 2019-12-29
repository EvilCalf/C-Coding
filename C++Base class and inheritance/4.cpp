#include <iostream>
#include <math.h>
using namespace std;

class Group
{
public:
    virtual int add() = 0;
    virtual int sub() = 0;
};

class GroupA : public Group
{
public:
    GroupA(int x = 0, int y = 0) : a(x), b(y) {}
    int add()
    {
        cout << a + b << endl;
        return 0;
    }
    int sub()
    {
        cout << a - b << endl;
        return 0;
    }

private:
    int a;
    int b;
};

class GroupB : public Group
{
public:
    GroupB(int x = 0, int y = 0) : a(x), b(y) {}
    int add()
    {
        cout << a + b << endl;
        return 0;
    }
    int sub()
    {
        int z = (a % 10 - b % 10) % 10;
        int y = ((a / 10) % 10 - (b / 10) % 10) % 10;
        int x = ((a / 100) % 10 - (b / 100) % 10) % 10;
        if (z < 0)
            z = (z + 10) % 10;
        if (y < 0)
            y = (y + 10) % 10;
        if (x < 0)
            x = (x + 10) % 10;
        cout << x * 100 + y * 10 + z << endl;
        return 0;
    }

private:
    int a;
    int b;
};

class GroupC : public Group
{
public:
    GroupC(int x = 0, int y = 0) : a(x), b(y) {}
    int add()
    {
        int z = (a % 10 + b % 10) % 10;
        int y = ((a / 10) % 10 + (b / 10) % 10) % 10 * 10;
        int x = ((a / 100) % 10 + (b / 100) % 10) % 10 * 100;
        cout << x + y + z << endl;
        return 0;
    }
    int sub()
    {
        int z = (a % 10 - b % 10) % 10;
        int y = ((a / 10) % 10 - (b / 10) % 10) % 10;
        int x = ((a / 100) % 10 - (b / 100) % 10) % 10;
        if (z < 0)
            z = (z + 10) % 10;
        if (y < 0)
            y = (y + 10) % 10;
        if (x < 0)
            x = (x + 10) % 10;
        cout << x * 100 + y * 10 + z << endl;
        return 0;
    }

private:
    int a;
    int b;
};

int main()
{
    int n;
    cin >> n;
    int i;
    int num = 0;
    Group *p;
    char g[99];
    int a[99] = {0};
    int b[99] = {0};
    int c[99] = {0};
    int d[99] = {0};
    for (i = 1; i <= n; i++)
    {
        cin >> d[i];
    }
    for (i = 1;; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            break;
        cin >> b[i] >> g[i] >> c[i];
        num++;
    }
    for (i = 1;; i++)
    {
        int k = a[i];
        if (d[k] == 1)
        {
            GroupA GA(b[i], c[i]);
            p = &GA;
            if (g[i] == '+')
            {
                p->add();
            }
            else
                p->sub();
        }
        else if (d[k] == 2)
        {
            GroupB GB(b[i], c[i]);
            p = &GB;
            if (g[i] == '+')
            {
                p->add();
            }
            else
                p->sub();
        }
        else if (d[k] == 3)
        {
            GroupC GC(b[i], c[i]);
            p = &GC;
            if (g[i] == '+')
            {
                p->add();
            }
            else
                p->sub();
        }
        num--;
        if (num == 0)
            break;
    }
    return 0;
}