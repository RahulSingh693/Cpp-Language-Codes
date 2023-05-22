#include <iostream>
using namespace std;

class one
{
public:
    one()
    {
        cout << "Class one constructor called." << endl;
    }
    ~one()
    {
        cout << "Destructor of one called." << endl;
    }
};
class two : public one
{
public:
    two()
    {
        cout << "Class two constructor called" << endl;
    }
    ~two()
    {
        cout << "Destructor of two called." << endl;
    }
};
class three : public two
{
public:
    three()
    {
        cout << "Class three constructor called" << endl;
    }
    ~three()
    {
        cout << "Destructor of three called." << endl;
    }
};
int main()
{
    three t;
    return 0;
}