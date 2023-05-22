#include <iostream>
using namespace std;

class circle
{
private:
    float radius;

public:
    void input();
    void circumference();
};

void circle::input()
{
    cout << "Enter radius of circle: ";
    cin >> radius;
}

void circle::circumference()
{
    cout << "Circumference of circle = " << 3.14 * radius * 2;
}
int main()
{
    circle c;
    c.input();
    c.circumference();
    return 0;
}