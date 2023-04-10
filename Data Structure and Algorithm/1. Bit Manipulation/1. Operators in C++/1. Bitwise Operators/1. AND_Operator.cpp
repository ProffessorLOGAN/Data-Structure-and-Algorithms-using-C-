#include <iostream>
using namespace std;

int main()
{
    // AND operator Symbol :- &
    // The bitwise AND & operator returns 1 if and only if both the operands are 1. Otherwise, it returns 0.

    // The following table demonstrates the working of the bitwise AND operator. Let a and b be two operands that can only take binary values i.e. 1 and 0.

    // a	b	a & b
    // 0	0	 0
    // 0	1	 0
    // 1	0	 0
    // 1	1	 1

    // 12 = 00001100 (In Binary)

    // 25 = 00011001 (In Binary)

    // Bitwise AND Operation of 12 and 25

    //      00001100
    // &    00011001
    //      _________
    //      00001000  = 8 (In decimal)

    // declare variables
    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;

    return 0;
}