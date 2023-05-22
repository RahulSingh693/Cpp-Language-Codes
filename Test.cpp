#include <iostream>
using namespace std;

class NUM
{
private:
    int n;

public:
    //function to get number
    void
    getNum(int x)
    {
        n = x;
    }
    //function to display number
    void dispNum(void)
    {
        cout << "Number is: " << n;
    }
    //add two objects - Binary Plus(+) Operator Overloading
    NUM operator+(NUM &obj)
    {
        NUM x; //create another object
        x.n = this->n + obj.n;
        return (x); //return object
    }
};
int main()
{
    NUM num1, num2, sum;
    num1.getNum(10);
    num2.getNum(20);

    //add two objects
    num1 = num1 + num2;

    num1.dispNum();
    cout << endl;
    return 0;
}