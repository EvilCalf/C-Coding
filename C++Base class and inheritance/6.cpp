#include <iostream>
#include <math.h>
using namespace std;
class Car;
class Boat;
int getTotalWeight(Boat &boat, Car &car);

class Boat
{
private:
    int weight;

public:
    Boat(int n) : weight(n) {}
    friend int getTotalWeight(Boat &boat, Car &car);
    int getweight()
    {
        return weight;
    }
};

class Car
{
private:
    int weight;

public:
    Car(int n) : weight(n) {}
    friend int getTotalWeight(Boat &boat, Car &car);
    int getweight()
    {
        return weight;
    }
};

int getTotalWeight(Boat &boat, Car &car)
{
    return boat.getweight() + car.getweight();
}

int main()
{
    int n, m;
    cin >> n >> m;
    Boat boat(n);
    Car car(m);
    cout << "船和汽车共重" << getTotalWeight(boat, car)
         << "吨" << endl;
}