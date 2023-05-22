#include <iostream>
using namespace std;

class one
{
protected:
    int a = 99;
public:
    void show()
    {
        cout << "Number in first class = " << a << endl;
    }
};
class two : public one
{
protected:
    int b = 87;
public:
    void show()
    {
        cout << "Number in second class = " << b << endl;
    }
};
int main()
{
    two T;
    T.show();
    return 0;
}