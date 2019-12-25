#include <iostream>
using namespace std;

class Document
{
protected:
    string name;

public:
    Document(string name) { this->name = name; }
    void printData() { cout << name << endl; }
};

class Book : public Document
{
protected:
    int pageCount;

public:
    Book(string name, int pageCount) : Document(name)
    {
        this->pageCount = pageCount;
    }
    void printData()
    {
        Document::printData();
        cout << pageCount << endl;
    }
};

int main()
{
    Document myDocument("宅女约会指南");
    myDocument.printData();
    Book myBook("宅男约会指南", 100);
    myBook.printData();
}