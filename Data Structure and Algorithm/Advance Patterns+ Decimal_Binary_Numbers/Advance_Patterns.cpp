#include <iostream>
using namespace std;

int main()
{

    //    Pattern 14

    //       *
    //     * *
    //   * * *
    // * * * *

    // Solution

    int n, i, j, k, l;

    cout << " Enter no of Row :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        {
            for (j = 1; j <= n; j++)
            {
                for (k = n-j; k >=1; k--)
                {
                    cout << " ";
                }

                cout << "*"
                     << " ";
            }
            cout << endl;
        }
    }

    return 0;
}