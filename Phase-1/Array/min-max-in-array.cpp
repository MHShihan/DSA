#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int maxValue = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        // if (maxValue < arr[i])
        // {
        //     maxValue = arr[i];
        // }

        maxValue = max(maxValue, arr[i]);
    }

    return maxValue;
}

int getMin(int arr[], int size)
{
    int minValue = INT32_MAX;

    for (int i = 0; i < size; i++)
    {
        // if (minValue > arr[i])
        // {
        //     minValue = arr[i];
        // }

        minValue = min(minValue, arr[i]);
    }

    return minValue;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum value: " << getMax(arr, size) << endl;
    cout << "Minimum value: " << getMin(arr, size);

    return 0;
}