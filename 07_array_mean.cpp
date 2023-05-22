#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    float sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element of arr[" << i << "]: ";
        cin >> arr[i];
    }

    for (int j = 0; j < 5; j++)
    {
        sum = sum + arr[j];
    }
    cout << "Arithmetic mean of elements of array = " << sum/2;

    return 0;
}