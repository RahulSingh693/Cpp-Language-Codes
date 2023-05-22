#include <iostream>
using namespace std;

class rect
{
private:
    float len, br;

public:
    rect()
    {
        cout << "Enter length of rectangle: ";
        cin >> len;
        cout << "Enter breadth of rectangle: ";
        cin >> br;
    }
    void area()
    {
        cout << "Area of rectangle = " << len * br << "Sq.unit";
    }
};

int main()
{
    rect r1;
    r1.area();
    return 0;
}