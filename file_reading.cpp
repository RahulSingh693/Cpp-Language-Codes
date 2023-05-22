#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    cout << "Write something in the file: " << endl;

    ofstream r("Newfile.txt", ios_base::out);
    string inpt;

    while (r)
    {
        getline(cin, inpt);
        if (inpt == "0")
        {
            break;
        }
        r << inpt << endl;
    }
    r.close();

    cout << "Contents of file are: " << endl;
    ifstream w("Newfile.txt", ios_base::in);

    while (w)
    {
        getline(w, inpt);
        cout << inpt << endl;
    }
    w.close();
    return 0;
}
