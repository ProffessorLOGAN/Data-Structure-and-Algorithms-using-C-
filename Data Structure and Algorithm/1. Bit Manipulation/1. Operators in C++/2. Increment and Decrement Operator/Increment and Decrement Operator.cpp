// 1. ++ increases the value of the operand by 1
// 2. -- decreases it by 1
// For example,

// int num = 5;

// // increment operator
// ++num;  // 6
// Here, the code ++num; increases the value of num by 1.

// Working of increment and decrement operators

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 100, result_a, result_b;

    // incrementing a by 1 and storing the result in result_a
    result_a = ++a;
    cout << "result_a = " << result_a << endl;

    // decrementing b by 1 and storing the result in result_b
    result_b = --b;
    cout << "result_b = " << result_b << endl;

    return 0;
}

// Output

// result_a = 11
// result_b = 99
// In the above program, we have used the ++ and -- operators as prefixes (++a and --b). However, we can also use these operators as postfix (a++ and b--).