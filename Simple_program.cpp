#include <iostream>
using namespace std;

int main()
{
    char str[40];
    int m1, m2, m3, avg;

    cout << "Enter your name: ";
    gets(str);              

    for (int i = 0; i <= 1; i++)
    {
        cin >> i;
    }
    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;
    avg = (m1 + m2 + m3) / 3;

    cout << "\nEntered name is " << str;
    cout << "\nAverage Marks stored is " << avg;

    return 0;
}