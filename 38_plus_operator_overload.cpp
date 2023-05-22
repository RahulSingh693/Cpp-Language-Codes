#include <iostream>
#include <string.h>
using namespace std;

class operate
{
private:
    int n;
    char m[20];
public:
    void operate1()
    {
        cout << "Enter a number: ";
        cin >> n;
        cout << "Enter a character: ";
        cin >> m;
    }
    friend operate operator+(operate, operate);
    void output()
    {
        cout << "Sum of first two number: " << n << endl;
        cout << "Concate of two characters: " << m;
    }
};
operate operator+(operate x, operate fun)
{
    operate pos;
    pos.n = x.n + fun.n;
    strcat(x.m, fun.m);
    strcpy(pos.m, x.m);

    return pos;
}
int main()
{
    operate o1, o2;
    o1.operate1();
    o2.operate1();
    operate o3 = o1 + o2;
    o3.output();
    return 0;
}