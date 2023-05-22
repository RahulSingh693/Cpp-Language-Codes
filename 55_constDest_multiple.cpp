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
class second
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
class third : public first, public second
{
public:
    third()
    {
        cout << "Sum of numbers = " << f + s<<endl;
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