#include <iostream>
#include <string.h>
using namespace std;

class strng
{
private:
    string s1;

public:
    void input()
    {
        cout << "Enter value in 1st string: ";
        getline(cin, s1);
    }

    strng operator+(strng s2)
    {
        strng temp;
        temp = strcat(s1, s2.s1);
    }
};
int main()
{

    return 0;
}