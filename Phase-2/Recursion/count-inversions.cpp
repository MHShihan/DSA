#include <iostream>
#include <vector>

using namespace std;

int merge(vector<int> &arr, int low, int mid, int high)
{
    int cnt = 0;
    int left = low;
    int right = mid + 1;

    vector<int> temp; // TEMPORARY ARRAY

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
            cnt += (mid - left + 1);
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }

    while (right <= high)
    {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }

    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high)
{
    int cnt = 0;

    if (low >= high) // BASE CASE
        return cnt;

    int mid = low + (high - low) / 2;

    cnt += mergeSort(arr, low, mid);      // RIGHT ARRAY
    cnt += mergeSort(arr, mid + 1, high); // LEFT ARRAY
    cnt += merge(arr, low, mid, high);    // MERGE

    return cnt;
}

int numberOfInversions(vector<int> &a, int n)
{
    return mergeSort(a, 0, n - 1);
}

int main()
{
    vector<int> arr = {4, 3, 2, 1};
    cout << numberOfInversions(arr, arr.size());
    return 0;
}