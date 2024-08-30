#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;

    // Create a temporary array
    int temp[high - low + 1];
    int index = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            temp[index++] = arr[right++];
        }
    }

    while (left <= mid)
    {
        temp[index++] = arr[left++];
    }

    while (right <= high)
    {
        temp[index++] = arr[right++];
    }

    // Copy sorted elements back into original array
    for (int i = 0; i < index; i++)
    {
        arr[low + i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    // Base case
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    // Left array
    mergeSort(arr, low, mid);

    // Right array
    mergeSort(arr, mid + 1, high);

    // Merge 2 arrays
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {2, 4, 5, 6, 3, 4, 2, 1, 10, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = n - 1;

    mergeSort(arr, low, high);

    // Print sorted array
    for (int i = 0; i <= high; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
