#include <iostream>
using namespace std;

class rectangle
{
private:
    float len, br;

public:
    void input();
    void perimeter();
};

void rectangle::input()
{
    cout << "Enter length of rectangle: ";
    cin >> len;
    cout << "Enter breadth of rectangle: ";
    cin >> br;
}

void rectangle::perimeter()
{
    cout << "Perimeter of rectangle = " << 2 * (len + br);
}

int main()
{
    rectangle r;
    r.input();
    r.perimeter();
    return 0;
}