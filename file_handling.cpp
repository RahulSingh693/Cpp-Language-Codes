#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    fstream myfile;   //myfile is the object of class fstream. // cout is also object of iostream.

    myfile.open("Newfile.txt", ios::out);

    if(myfile.is_open())
    {
        myfile<<"Hello world. This is Cpp programming world.";
    }
    else
    {
        cout<<"File doesn't exist.";
    }
    myfile.close();

    //or

    // char ch = 'A';
    // int i = 100;
    // double d = 23.568;
    // string s1 = "C++";
    // string s2 = "Programming";

    // ofstream test("Newfile.txt");
    // test << ch;
    // test << endl;
    // test << i;
    // test << endl;
    // test << d;
    // test << endl;
    // test << s1 << endl;
    // test << s2 << endl;

    return 0;
}
