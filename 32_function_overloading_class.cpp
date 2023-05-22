#include <iostream>
using namespace std;

class func
{
private:
    int a, b;

public:
    friend void get(func);
    friend void get(func, int, int);
};
void get(func x)
{
    cout << "Enter the data: ";
    cin >> x.a;
    cout << "Enter the data: ";
    cin >> x.b;
    cout << "Sum of the data: " << x.a + x.b << endl;
    cout << "Multiplication of data: " << x.a * x.b << endl;
}
void get(func x, int p, int y)
{
    x.a = p;
    x.b = y;
    cout << "Sum of the data: " << x.a + x.b << endl;
    cout << "Multiplication of data: " << x.a * x.b << endl;
}
int main()
{
    func f1, f2;
    get(f1);
    get(f2, 99, 27);
    return 0;
}