#include <iostream>
using namespace std;

struct node
{
    int a;
    float b;
};
node *get(node n[])
{
    int put = 1;
    for (int i = 0; i < 3; i++)
    {
        n[i].a = put;
        put++;
        n[i].b = put;
        put++;
    }
    return n;
}
void print(node ptr[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Number" << i << " = " << ptr[i].a << endl;
        cout << "Number" << i << " = " << ptr[i].b << endl;
    }
}
int main()
{
    node n[2], *ptr;
    ptr = get(n);
    print(ptr);
    return 0;
}