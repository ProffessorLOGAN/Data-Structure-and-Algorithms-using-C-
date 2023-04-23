#include <iostream>
using namespace std;

int main()
{
    //    Pattern 5

    //    1
    //    2 3
    //    4 5 6
    //    7 8 9 10

    // Solution

    int n, i, j;
    int count = 1;

    cout << " Enter no of Row :" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}