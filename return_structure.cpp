#include <iostream>
#include <stdlib.h>
using namespace std;

struct temp
{
    string name;
    int reg_no;
    float sgpa;
};

temp print(temp array[])
{
    cout << "::::: The data recorded in memory :::::";
    cout << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << i + 1 << "." << endl;
        cout << "Your Name: " << array[i].name << endl;
        cout << "Your Registration no.: " << array[i].reg_no << endl;
        cout << "Your final result: " << array[i].sgpa << endl;
        cout << endl;
    }
}

struct temp* getdata(temp ar[])
{
    //temp *data;
    for (int i = 0; i <= 4; i++)
    {
        cout << i + 1 << ". ";
        cout << "Enter your name: ";
        getline(cin >> ws, ar[i].name);
        cout << "Enter your Registration Number: ";
        cin >> ar[i].reg_no;
        cout << "Enter your final result(sgpa): ";
        cin >> ar[i].sgpa;
        cout << endl;
    }
    cout << endl;
    //print(ar);
    //data = ar;
    return ar;
}

int main()
{
    struct temp arr[5], *ptr;
    ptr = getdata(arr);
    //ptr2=&ptr;
    print(ptr);
    return 0;
}
