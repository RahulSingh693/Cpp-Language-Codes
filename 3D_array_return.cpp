#include <iostream>
using namespace std;

char getinput(char *);

int main()
{
    char arr[2][2][3], *ptr1;
    char *ptr;
    ptr = &arr[0][0][0];
    getinput(ptr);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << "Value at arr[" << i << "][" << j << "][" << k << "]: " << *ptr << endl;
                ptr++;
            }
        }
    }

    return 0;
}

char getinput(char *ptr)
{
    char c = 'A';
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                *ptr = c;
                c++;
                ptr++;
            }
        }
    }
    // return *ptr;
}