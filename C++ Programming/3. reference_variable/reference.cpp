#include <iostream>

using namespace std;

int a = 50;

int main()
{

    int a = 10, b = 20;
    cout << "this is value of a:" << a << endl;
    cout << " this is value of b :" << b << endl;
    cout << " this is value of Global variable a " << ::a << endl;

    int sum, sum1;
    sum = a + b;
    sum1 = ::a + b;
    cout << "sum =" << sum << endl;
    cout << "sum1 =" << sum1 << endl;

    int &x = a, y = ::a;
    cout << "the valu of x =" << x << endl;
    cout << "the valu of y =" << y << endl;

    int i = 11;
    float f = 11.11;
    double d = 11.1111;

    cout << "value of integer i = " << i << endl;
    cout << "value of float f = " << f << endl;
    cout << "value of (float)f = " << (float)f << endl;
    cout << "value of float(f) = " << float(f) << endl;
    cout << "\n";
    cout << "value of double d = " << d << endl;
    cout << "value of (float)d = " << (float)d << endl;
    cout << "value of float(d) = " << float(d) << endl;
    cout << "\n";
    cout << "sum of  i + f is :" << i + f << endl;
    cout << "sum of  i + int(f) is :" << i + int(f) << endl;
    cout << "sum of  i + float(d) is :" << i + float(d) << endl;
    cout << "sum of  i + double(f) is :" << i + double(d) << endl;
    cout << "\n";

    cout << "the value of int " << sizeof(int) << endl;
    cout << "the value of float " << sizeof(float) << endl;
    cout << "the value of double " << sizeof(double) << endl;

    return 0;
}