// There are two shift operators in C++ programming:

// Right shift operator >>
// Left shift operator <<
// 1. C++ Right Shift Operator
// The right shift operator shifts all bits towards the right by a certain number of specified bits. It is denoted by >>.

// When we shift any number to the right, the least significant bits are discarded, while the most significant bits are replaced by zeroes.
// https://cdn.programiz.com/sites/tutorial2program/files/Right-shift.png
// One bit Right Shift Operator
// One bit Right Shift
// As we can see from the image above, we have a 4-bit number. When we perform a one-bit right shift operation on it, each individual bit is shifted to the right by 1 bit.

// As a result, the right-most bit is discarded, while the left-most bit remains vacant. This vacancy is replaced by a 0.

// 2. C++ Left Shift Operator
// The left shift operator shifts all bits towards the left by a certain number of specified bits. It is denoted by <<.
// https://cdn.programiz.com/sites/tutorial2program/files/left-shift.png
// One bit left shift Operator
// One bit Left Shift
// As we can see from the image above, we have a 4-bit number. When we perform a 1 bit left shift operation on it, each individual bit is shifted to the left by 1 bit.

// As a result, the left-most bit is discarded, while the right-most bit remains vacant. This vacancy is replaced by a 0.

#include <iostream>
using namespace std;

int main()
{

    // declaring two integer variables
    int num = 212, i;

    // Shift Right Operation
    cout << "Shift Right:" << endl;

    // Using for loop for shifting num right from 0 bit to 3 bits
    for (i = 0; i < 4; i++)
    {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }

    // Shift Left Operation
    cout << "\nShift Left:" << endl;

    // Using for loop for shifting num left from 0 bit to 3 bits
    for (i = 0; i < 4; i++)
    {
        cout << "212 << " << i << " = " << (212 << i) << endl;
    }

    return 0;
}
