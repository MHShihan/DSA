#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;

    // Create a temporary array
    vector<int> temp;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
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
    vector<int> arr = {2, 4, 5, 6, 3, 4, 2, 1, 10, 0};

    int low = 0;
    int high = arr.size() - 1;

    mergeSort(arr, low, high);

    // Print sorted array
    for (int i = 0; i <= high; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
