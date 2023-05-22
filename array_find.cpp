#include <iostream>
using namespace std;

int main()
{
    int arr[20], s, f,c=0,i;
    cout << "Enter size of array: ";
    cin >> s;

    for (int i = 0; i < s; i++)
    {
        cout << "Enter element at arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Enter element to find: ";
    cin >> f;
    for (i = 0; i < s; i++)
    {
        if (arr[i] == f)
        {
            c=1;
            break;
        }
        
    }
    if(c==1)
    {
        cout << "Yes, Element found at index " << i << endl;
    }
    else
        {
            cout << "Sorry, Element not found.";
        }
    return 0;
}