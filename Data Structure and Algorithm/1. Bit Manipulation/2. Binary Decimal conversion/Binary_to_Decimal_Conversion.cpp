#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n;
    cout << "\n Enter any Binary number(0 &1) :" << endl;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {

        int digit = n % 10;

        if (digit == 1)
        {
            ans += pow(2, i);
        }

        n = n / 10;
        i++;
    }
    cout << "\n Binary to decimal Output is :" << ans;

    return 0;
}