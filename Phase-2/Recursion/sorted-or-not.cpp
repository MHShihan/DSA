#include <iostream>
using namespace std;

// *arr of arr[] --> same work
bool isSorted(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, size - 1);
}

int main()
{
    int arr[5] = {1, 2, 10, 10, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = isSorted(arr, size);

    if (result)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;

    return 0;
}