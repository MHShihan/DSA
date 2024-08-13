#include <iostream>
using namespace std;

int firstOccurrenceIndex(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastOccurrenceIndex(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};

    int firstOcc = firstOccurrenceIndex(arr, 8, 2);
    int lastOcc = lastOccurrenceIndex(arr, 8, 2);

    cout << "First occurrence index is: " << firstOcc << endl;
    cout << "Last occurrence index is: " << lastOcc << endl;

    return 0;
}