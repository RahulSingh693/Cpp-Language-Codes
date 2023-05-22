#include <iostream>
using namespace std;

template <class rah> // we can put any name in place of 'rah'.
rah myfun(rah a, rah b)
{
    return (a < b) ? a : b;
}
int main()
{
    int i = 10, j = 20;
    cout << myfun(i, j) << endl;

    float a = 3.143, b = 4.984;
    cout << myfun(a, b) << endl;

    char c = 'A', d = 'B';
    cout << myfun(c, d) << endl;

    double f = 1.2355, e = 3.2311;
    cout << myfun(f, e) << endl;

    return 0;
}
