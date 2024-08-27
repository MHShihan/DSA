#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key)
{
    // base case
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    // element found
    if (arr[mid] == key)
        return true;

    if (key > arr[mid])
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[5] = {1, 4, 8, 18, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = size - 1;

    int key = 100;

    bool result = binarySearch(arr, s, e, key);

    if (result)
        cout << "Value is present" << endl;

    else
        cout << "Value is not present" << endl;

    return 0;
}