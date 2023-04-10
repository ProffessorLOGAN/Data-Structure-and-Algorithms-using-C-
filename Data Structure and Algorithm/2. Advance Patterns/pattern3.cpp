#include <iostream>
using namespace std;

int main()
{

    //    Pattern 3

    //   *
    //   * *
    //   * * *
    //   * * * *

    // Solution

    int n, i, j;

    cout << " Enter no of Row :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}