#include <iostream>
using namespace std;

class base
{
protected:
    int a;
public:
    int fun()
    {
        cout << "Enter the number: ";
        cin >> a;
    }
};
class sum : public base
{
private:
    int b;
public:
    void fun2()
    {
        cout << "Enter the number: ";
        cin >> b;
        cout << "Sum of numbers = " << a + b;
    }
};
int main()
{
    sum s;
    s.fun();
    s.fun2();
    return 0;
}