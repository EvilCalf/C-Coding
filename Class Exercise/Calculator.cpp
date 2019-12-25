#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Calculator
{
private:
    int number;
    int cnt;

public:
    Calculator(int number);
    void problems();
    void printResult();
};

Calculator::Calculator(int number)
{
    this->number = number;
    this->cnt = 0;
}

void Calculator::printResult()
{
    if (cnt >= 9)
        cout << "优秀" << endl;
    else if (cnt >= 8)
        cout << "良好" << endl;
    else if (cnt >= 5)
        cout << "不错" << endl;
    else
        cout << "还需努力" << endl;
}

void Calculator::problems()
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < number; i++)
    {
        int num1 = rand() % 100;
        int num2 = rand() % 100;
        int algType = rand() % 4;
        char myoperator = ' ';
        int rightAnswer;
        switch (algType)
        {
        case 0:
            myoperator = '+';
            rightAnswer = num1 + num2;
            break;
        case 1:
            myoperator = '-';
            rightAnswer = num1 - num2;
            break;
        case 2:
            myoperator = '*';
            rightAnswer = num1 * num2;
            break;
        case 3:
            myoperator = '/';
            rightAnswer = num1 / num2;
            break;
        }
        cout << "问题" << i + 1 << ":" << endl;
        cout << num1 << myoperator << num2 << "=?" << endl;
        int answer;
        cin >> answer;
        if (answer == rightAnswer)
        {
            cout << "回答正确" << endl;
            cnt++;
        }
        else
        {
            cout << "回答错误" << endl;
        }
    }
}

int main()
{
    Calculator myCa(10);
    myCa.problems();
    myCa.printResult();
    return 0;
}