#include <iostream>
using namespace std;

class one
{
private:
    int a = 34, b = 99;
    friend class two;
public:
    void sum()
    {
        cout << a << "+" << b << " = " << a + b << endl;
    }
};
class two
{
private:
    int x = 45, y = 76;

public:
    one o1;
    void sum1()
    {
        cout << x << "+" << y << " = " << x + y << endl;
    }
    void sum2()
    {
        cout << "(" << o1.a << "+" << x << ")" << "+" << "(" << o1.b << "+" << y << ")" << " = " << x + y + o1.a + o1.b << endl;
    }
};
int main()
{
    two temp;
    temp.o1.sum();
    temp.sum1();
    temp.sum2();
    return 0;
}