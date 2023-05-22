#include <iostream>
using namespace std;

struct student
{
    string name;
    int reg_no;
};
int main()
{
    student stu;

    cout << "STUDENT DETAILS" << endl;
    cout << "Enter your name: ";
    getline(cin >> ws, stu.name);
    cout << "Enter your registration no.: ";
    cin >> stu.reg_no;
    cout << endl;
    cout << "::::: The data recorded in memory :::::";
    cout << endl;
    cout << "Student Name: " << stu.name << endl;
    cout << "Student Reg.No.: " << stu.reg_no << endl;
    return 0;
}