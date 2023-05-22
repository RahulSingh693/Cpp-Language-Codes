#include <iostream>
using namespace std;

int main()
{
    int i = 65;

    cout<<"Uppercase alphabets are :\n";
    for (i = 65; i < 91; i++)
    {
        cout << char(i) << "\t";
    }
    return 0;
}