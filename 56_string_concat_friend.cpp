#include <iostream>
#include <string.h>
using namespace std;

class operate
{
public:
    char m[20];
    void operate1()
    {
        cout << "Enter a character: ";
        cin >> m;
    }
    friend operate operator+(operate &, operate &);
};
operate operator+(operate &fun, operate &sec)
{
    operate pos;
    strcat(fun.m, sec.m);
    strcpy(pos.m, fun.m);

    return pos;
}
int main()
{
    operate o1, o2;
    o1.operate1();
    o2.operate1();
    operate o3 = o1 + o2;
    cout << "Concat of characters: " << o3.m;
    return 0;
}