#include <iostream>
using namespace std;

int main()
{
    int age1 = 32;
    int age2(32);
    int age3{323};
    cout << "here it is " << age3;

    int f;
    cin >> f;
    int c = (f - 32) * 5 / 9;
    cout << c;

    for (int j = 10; j <= 100; j++)
        cout << j << endl;

    //Inferring types or changing or giving any variable their form like int,float,char.

    //first type.......
    auto age1 = 32;
    auto age2 = age1;
    
    //second type..........
    char ch;
    decltype(ch) age;   //now age is also a char value.

    return 0;
}