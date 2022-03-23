#include<iostream>
using namespace std;

int main()
{
    int i = 0, arr[] = {13, 46, 54, 45};

    do
    {
        cout << "the value of arr[" << i << "] is = " << arr[i] << endl;
        i++;
    } while (i < 4);

    return 0;
}