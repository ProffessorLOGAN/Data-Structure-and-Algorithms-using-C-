#include <iostream>
using namespace std;

int main()
{

    // declare
    int number[15];

    // accessing an array
    cout << "Value at index" << number[14] << endl;

    // initializing an array
    int arr1[3] = {3, 6, 9};

    // accessing an element
    cout << " Value at 2nd Index" << arr1[2] << endl;

    int arr2[2] = {4, 7};
    int n = 3;

    // print the array

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    // initializing all locations with 0
    int arr4[10] = {0};

    // initializing all locations with 1 [Not possible with below line]
    int arr5[10] = {1};

    return 0;
}