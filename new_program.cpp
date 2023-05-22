#include <iostream>
using namespace std;

class overload
{
private:
    int i = 9, j = 4;

public:
    void operate(int, int);
    void operate();
};

void overload::operate(int a, int b)
{
    i = a;
    j = b;
}

void overload::operate()
{
    cout << "Multiplication = " << i * j;
}

int main()
{
    overload o;
    o.operate(6, 7);
    o.operate();
    return 0;
}