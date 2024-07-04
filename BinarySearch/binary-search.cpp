#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int even[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int odd[5] = {1, 3, 5, 7, 9};

    int index1 = binarySearch(even, 10, 18);
    int index2 = binarySearch(odd, 5, 9);
    cout << "Index1: " << index1 << endl;
    cout << "Index2: " << index2 << endl;

    return 0;
}