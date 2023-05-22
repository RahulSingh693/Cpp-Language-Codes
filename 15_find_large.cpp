#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    
    cout << "\n";
    if (a > b && a > c)
    {
        cout << a << " is largest among three.";
    }
    else if (b > a && b > c)
    {
        cout << b << " is largest among three.";
    }
    else if (c > b && c > a)
    {
        cout << a << " is largest among three.";
    }

    return 0;
}