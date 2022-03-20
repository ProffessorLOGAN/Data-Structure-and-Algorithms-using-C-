#include <iostream>
using namespace std;

int main()
{
    int ch;

    cout << "This program contain various types of Arithmetic operation" << endl
         << "1. Addition (+) " << endl
         << "2. Subtraction (-) " << endl
         << "3. Multiplication (*) " << endl
         << "4. Division (/) " << endl
         << "5. Modulus (%) " << endl
         << "Enter the value of Arithmetic operation (1 to 5) : " << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
        int A, B, Sum;
        cout << "Enter the value of A :" << endl;
        cin >> A;
        cout << "Enter the value of B :" << endl;
        cin >> B;
        Sum = A + B;
        cout << "The Addition of A and B is : " << Sum << endl;
        break;
    case 2:
        int x, y, Sub;
        cout << "Enter the value of x :" << endl;
        cin >> x;
        cout << "Enter the value of y :" << endl;
        cin >> y;
        Sub = x - y;
        cout << "The Subtraction of x and y is : " << Sub << endl;
        break;
    case 3:
        int i, j, mul;
        cout << "Enter the value of i :" << endl;
        cin >> i;
        cout << "Enter the value of j :" << endl;
        cin >> j;
        mul = i * j;
        cout << "The Multiplication  of i and j is : " << mul << endl;
        break;
    case 4:
        int l, k, div;
        cout << "Enter the value of l :" << endl;
        cin >> l;
        cout << "Enter the value of k :" << endl;
        cin >> k;
        div = l / k;
        cout << "The Division of l and k is : " << div << endl;
        break;
    case 5:
        int m, n, mod;
        cout << "Enter the value of m :" << endl;
        cin >> m;
        cout << "Enter the value of n :" << endl;
        cin >> n;
        mod = m % n;
        cout << "The Modulus of m and n is : " << mod << endl;
        break;
    default:
        cout << " sahi value de do yaar :) ";
    }

    return 0;
}
