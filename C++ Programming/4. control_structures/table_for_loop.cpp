#include <iostream>
using namespace std;

int main()
{
    int no;
    cout << "enter table  no " << endl;
    cin >> no;
    cout << "The table of " << no << " is : " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << no << " * " << i << " = " << no * i << endl;
    }
    return 0;
}