#include <iostream>
using namespace std;

int sum(int *, int, int);
int main()
{
    int arr[30], size, result;
    cout << "Enter size of array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at arr[" << i << "]: ";
        cin >> arr[i];
    }
    result = sum(arr, size, 0);
    cout << "Sum of array elements: " << result;
    return 0;
}
int sum(int arr[], int s, int i)
{
    if (i < s)
    {
        return arr[i] + sum(arr, s, i + 1);
    }
    else
    {
        return 0;
    }
}