#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int getMin(int arr[], int size)
{
    int min = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{

    int size;
    cout << "Enter size of an array" << endl;
    cin >> size;

    int arr[100];

    // Taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << " Maximum value is : " << getMax(arr, size) << endl;
    cout << " Minimum value is : " << getMin(arr, size) << endl;

    return 0;
}