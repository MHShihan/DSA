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

int main()
{
    int arr[5] = {3, 8, 17, 1, 2};

    int pivotIndex = getPivotIndex(arr, 5);

    cout << "Pivot Index: " << pivotIndex << endl;

    return 0;
}