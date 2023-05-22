#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d;
    float distance;
    cout << "Enter coordinate of first point : ";
    cin >> a >> b;
    cout << "Enter coordinate of second point : ";
    cin >> c >> d;

    distance = sqrt((c - a) * (c - a) + (d - b) * (d - b));
    cout << "Distance between two points = " << distance;
    return 0;
}