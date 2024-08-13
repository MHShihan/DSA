#include <iostream>
using namespace std;

void sort01(int arr[], int size)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        if (arr[left] == 0)
            left++;
        // else if (arr[left] == 1 && arr[right] == 0)
        // {
        //     swap(arr[left], arr[right]);
        //     left++;
        //     right--;
        // }
        else if (arr[right] == 1)
            right--;
        else
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void sort01Method2(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        if (arr[left] == 0)
        {
            left++;
        }
        else
        {
            swap(arr[left], arr[right]);
            right--;
        }
    }
}

void printingArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[14] = {1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1};
    int arr2[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sort01Method2(arr, 14);
    printingArray(arr, 14);

    return 0;
}