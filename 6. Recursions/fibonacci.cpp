#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{

    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    cout << "\n The fibonacci of " << a << " is =" << fibonacci(a) << endl;
    return 0;
}