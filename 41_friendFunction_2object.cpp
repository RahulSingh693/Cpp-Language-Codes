#include <iostream>
using namespace std;

class neext;
class frnd
{
private:
    int a;
    float b;
public:
    void frnde(int x, float y)
    {
        cout<<"..........a...b.........."<<endl;
        a = x;
        b = y;
        cout << a << endl << b << endl;
    }
    friend void both(frnd, neext);
};
class neext
{
private:
    int p, q;
public:
    void nxt(int pp, int qq)
    {
        cout<<"..........p...q.........."<<endl;
        p = pp;
        q = qq;
        cout << p << endl << q << endl;
    }
    friend void both(frnd, neext);
};
void both(frnd x, neext m)
{
    cout << "Enter value of a: ";
    cin >> x.a;
    cout << "Enter value of b: ";
    cin >> x.b;
    cout << x.a << endl << x.b<<endl;
    cout << "Enter value of p: ";
    cin >> m.p;
    cout << "Enter value of q: ";
    cin >> m.q;
    cout << m.p << endl << m.q;
}
int main()
{
    frnd p;
    p.frnde(23, 56.364);
    neext n;
    n.nxt(23, 565);
    both(p, n);
    return 0;
}
