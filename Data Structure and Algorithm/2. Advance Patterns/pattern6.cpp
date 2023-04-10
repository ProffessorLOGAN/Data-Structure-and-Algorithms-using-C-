#include <iostream>
using namespace std;

int main()
{
    //    Pattern 6
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // Solution

    int n, i, j;

    cout << " Enter no of Row :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << (i - j + 1) << " ";
        }

        cout << endl;
    }

    return 0;
}