#include <iostream>
#include <string.h>
using namespace std;

struct student
{
    string name;
    int reg_no;
};
int main()
{
    struct student ptr,*temp;

    cout << "STUDENT DETAILS" << endl;
    cout << "Enter your name: ";
    getline(cin >> ws, ptr.name);
    cout << "Enter your registration no.: ";
    cin >> ptr.reg_no;
    cout << endl;   
      
    temp=&ptr;
    cout << "::::: The data recorded in memory :::::";
    cout << endl;
    cout << "Student Name: " << temp->name << endl;
    cout << "Student Reg.No.: " << temp->reg_no << endl;
    return 0;
}