#include <iostream>
using namespace std;

int main()
{
    //    Pattern 12

    // A
    // B C
    // C D E
    // D E F G

    // Solution

    int n, i, j;

    cout << " Enter no of Row :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        {
            for (j = 1; j <= i; j++)
            {
                char ch = 'A' + i + j - 2;
                cout << ch << " ";
            }
            cout << endl;
        }
    }

    return 0;
}