// Q. Find index no of a key in given array using Linear search

#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 10, 12, 15};
    int odd[5] = {5, 7, 9, 11, 17};

    int evenArray = LinearSearch(even, 6, 12);
    cout << "The value of 12 is : " << evenArray << endl;

    int oddArray = LinearSearch(odd, 5, 15);
    cout << "The value of 15 is : " << oddArray << endl;

    return 0;
}
