#include <iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[high]);
            high--;
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
    int arr[10] = {0, 1, 2, 0, 1, 2, 0, 1, 2, 0};

    sort012(arr, 10);
    printingArray(arr, 10);

    return 0;
}