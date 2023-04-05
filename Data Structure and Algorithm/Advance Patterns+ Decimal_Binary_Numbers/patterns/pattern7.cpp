#include <iostream>
using namespace std;

int main()
{
    //    Pattern 7

    //    A A A
    //    B B B
    //    C C C

    // Solution

    int n, i, j;

    cout << " Enter no of Row :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        {
            for (j = 1; j <= n; j++)
            {
                char ch = 'A' + i - 1;
                cout << ch << " ";
            }
            cout << endl;
        }
    }

    return 0;
}