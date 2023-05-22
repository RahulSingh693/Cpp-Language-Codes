#include <iostream>
using namespace std;

int func()
{
    int a, b;
    cout << "Enter the data: ";
    cin >> a;
    cout << "Enter the data: ";
    cin >> b;
    cout << "Numbers are: " << a << ", " << b << endl;
}
float func()
{
    int a, b;
    cout << "Enter the data: ";
    cin >> a;
    cout << "Enter the data: ";
    cin >> b;
    cout << "Numbers are: " << a << ", " << b << endl;
}
int main()
{
    cout << "\tFunction 1" << endl;
    func();
    cout << "\tFunction 2" << endl;
    func();
    return 0;
}