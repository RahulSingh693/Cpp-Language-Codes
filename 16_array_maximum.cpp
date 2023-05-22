#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,10,5,9,20,30};

    int max = arr[0];
    for (int i = 1; i < 6; i++) {
        if(arr[i] > max) max = arr[i];
    }
    cout<<max;
    return 0;
}