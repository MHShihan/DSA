#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int brr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    reverseArray(arr, 10);
    reverseArray(brr, 9);

    printArray(arr, 10);
    printArray(brr, 9);

    return 0;
}