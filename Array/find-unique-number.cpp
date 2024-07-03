int findUnique(int *arr, int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

#include <iostream>
using namespace std;

int main()
{

    int arr[7] = {1, 7, 3, 4, 1, 3, 7};
    cout << findUnique(arr, 7);
    return 0;
}