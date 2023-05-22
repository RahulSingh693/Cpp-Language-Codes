#include <iostream>
using namespace std;

class two;
class one 
{
    public:
    int a,b;
    void get()
    {
        cout<<"Enter: ";
        cin>>a;
        cout<<"Enter: ";
        cin>>b;
    }
    void print()
    {
        cout<<a<<endl<<b;
    }
};
class two
{
    public:
    int c,d;
    void read()

    {
        cout<<"Enter: ";
        cin>>c;
        cout<<"Enter: ";
        cin>>d;
    }
    two operator=(one obj)
    {
        two ret;
        ret.c=obj.a;
        ret.d=obj.b;
        return ret;
    }   
};
int main()
{
    one o1;
    two t1;
    two t1=o1;
    o1.print();
    return 0;
}