#include <iostream>
#include <string.h>
using namespace std;

class operate
{
private:
    char m[20];
public:
    void operate1()
    {
        cout << "Enter a character: ";
        cin >> m;
    }
    operate operator+(const operate &fun)
    {
        operate pos;
        strcat(this->m, fun.m);
        strcpy(pos.m, this->m);
        return pos;
    }
    void output()
    {
        cout << "Concate of two characters: " << m;
    }
};
int main()
{
    operate o1, o2;
    o1.operate1();
    o2.operate1();
    operate o3 = o1 + o2;
    o3.output();
    return 0;
}
