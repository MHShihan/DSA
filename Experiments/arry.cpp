#include <iostream>
using namespace std;

void updateArr(int *arr, int n)
{
    arr[0] = 10;
    arr[4] = 10;
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
    int arr[10] = {1, 2, 3, 4, 5};

    updateArr(arr, 5);
    printArray(arr, 5);

    return 0;
}