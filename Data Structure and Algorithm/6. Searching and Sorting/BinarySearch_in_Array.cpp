#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
    }

    // goto right side of array part
    if (key > arr[mid])
    {
        start = mid + 1;
    }
    else
    { // key < arr[mid]
        end = mid - 1;
    }
    return -1;
}

int main()
{

    int even[10] = {2, 4, 6, 10, 12, 15, 21, 27, 31, 35};

    int evenArray = binarySearch(even, 10, 12);
    cout << "The value of 12 is : " << evenArray << endl;

    return 0;
}