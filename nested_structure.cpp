#include <iostream>
using namespace std;

struct Aa
{
    int a;
    float b;
};
struct Bb
{
    Aa one;
    Aa two;
};

int main()
{
    Bb access;
    access = {{23, 24.56}, {57, 45.86}};

    cout << "Sim of integers: " << access.one.a + access.two.a << endl;
    cout << "Sim of floats: " << access.one.b + access.two.b;

    return 0;
}