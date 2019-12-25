#include <iostream>
using namespace std;

class Date
{
protected:
    int year;
    int month;
    int day;

public:
    Date(int year, int month, int day) : year(year), month(month), day(day) {}
    void pirntDate()
    {
        cout << year << "年" << month << "月" << day << "日" << endl;
    }
};

class Student
{
protected:
    Date bornDate;
    string ID;
    string name;

public:
    Student(Date bornDate, string ID, string name) : bornDate(bornDate), ID(ID), name(name) {}
    void printStudent()
    {
        bornDate.pirntDate();
        cout << ID << endl;
        cout << name << endl;
    }
};

class Graduate : public Student
{
protected:
    string direction;

public:
    Graduate(Date bornDate, string ID, string name, string direction) : Student(bornDate, ID, name), direction(direction) {}
    void printGraduate()
    {
        Student::printStudent();
        cout << direction << endl;
    }
};

int main()
{
    Date myDate(1997, 01, 30);
    Graduate myGraduate(myDate, "150708220", "徐佳鼎", "AI");
    myGraduate.printGraduate();
}