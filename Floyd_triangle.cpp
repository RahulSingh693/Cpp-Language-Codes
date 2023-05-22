#include <iostream>
using namespace std;

int main()
{
    int arr[5][5], k = 4, a = 1,l=;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (5 - k); j++)
        {
            arr[i][j] = a;
            a++;
        }
        k--;
    }
    cout << endl;
    cout << "-------------:Values of Floyd's Triangle:---------------" << endl;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (5-l); j++)
        {
            cout << arr[i][j];
            cout << "\t";
        }
        l--;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    return 0;
}