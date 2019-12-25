#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string Date;
    double price;

public:
    Vehicle(string Date, double price)
    {
        this->Date = Date;
        this->price = price;
    }
    void printData()
    {
        cout << "出厂日期：" << Date << endl
             << "售价：" << price << endl;
    }
};

class Car : public Vehicle
{
protected:
    int number;

public:
    Car(string Date, double price, int number) : Vehicle(Date, price)
    {
        this->number = number;
    }
    void printData()
    {
        Vehicle::printData();
        cout << "乘客数量：" << number << endl;
    }
};

class Trunk : public Vehicle
{
protected:
    int size;

public:
    Trunk(string Date, double price, int size) : Vehicle(Date, price)
    {
        this->size = size;
    }
    void printData()
    {
        Vehicle::printData();
        cout << "载重吨数：" << size << endl;
    }
};

int main()
{
    Vehicle myVehicle("2019年1月1日", 100);
    Car myCar("2019年12月25日", 200, 4);
    Trunk myTrunk("2019年1月30日", 300, 250);
    myVehicle.printData();
    myCar.printData();
    myTrunk.printData();
}