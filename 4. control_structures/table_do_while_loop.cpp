#include <iostream>
using namespace std;

int main()
{
    int no, i = 1;
    cout << "Enter table no :" << endl;
    cin >> no;
    cout << " The table of " << no << " is :" << endl;

    do
    {
        cout << no << " * " << i << " = " << no * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}
