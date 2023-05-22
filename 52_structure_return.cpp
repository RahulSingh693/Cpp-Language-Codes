#include <iostream>
using namespace std;

struct temp
{
    int a, b;
};
temp get(temp ptr)
{
    ptr.a = 45;
    ptr.b = 99;
    return ptr;
}
int main()
{
    temp t, result;
    result = get(t);
    cout << result.a << ", " << result.b;

    return 0;
}