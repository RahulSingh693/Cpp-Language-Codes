#include <iostream>
using namespace std;

int main()
{
    int arr[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element of arr[" << i << "]: ";
        cin >> arr[i];
    }

    for (int j = 0; j < 5; j++)
    {
        if (j % 2 != 0)
        {
            sum = sum + arr[j];
        }
    }
    cout << "Sum of elements of array = " << sum;

    return 0;
}