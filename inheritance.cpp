#include <iostream>
using namespace std;

class baseclass
{
private:
    int num1;

public:
    baseclass()
    {
        cout << "Enter the value of number 1 : ";
        cin >> num1;
    }
    void print1()
    {
        cout<<"1st number is : "<<num1<<endl;
    }
    int returnnum1()
    {
        return num1;
    }
};
class derivedclass : private baseclass
{
private: 
    int num2;

public:
    derivedclass()
    {
        cout << "Enter the value of number 2 : ";
        cin >> num2;
    }
    void print2()
    {
        print1();
        cout<<"2nd number is : "<<num2<<endl;
    }
    int returnnum2()
    {
        return num2;
    }
    int sum()
    {
        cout << "The sum of " << returnnum1() << " and " << num2 << " is : " << returnnum1() + num2;
    }
};
int main()
{
    derivedclass ob;
    //ob.print1();
    ob.print2();
    ob.sum();
    return 0;
}