#include <iostream>
using namespace std;

class rectangle
{
private:
    float len, br;

public:
    void input();
    void area();
};

void rectangle::input()
{
    cout << "Enter length of rectangle: ";
    cin >> len;
    cout << "Enter breadth of rectangle: ";
    cin >> br;
}

void rectangle::area()
{
    cout << "Area of rectangle = " << len * br;
}

int main()
{
    rectangle r;
    r.input();
    r.area();
    return 0;
}