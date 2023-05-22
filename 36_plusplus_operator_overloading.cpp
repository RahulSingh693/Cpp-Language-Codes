#include <iostream>
using namespace std;

class index
{
private:
    int count;

public:
    index()
    {
        count = 0;
    }
    index(int i)
    {
        count = i;
    }
    index operator++()
    {
        ++count;
        return count;
    }
    index operator++(int)
    {
        index temp(count);
        count++;
        return temp;
    }
    void showdata()
    {
        cout << count << endl;
    }
};
int main()
{
    index c, d, e, f;
    cout << "c= ";
    c.showdata();
    d = ++c;
    cout << "c= ";
    c.showdata();
    cout << "d= ";
    d.showdata();
    cout << "e= ";
    e.showdata();
    f = e++;
    cout << "e= ";
    e.showdata();
    cout << "f= ";
    f.showdata();
    return 0;
}