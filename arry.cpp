#include <iostream>
using namespace std;

int main()
{
    int num,digit=0;
    cout<<"Enter a number: ";
    cin>>num;
    int val=num;
    for(int i=0;i<1000;i++)
    {
        num=num/10;
        digit++;
        if(num<=0)
            break;
    }
    int arr[digit];
    for(int j=(digit-1);j<=0;j--)
    {
        arr[j]=val%10;
        val=val/10;
    }
    for(int k=0;k<digit;k++)
    {
        cout<<arr[k]<<",";
    }
    return 0;
}