#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing  Array" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " Print Over" << endl;
}

int main()
{

    int array1[5] = {1, 4, 7, 4, 9};
    printArray(array1, 5);

    return 0;
}