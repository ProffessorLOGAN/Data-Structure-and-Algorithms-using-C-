// Q. Print all Individual Bit of a given number and print it on Console.

#include <iostream>
using namespace std;
int main()
{

    int no;

    cout << "\n Enter any Number :";
    cin >> no;
    cout << endl;

    int temp = no;
    int ans = 0, r = 0;
    while (temp != 0)
    {
        r = temp % 10;
        ans = ans * 10 + r;
        temp = temp / 10;
    }


    cout << "\n The Individual Bit of Number " << no << " is :" << endl;
    no = ans;
    while (no)
    {
        r = no % 10;
        no = no / 10;
        ans = r;
        cout << ans << endl;
    }

    return 0;
}