#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int start = m + 1;
    int end = arr.size() - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printingArray(vector<int> &arr, int n)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();

    reverseArray(arr, 1);
    printingArray(arr, n);

    return 0;
}