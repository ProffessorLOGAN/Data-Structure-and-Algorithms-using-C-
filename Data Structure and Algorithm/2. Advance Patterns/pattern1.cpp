#include <iostream>
using namespace std;

int main()
{

    //    Pattern 1

    //    1 2 3 4
    //    1 2 3 4
    //    1 2 3 4
    //    1 2 3 4

    // Solution

    int n, i, j;
    cout << "\n Enter no for pattern :" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}