#include <iostream>
using namespace std;

class sum
{
private:
    int a, b;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> a;
        cout << "Enter a number: ";
        cin >> b;
    }
    void add()
    {
        cout << "Sum of numbers = " << a + b;
    }
};

int main()
{
    sum a;
    a.input();
    a.add();

    return 0;
}