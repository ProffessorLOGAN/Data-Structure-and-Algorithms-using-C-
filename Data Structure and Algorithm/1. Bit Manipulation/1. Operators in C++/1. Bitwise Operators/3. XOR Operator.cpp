#include <iostream>
using namespace std;

int main()
{

    // The bitwise XOR ^ operator returns 1 if and only if one of the operands is 1. However, if both the operands are 0, or if both are 1, then the result is 0.

    // The following truth table demonstrates the working of the bitwise XOR operator. Let a and b be two operands that can only take binary values i.e. 1 or 0.

    // a	b	a ^ b
    // 0	0	0
    // 0	1	1
    // 1	0	1
    // 1	1	0
    // Let us look at the bitwise XOR operation of two integers 12 and 25:

    // 12 = 00001100 (In Binary)
    // 25 = 00011001 (In Binary)

    // Bitwise XOR Operation of 12 and 25
    //     00001100
    // ^   00011001
    //     _________
    //     00010101  = 21 (In decimal)

    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

    return 0;
}