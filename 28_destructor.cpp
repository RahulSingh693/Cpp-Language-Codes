#include <iostream>
using namespace std;

class example
{
private:
    int data;

public:
    example()
    {
        cout << endl << "Inside the constructor";
    }
    ~example()
    {
        cout << endl << "Inside the destructor" << endl;
    }
};
int main()
{
    example e;
    return 0;
}