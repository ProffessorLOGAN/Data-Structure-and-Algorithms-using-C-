#include <iostream>
using namespace std;

int main()
{

    //    Pattern 19

    //  1 2 3 4
    //    2 3 4
    //      3 4
    //        4

    // Solution

    int n, i, j, k;
    cout << "\n Enter size of pattern : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= n - i + 1; k++)
        {
            cout << j + k - 1;
        }

        cout << "\n";
    }

    return 0;
}