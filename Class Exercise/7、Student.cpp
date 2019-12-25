#include <iostream>
using namespace std;

class Student
{
protected:
    string ID;
    string name;
    string sex;

public:
    Student(string ID, string name, string sex) : ID(ID), name(name), sex(sex) {}
    void printStudent()
    {
        cout << "ID：" << ID << endl;
        cout << "姓名：" << name << endl;
        cout << "性别：" << sex << endl;
    }
};

class Teacher
{
protected:
    string name;
    string title;

public:
    Teacher(string name, string title) : name(name), title(title) {}
    void printTeacher()
    {
        cout << "姓名：" << name << endl;
        cout << "职称：" << title << endl;
    }
};

class Tutor : public Teacher
{
protected:
    string company;

public:
    Tutor(string name, string title, string company) : Teacher(name, title), company(company) {}
    void printTutor()
    {
        Teacher::printTeacher();
        cout << "所属单位：" << company << endl;
    }
};

class Graduate : public Student
{
protected:
    string direction;
    Tutor myTutor;

public:
    Graduate(string ID, string name, string sex, string direction, Tutor myTutor) : Student(ID, name, sex), direction(direction), myTutor(myTutor){};
    void printGraduate()
    {
        Student::printStudent();
        cout << "方向：" << direction << endl;
        cout << "导师信息如下：" << endl;
        myTutor.printTutor();
    }
};

int main()
{
    Tutor myTutor("陈义", "高级工程师", "SICT");
    Graduate myGraduate("150708220", "徐佳鼎", "男", "AI", myTutor);
    myGraduate.printGraduate();
}