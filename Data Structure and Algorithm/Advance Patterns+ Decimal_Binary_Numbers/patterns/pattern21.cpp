#include <iostream>
using namespace std;

int main()
{

    //    Pattern 21

    //    1
    //   121
    //  12321
    // 1234321

    // Solution

    int n;
    cout << "\n Enter size of pattern : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int l = i - 1; l >= 1; l--)
        {
            cout << l;
        }

        cout << "\n";
    }

    return 0;
}