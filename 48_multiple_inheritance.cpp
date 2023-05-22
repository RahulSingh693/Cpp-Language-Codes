#include <iostream>
using namespace std;

class one
{
protected:
    int side1;
public:
    void side()
    {
        cout << "Enter base of triangle: ";
        cin >> side1;
    }
};
class two
{
protected:
    int side2;
public:
    void side()
    {
        cout << "Enter height of triangle: ";
        cin >> side2;
    }
};
class area1 : public one, public two
{
private:
    float a = 0.5 * side1 * side2;
public:
    void area()
    {
        one::side();
        two::side();
        cout << "Area of triangle = " << a;
    }
};
int main()
{
    area1 a;
    a.area();
    return 0;
}
