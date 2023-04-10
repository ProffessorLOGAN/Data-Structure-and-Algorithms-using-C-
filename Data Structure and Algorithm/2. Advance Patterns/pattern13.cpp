#include <iostream>
using namespace std;

int main()
{
    //    Pattern 13

    // D
    // C D
    // B C D
    // A B C D

    // Solution

    int n, i, j;

    cout << " Enter no of Row :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        {
            char ch = 'A' + n - i;
            for (j = 1; j <= i; j++)
            {
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }
    }

    return 0;
}