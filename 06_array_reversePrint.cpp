#include <iostream>
using namespace std;

int main()
{
    int arr[5], *ptr;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element of arr[" << i << "]: ";
        cin >> arr[i];
    }
    ptr = &arr[4];
    cout << "Elements of array are :\n";
    for (int j = 0; j < 5; j++)
    {
        cout << *ptr << "\t";
        ptr--;
    }
    return 0;
}