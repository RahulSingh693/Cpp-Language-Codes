#include <iostream>
using namespace std;

int main()
{
    int arr[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value of arr[" << i << "]"
                 << "[" << j << "]: ";
            cin >> arr[i][j];
        }
        }
    cout << endl;
    cout << "-------------Values of array[5][5] are:---------------" << endl;
    cout << endl;
    int *ptr;
    ptr = &arr[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *ptr;
            ptr++;
            cout << "\t";
        }
        cout << endl;
    }
    return 0;
}