#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    // base case
    if (size == 0)
        return false;

    if (arr[0] == key)
        return true;

    return linearSearch(arr + 1, size - 1, key);
}

int main()
{
    int arr[5] = {2, 5, 1, 10, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 100;

    bool result = linearSearch(arr, size, key);

    if (result)
        cout << "Value is present" << endl;

    else
        cout << "Value is not present" << endl;

    return 0;
}