#include <iostream>
using namespace std;

int main()
{
    //    Pattern 2

    //    1 2 3
    //    4 5 6
    //    7 8 9

    // Solution

    int n, i, j;
    int count = 1;
    cout << "\n Enter row no :" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}