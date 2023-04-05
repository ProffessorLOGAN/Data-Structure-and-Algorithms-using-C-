#include <iostream>
using namespace std;

int main()
{
    int no, i = 1;
    cout << "Enter table no :" << endl;
    cin >> no;
    cout << " The table of " << no << " is :" << endl;
    while (i <= 10)
    {
        cout << no << " * " << i << " = " << no * i << endl;
        i++;
    }
    return 0;
}