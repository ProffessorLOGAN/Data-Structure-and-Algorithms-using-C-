#include <iostream>
using namespace std;

int main()
{
    //    Pattern 4

    //   1
    //   2 2
    //   3 3 3
    //   4 4 4 4
    //   5 5 5 5 5

    // Solution

    int n, i, j;

    cout << " Enter no of Row :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}