#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << " execute using add function with 2 parameter"<<endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << " execute using add function with 3 parameter"<<endl;
    return a + b + c;
}

int main()
{
    cout << "\n sum of 2 no is : " << sum(2, 4);
    cout << "\n sum of 3 no is : " << sum(2, 3, 4);
    return 0;
}