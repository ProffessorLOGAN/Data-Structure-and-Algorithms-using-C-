#include <iostream>
using namespace std;

union money // uses one data type at a time
{
    /* Data */
    int rice;     // 2 bytes
    char car;     // 1 bytes
    float pounds; // 4 bytes
};

int main()
{
    union money m1;
    m1.car = 'C';
    cout << "Employee Car : " << m1.car << endl;

    return 0;
}