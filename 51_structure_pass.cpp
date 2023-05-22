#include <iostream>
using namespace std;

struct temp
{
    int a, b;
};
void get(temp ptr)
{
    ptr.a = 45;
    ptr.b = 99;
    cout << ptr.a << ", " << ptr.b;
}
int main()
{
    temp t;
    get(t);
    return 0;
}