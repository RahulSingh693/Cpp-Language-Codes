#include <iostream>
using namespace std;

class pl_eq
{
private:
    int x, y;
public:
    void get()
    {
        cout << "Enter data for x: ";
        cin >> x;
        cout << "Enter data for y: ";
        cin >> y;
    }
    pl_eq operator+=(const pl_eq &temp)
    {
        pl_eq ptr;
        x += temp.x;
        ptr.x = x;
        y += temp.y;
        ptr.y = y;
        return ptr;
    }
    void print()
    {
        cout << "Sum of first two numbers = " << x << endl;
        cout << "Sum of second two numbers = " << y << endl;
    }
};
int main()
{
    pl_eq a1, a2;
    a1.get();
    a2.get();
    pl_eq a3 = a1 += a2;
    a3.print();
    return 0;
}