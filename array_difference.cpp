#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int iarr[5];
    float farr[5];
    char carr[5],cs[5],ss[5]={'s','u','b','h','a'},cc[5]={'h','a','p','p','y'};

    // cout << "Integer array: \n";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Input at iarr[" << i << "]: ";
    //     cin >> iarr[i];
    // }
    // cout << endl;
    // cout << "Float array: \n";
    // for (int j = 0; j < 5; j++)
    // {
    //     cout << "Input at farr[" << j << "]: ";
    //     cin >> farr[j];
    // }
    // cout << endl;
    // cout << "Character array: \n";
    cout << "Enter value in character array: ";
    cin >> carr;
    cout << "Enter value in character array: ";
    cin >> cs;

    // // output

    // cout << "Integer array: \n";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << iarr[i] << "\t";
    // }
    // cout << endl;
    // cout << "Float array: \n";
    // for (int j = 0; j < 5; j++)
    // {
    //     cout << farr[j] << "\t";
    // }
    // cout << endl;
    cout << "Character array: \n";
    
    cout << carr;
    cout << endl<<cs;
    // cout << endl<<iarr;
    // cout << endl<<farr;
    cout << endl<<cc;
    cout << endl<<ss;

    return 0;
}