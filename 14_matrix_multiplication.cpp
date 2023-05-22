#include <iostream>
using namespace std;

int main()
{
    int arr1[2][3], arr2[3][2], arr3[2][2], sum;

    cout << "Enter elements of matrix1 below :\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element of arr1[" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }
    cout << "\n";
    cout << "Enter elements of matrix2 below :\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter element of arr2[" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }
    cout << "\n";
    cout << "Multiplication of matrix1 and matrix2 are :\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum = sum + arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element of arr3[" << i << "][" << j << "]: " << arr3[i][j];
            cout << "\n";
        }
    }
    return 0;
}