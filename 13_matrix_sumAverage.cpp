#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    float sum = 0;

    cout << "Enter elements of matrix1 below :\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element of arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    cout << "\n";
    cout << "Sum of elements of matrix = " << sum;
    cout << "\n";
    cout << "Average of elements of matrix = " << sum / 9;

    return 0;
}