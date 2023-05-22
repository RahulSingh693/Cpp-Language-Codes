#include <iostream>
using namespace std;

struct temp
{
    string name;
    int reg_no;
    float sgpa;
};
void print( temp ar[])
{
    cout << "::::: The data recorded in memory :::::";
    cout << endl;

    for (int i = 0; i <= 1; i++)
    {
        cout << i + 1 << "." << endl;
        cout << "Your Name: " << ar[i].name << endl;
        cout << "Your Registration no.: " << ar[i].reg_no << endl;
        cout << "Your final result: " << ar[i].sgpa << endl;
        cout << endl;
    }
}
int main()
{
    struct temp ar[2];

    for (int i = 0; i <= 1; i++)
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
    print(ar);
    return 0;
}
