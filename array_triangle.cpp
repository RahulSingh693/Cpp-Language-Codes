#include <iostream>
using namespace std;

int main()
{
    int arr[4][7], j, a = 0, k = 0, value = 1;

    for (int i = 0; i < 4; i++)
    {
        j = (3 - a);
        k = (3 + a);
        for (; j <= k; j++)
        {
            arr[i][j] = value;
            cout << "The Value of Array at [" << i << "][" << j << "]: " << arr[i][j] << endl;
            value++;
        }
        a++;
    }
    int v=1,f,o=0,u=0;
    for (int e = 0; e < 4; e++)
    {
        j = (3 - o);
        u = (3 + o);
        for (; f <= k; f++)
        {
            if(e==0)
            {
               cout<<"\t\t\t";
            }
            if(e==1)
            {
               cout<<"\t\t";
            }
            if(e==2)
            {
               cout<<"\t";
            }
            cout << arr[e][f] << "\t";
            v++;
        }
        a++;
    }
    
    return 0;
}