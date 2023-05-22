#include <iostream>
using namespace std;

template <typename t>

t get()
{
    t a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    t sum = a + b;
    return sum;
}
int main()
{
    float store;
    int gett;
    store = get<float>();
    cout << "Sum of two float numbers = " << store<<endl;
    gett = get<int>();
    cout << "Sum of two integer numbers = " << gett;
    return 0;
}