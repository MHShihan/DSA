#include <bits/stdc++.h>
using namespace std;

int findTotalTappingWater(vector<int> &arr)
{
    int lMax = 0, rMax = 0, total = 0;
    int l = 0, r = arr.size() - 1;

    while (l < r)
    {
        if (arr[l] <= arr[r])
        {
            if (lMax > arr[l])
                total += lMax - arr[l];
            else
                lMax = arr[l];

            l++;
        }
        else
        {
            if (rMax > arr[r])
                total += rMax - arr[r];
            else
                rMax = arr[r];

            r--;
        }
    }
    return total;
}

int main()
{
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << findTotalTappingWater(arr) << endl;
    return 0;
}