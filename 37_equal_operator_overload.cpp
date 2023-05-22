#include <iostream>
using namespace std;

class eqwal
{
private:
    int a, b;

public:
    eqwal()
    {
        cout << "Enter data a: ";
        cin >> a;
        cout << "Enter data b: ";
        cin >> b;
    }
    void print()
    {
        cout << "Numbers are: " << a << ", " << b << endl;
    }
};
int main()
{
    eqwal e1;
    e1.print();
    eqwal e2 = e1;
    e2.print();
    return 0;
}