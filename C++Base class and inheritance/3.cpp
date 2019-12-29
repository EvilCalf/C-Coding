#include <iostream>
using namespace std;

class MyQueue
{
protected:
    int date[99999];
    int head = 0;
    int tail = 0;

public:
    void push(int x)
    {
        date[tail] = x;
        tail++;
    }
    int pop()
    {
        int tmp = date[head];
        head++;
        return tmp;
    }
    int size()
    {
        return tail - head;
    }
};

int main()
{
    int n;
    cin >> n;
    MyQueue q;
    for (int i = 0; i < n; i++)
    {
        int flag;
        cin >> flag;
        switch (flag)
        {
        case 1:
            int tmp;
            cin >> tmp;
            q.push(tmp);
            break;
        case 2:
            if (q.size() == 0)
                cout << "Invalid" << endl;
            else
                cout << q.pop() << endl;
            break;
        case 3:
            cout << q.size() << endl;
            break;
        }
    }
    return 0;
}