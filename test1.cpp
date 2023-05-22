#include <iostream>
using namespace std;

struct student
{
    string name;
    int reg_no;
};
int main()
{
    student *ptr;

    cout << "STUDENT DETAILS" << endl;
    cout << "Enter your name: ";
    getline(cin >> ws, ptr -> name);
    cout << "Enter your registration no.: ";
    cin >> ptr->reg_no;
    cout << endl;

    cout << "::::: The data recorded in memory :::::";
    cout << endl;
    cout << "Student Name: " << ptr->name << endl;
    cout << "Student Reg.No.: " << ptr->reg_no << endl;
    return 0;
}