#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n;
    cout << "\n Enter any Decimal number :" << endl;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {

        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "\n Decimal Number to Binary output is :" << ans;

    return 0;
}