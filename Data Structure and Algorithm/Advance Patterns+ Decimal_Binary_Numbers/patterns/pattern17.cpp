#include <iostream>
using namespace std;

int main()
{

    //    Pattern 17

    //    1111
    //     222
    //      33
    //       4

    // Solution

    int n;
    cout << "\n Enter size of pattern : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << i;
        }

        cout << "\n";
    }

    return 0;
}