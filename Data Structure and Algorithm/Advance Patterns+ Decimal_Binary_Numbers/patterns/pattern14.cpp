#include <iostream>
using namespace std;

int main()
{

    //    Pattern 14

    //       *
    //     * *
    //   * * *
    // * * * *

    // Solution

    int n;
    cout << "\n Enter size of pattern : ";
    cin >> n;
    // loop to print the pattern
    for (int i = 0; i < n; i++)
    {
        // print spaces
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        // print stars
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}