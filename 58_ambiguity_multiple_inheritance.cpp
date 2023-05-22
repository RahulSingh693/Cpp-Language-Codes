#include <iostream>
using namespace std;

class one
{
protected:
    int a=99;
public:
    void show()
    {
        cout << "Number in first class = " << a << endl;
    }
};
class two
{
protected:
    int b=87;
public:
    void show()
    {
        cout << "Number in second class = " << b << endl;
    }
};
class derive : public one, public two
{
public:
    void showw()
    {
        cout << "Now in derived class.";
    }
};
int main()
{
    derive d;
    d.show();
    // d.one::show();   *This is used to remove ambiguity.
    d.showw();
    return 0;
}