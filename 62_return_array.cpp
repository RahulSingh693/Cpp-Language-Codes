#include <iostream>
using namespace std;

int *getdata(int arr[])
{
    int a = 2;
    for (int i = 0; i < 2; i++)
    {
        arr[i] = a;
        a++;
    }
    return arr;
}
void print(int *ptr)
{
    for (int i = 0; i < 2; i++)
    {
        cout << *ptr << "\t";
        ptr++;
    }
}
int main()
{
    int arr[2], *ptr;
    ptr = getdata(arr);
    print(ptr);
    return 0;
}