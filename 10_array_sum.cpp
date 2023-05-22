#include <iostream>
using namespace std;

int main()
{
    int arr1[5], arr2[5];
    
    cout << "Enter elements of array1 below :\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element of arr1[" << i << "]: ";
        cin >> arr1[i];
    }
    cout << "\n";
    cout << "Enter elements of array2 below :\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element of arr2[" << i << "]: ";
        cin >> arr2[i];
    }
    cout << "\n";
    cout << "Sum of arr1 and arr2 are :\n";
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i] + arr2[i];
        cout << "Element of arr2[" << i << "]: " << arr2[i];
        cout << "\n";
    }
    return 0;
}