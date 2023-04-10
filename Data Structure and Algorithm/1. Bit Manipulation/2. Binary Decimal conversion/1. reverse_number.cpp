// Q. Reverse any Given number and print it

// Solution

#include <iostream>

using namespace std;

int main()
{

    int no;

    cout << "\n Enter any no for reverse value :";
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

    cout << " \n The Reverse Value of " << no << " is : " << ans << endl;

    return 0;
}