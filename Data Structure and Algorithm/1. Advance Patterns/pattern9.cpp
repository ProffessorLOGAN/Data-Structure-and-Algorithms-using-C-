#include <iostream>
using namespace std;

int main()
{
    //    Pattern 9

    //    A B C
    //    D E F
    //    I J K

    // Solution

    int n, i, j;

    cout << " Enter no of Row :" << endl;
    cin >> n;
    cout << endl;
    char ch = 'A';

    for (i = 1; i <= n; i++)
    {
        {
            for (j = 1; j <= n; j++)
            {

                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }
    }

    return 0;
}