#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // BASE CASE
    if (n == 0 || n == 1)
        return;

    // PROCESSING
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    // RECURSIVE CALL
    bubbleSort(arr, n - 1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 3, 8, 9, 4, 6, 2, 5, 7, 10};
    int n = 10;

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}