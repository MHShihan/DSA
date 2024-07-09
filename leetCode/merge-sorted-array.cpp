#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr3)
{
    for (int i : arr3)
    {
        cout << i << " ";
    }
    cout << endl;
}

void merge(vector<int> &arr1, int m, vector<int> &arr2, int n, vector<int> &arr3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // copy the remaining element of first array
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }

    // copy the remaining element of second array
    while (j < n)
    {
        arr3[k++] = arr1[j++];
    }
}

int main()
{

    vector<int> arr1 = {1, 4, 5, 6, 7, 9};
    vector<int> arr2 = {1, 2, 4, 5};
    int m = arr1.size();
    int n = arr2.size();

    vector<int> arr3(m + n, 0);

    merge(arr1, m, arr2, n, arr3);
    printArray(arr3);

    return 0;
}