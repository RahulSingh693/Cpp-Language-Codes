#include <iostream>
using namespace std;

class copi
{
private:
    int a, b;

public:
    copi(int x, int y)
    {
        a = x;
        b = y;
    }
    void sum()
    {
        cout << "Sum of two numbers = " << a + b << endl;
    }
    copi(copi &obj)
    {
        a = obj.a;
        b = obj.b;
    }
};
int main()
{
    copi c1(23, 56);
    c1.sum();
    copi c2 = c1;
    c2.sum(); 
    return 0;
}