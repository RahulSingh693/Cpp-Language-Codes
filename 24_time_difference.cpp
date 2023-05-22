#include <iostream>
using namespace std;

int main()
{
    int h1, m1, h2, m2, check1 = 0;

    cout << "Enter first time (hour minute): ";
    cin >> h1 >> m1;
    cout << "Enter second time (hour minute): ";
    cin >> h2 >> m2;

    int diff1, diff2;

    if (h1 > h2)
    {
        diff1 = m1 - m2;
    }
    else
    {
        diff1 = m2 - m1;
    }
    if (diff1 < 0)
    {
        diff1 = diff1 + 60;
        check1 = 1;
    }

    diff2 = h1 - h2;
    if (diff2 < 0)
    {
        diff2 = -diff2;
    }

    if (check1 == 1)
    {
        diff2 = diff2 - 1;
    }

    int sec1, sec2;

    sec1 = diff1 * 60;
    sec2 = diff2 * 3600;

    cout << "Difference of times in second = " << sec1 + sec2;

    return 0;
}