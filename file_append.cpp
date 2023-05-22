#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    ofstream file1;
    file1.open("Newfile.txt", ios_base::app);
    string inpt;

    while (file1)
    {
        getline(cin, inpt);
        if (inpt == "0")
            break;
        file1 << inpt << endl;
    }
    file1.close();
    return 0;
}