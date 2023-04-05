#include <iostream>
using namespace std;

struct employee
{
    /* Data */
    int eID;
    char Cat;
    float salary;
};

int main()
{

    struct employee emp1;

    emp1.eID = 001;
    emp1.Cat = 'A';
    emp1.salary = 80000;

    cout << "Employee ID : " << emp1.eID << endl;
    cout << "Employee Category : " << emp1.Cat << endl;
    cout << "Employee Salary : " << emp1.salary << endl;

    return 0;
}