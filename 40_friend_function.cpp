#include <iostream>
using namespace std;

class frnd
{
private:
    int a;
    float b;
    //friend functions are global functions and are not members of any class.
    friend void frnd1(frnd x);        
public:
    void frnde(int x, float y)
    {
        a = x;
        b = y;
        cout << a << endl << b << endl;
    }
};
void frnd1(frnd x)
{
    cout << "Enter value of a: ";
    cin >> x.a;
    cout << "Enter value of b: ";
    cin >> x.b;
    cout << x.a << endl
         << x.b;
}
int main()
{
    frnd p;
    p.frnde(23, 56.364);
    frnd1(p);
    return 0;
}
