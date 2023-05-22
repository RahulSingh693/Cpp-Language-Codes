#include <iostream>
using namespace std;

void func()
{
    int a, b;
    cout << "Enter the data: ";
    cin >> a;
    cout << "Enter the data: ";
    cin >> b;
    cout << "Numbers are: " << a << ", " << b << endl;
}
void func(int x, int y)
{
    int a, b;
    a = x;
    b = y;
    cout << "Numbers are: " << a << ", " << b << endl;
}
int main()
{
    cout << "\tFunction 1" << endl;
    func();
    cout << "\tFunction 2" << endl;
    func(99, 87);
    return 0;
}
