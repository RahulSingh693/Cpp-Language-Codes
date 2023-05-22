#include <iostream>
using namespace std;

class first
{
protected:
    int f = 98;

public:
    first()
    {
        cout << "First Number = " << f << endl;
    }
    ~first()
    {
        cout << "Destructor 1 called" << endl;
    }
};
class second : public first
{
protected:
    int s = 65;

public:
    second()
    {
        cout << "Second Number = " << s << endl;
    }
    ~second()
    {
        cout << "Destructor 2 called" << endl;
    }
};
class third : public second
{
protected:
    int t = 87;

public:
    third()
    {
        cout << "Third Number = " << t << endl;
    }
    ~third()
    {
        cout << "Destructor 3 called" << endl;
    }
};
int main()
{
    third t;
    return 0;
}