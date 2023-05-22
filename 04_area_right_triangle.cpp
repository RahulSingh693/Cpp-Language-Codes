#include <iostream>
using namespace std;

class triangle
{
private:
    int b, c;

public:
    void area()
    {
        cout << "Enter base of right triangle: ";
        cin >> b;
        cout << "Enter height of right triangle: ";
        cin >> c;
        cout << "Area of right triangle = " << 0.5 * c * b << " Sq. unit";
    }
};
int main()
{
    triangle ar;
    ar.area();
    return 0;
}