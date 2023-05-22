#include <iostream>
using namespace std;

int main()
{
    int arr1[2][2], arr2[2][2], arr3[2][2];

    cout << "Enter elements of matrix1 below :\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << "Enter element of arr1[" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }
    cout << "\n";
    cout << "Enter elements of matrix2 below :\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << "Enter element of arr2[" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }
    cout << "\n";
    cout << "Sum of matrix1 and matrix2 are :\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            cout << "Element of arr3[" << i << "][" << j << "]: " << arr3[i][j];
            cout << "\n";
        }
    }
    return 0;
}