#include<iostream>
using namespace std;

// Function Prototype
// type function-name(arguments);

// int sum (int a, int b); // --> Acceptable
// int sum(int a, b) // --> Not Acceptable
// int sum(int , int); // -->  Acceptable
// void g(void); // --> Acceptable
// void g(); // --> Acceptable

int sum(int a, int b)
{
    // Here a and b variables are Formal parameters who are taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}

int main()
{
    int num1,num2;
    cout << "Enter the value of a :" << endl;
    cin >> num1;
    cout << "Enter the value of b :" << endl;
    cin >> num2;

    // Here Num1 and num2 are Actual parameters
    cout << "The Sum of a and b is : " << sum(num1,num2);

    return 0;
}

