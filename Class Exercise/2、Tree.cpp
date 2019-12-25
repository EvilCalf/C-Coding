#include <ctime>
#include <iostream>
using namespace std;

class Tree
{
private:
    int age;
    int start;

public:
    Tree(int age);
    void begin(int year);
    void showAge();
};
Tree::Tree(int age)
{
    this->age = age;
}
void Tree::begin(int year)
{
    this->start = year - age;
}

void Tree::showAge()
{
    cout << start;
}

int main()
{
    Tree mytree(5);
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int year = int(1900 + ltm->tm_year);
    mytree.begin(year);
    mytree.showAge();
}