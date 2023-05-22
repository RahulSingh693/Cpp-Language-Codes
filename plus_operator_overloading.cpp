#include <iostream>
using namespace std;

class complex
{
private:
    float real;
    float imag;

public:
    complex() : real(0), imag(0) {}

    void input()
    {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    complex operator+(const complex &obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output()
    {
        if (imag < 0)
            cout << "Output complex number: " << real << imag << "i";

        else
            cout << "Output complex number: " << real << "+" << imag << "i";
    }
};

int main()
{
    complex complex1, complex2, result;

    cout << "Enter first complex number: \n";
    complex1.input();

    cout << "Enter second complex number: \n";
    complex2.input();
    result.output();

    return 0;
}