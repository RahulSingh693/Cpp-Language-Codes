#include <iostream>
using namespace std;

class func
{
private:
    int a, b;

public:
    int get()
    {
        cout << "Enter the data: ";
        cin >> a;
        cout << "Enter the data: ";
        cin >> b;
    }
    float get()
    {
        cout << "Enter the data: ";
        cin >> a;
        cout << "Enter the data: ";
        cin >> b;
    }
    void add_mul()
    {
        cout << "Sum of the data: " << a + b << endl;
        cout << "Multiplication of data: " << a * b << endl;
    }
};
int main()
{
    func f1, f2;
    f1.get();
    f1.add_mul();
    f2.get();
    f2.add_mul();

    return 0;
}