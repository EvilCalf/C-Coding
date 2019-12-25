#include <iostream>
using namespace std;

class Card
{
private:
    string name;
    string writer;
    int number;

public:
    void Store(string name, string writer, int number);
    void Show();
};

void Card::Store(string name, string writer, int number)
{
    this->name = name;
    this->writer = writer;
    this->number = number;
}

void Card::Show()
{
    cout << name << " " << writer << " " << number << endl;
}

int main()
{
    Card myCard;
    myCard.Store("宅男约会指南", "徐佳鼎", 10);
    myCard.Show();
    return 0;
}