#include <iostream>
using namespace std;

int main()
{
    //    Pattern 10

    //    A B C
    //    B C D
    //    C D E

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
                char ch = 'A' + j + i - 2;
                cout << ch << " ";
            }
            cout << endl;
        }
    }

    return 0;
}