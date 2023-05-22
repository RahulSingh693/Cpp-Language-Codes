#include <iostream>
using namespace std;

template <class T1, class T2>
class myclass
{
public:
    T1 data;
    T2 data2;
    myclass(T1 a, T2 b)
    {
        data = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data << endl << this->data2;
    }
};
int main()
{
    myclass<char, float> obj('c', 1.8);
    obj.display();
    return 0;
}