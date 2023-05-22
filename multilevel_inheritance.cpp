#include <iostream>
#include <math.h>
using namespace std;

class base
{

public:
    int b;
    base()
    {
        cout << "Enter side1 of triangle: ";
        cin >> b;
    }
};
class side2 : public base
{

public:
    int h;
    side2()
    {
        cout << "Enter side2 of triangle: ";
        cin >> h;
    }
};
class side3 : public side2
{
public:
    int s3;
    side3()
    {
        cout << "Enter side3 of triangle: ";
        cin >> s3;
    }
};
class area : public side3
{
public:
    float s = (b + h + s3) / 2;
    float A;

    area()
    {
        A = sqrt(s * (s - b) * (s - h) * (s - s3));

        cout << "Area of triangle = " << A << endl;
    }
};

int main()
{
    area a;

    return 0;
}