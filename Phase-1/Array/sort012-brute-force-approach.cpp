#include <iostream>
using namespace std;

void sort012(int arr[], int size)
{
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    for (int i = 0; i < count0; i++)
        arr[i] = 0;
    for (int i = count0; i < count0 + count1; i++)
        arr[i] = 1;
    for (int i = count0 + count1; i < size; i++)
        arr[i] = 2;
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
    int arr[10] = {1, 2, 0, 0, 1, 2, 0, 1, 2, 0};

    sort012(arr, 10);
    printingArray(arr, 10);

    return 0;
}