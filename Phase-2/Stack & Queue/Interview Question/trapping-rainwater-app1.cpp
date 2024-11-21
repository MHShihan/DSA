#include <bits/stdc++.h>
using namespace std;

void prefixMax(vector<int> &pMax, vector<int> &arr, int n)
{
    pMax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pMax[i] = max(pMax[i - 1], arr[i]);
    }
}
void suffixMax(vector<int> &sMax, vector<int> &arr, int n)
{
    sMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        sMax[i] = max(sMax[i + 1], arr[i]);
    }
}

int totalUnitOfTrappingWater(vector<int> &arr)
{
    int n = arr.size();
    int total = 0;

    // vector<int> pMax(n);
    vector<int> sMax(n);

    // prefixMax(pMax, arr, n);
    int leftMax = 0;
    suffixMax(sMax, arr, n);

    for (int i = 0; i < n; i++)
    {
        leftMax = max(leftMax, arr[i]);
        int rightMax = sMax[i];

        if (arr[i] < leftMax && arr[i] < rightMax)
        {
            total += min(leftMax, rightMax) - arr[i];
        }
    }
    return total;
}

int main()
{
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << totalUnitOfTrappingWater(arr) << endl;

    return 0;
}