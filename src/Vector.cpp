#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Vector
{
private:
    double x, y, z = 0;

public:
    Vector()
    {
    }

    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {
    }

    void Show()
    {
        cout << x << ' ' << y << ' ' << z << "\n";
    }

    double Length()
    {
        return sqrt(x * x + y * y + z * z);
    }
};
