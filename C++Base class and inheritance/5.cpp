#include <iostream>
#include <math.h>
using namespace std;

class Box
{
private:
    float ab;
    float volume;
    float area;

public:
    void seta(float ab)
    {
        this->ab = ab;
    }
    void getvolume()
    {
        volume = ab * ab * ab;
    }
    void getarea()
    {
        area = ab * ab * 6;
    }
    void disp()
    {
        cout << volume << " " << area << endl;
    }
};

int main()
{
    float ab;
    cin >> ab;
    Box obj;
    obj.seta(ab);
    obj.getvolume();
    obj.getarea();
    obj.disp();
    return 0;
}