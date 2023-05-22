#include <iostream>
using namespace std;

struct college
{
    string name;
    int college_pin;
    string college_address;
};
struct student
{
    string name;
    int reg_no;
    string trade;
    float sgpa;
    struct college col;
};
int main()
{
    struct student stu;

    cout << "COLLEGE DETAILS" << endl;
    cout << "1. Enter college name: ";
    getline(cin >> ws, stu.col.name);
    cout << "2. Enter college pin code: ";
    cin >> stu.col.college_pin;
    cout << "3. Enter college Address: ";
    getline(cin >> ws, stu.col.college_address);
    cout << endl;
    cout << "STUDENT DETAILS" << endl;
    cout << "4. Enter your name: ";
    getline(cin >> ws, stu.name);
    cout << "5. Enter your registration no.: ";
    cin >> stu.reg_no;
    cout << "6. Enter your trade: ";
    getline(cin >> ws, stu.trade);
    cout << "7. Enter your final sgpa: ";
    cin >> stu.sgpa;
    cout << endl;
    cout << "::::: The data recorded in memory :::::";
    cout << endl;
    cout << "COLLEGE DETAILS" << endl;
    cout << "1. College name: " << stu.col.name << endl;
    cout << "2. College pin code: " << stu.col.college_pin << endl;
    cout << "3. College Address: " << stu.col.college_address << endl;
    cout << "STUDENT DETAILS" << endl;
    cout << "5. Student Name: " << stu.name << endl;
    cout << "6. Student Reg.No.: " << stu.reg_no << endl;
    cout << "7. Student trade: " << stu.trade << endl;
    cout << "8. Student Final marks: " << stu.sgpa << endl;
    return 0;
}