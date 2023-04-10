#include <iostream>
using namespace std;

int main()
{

    //    Pattern 22

    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1

    // Solution

    int n;
    cout << "\n Enter size of pattern : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }

        for (int k = 1; k <= i - 1; k++)
        {
            cout << "*";
        }

        for (int m = 1; m <= i - 1; m++)
        {
            cout << "*";
        }
        int count = 1;
        for (int l = 1; l <= n - i + 1; l++)
        {
            cout << count;
            count++;
        }

        cout << "\n";
    }

    return 0;
}