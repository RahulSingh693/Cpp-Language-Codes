#include <iostream>
using namespace std;

class triangle
{
private:
    float b, h;

public:
    void input();
    void area();
};

void triangle::input()
{
    cout << "Enter height of triangle: ";
    cin >> h;
    cout << "Enter base of triangle: ";
    cin >> b;
}

void triangle::area()
{
    cout << "Area of triangle = " << 0.5 * b * h;
}

int main()
{
    triangle t;
    t.input();
    t.area();
    return 0;
}