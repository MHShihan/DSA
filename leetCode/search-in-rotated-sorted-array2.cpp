#include <iostream>
using namespace std;

int getPivotIndex(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return s;
}

int binarySearch(int arr[], int start, int end, int target)
{
    int size = 7;
    int s = start;
    int e = end;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }

        if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int getIndex(int arr[], int pivot, int n, int target)
{
    if (target >= arr[pivot] && target <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, target);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, target);
    }
}

int main()
{

    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int pivot = getPivotIndex(arr, 7);
    int n = 7;
    int target;
    cout << "Enter a target value: ";
    cin >> target;

    cout << "Index: " << getIndex(arr, pivot, n, target);

    return 0;
}