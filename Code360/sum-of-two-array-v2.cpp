#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;

    while (s <= e)
    {
        swap(nums[s++], nums[e--]);
    }

    return nums;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;

    int carry = 0;
    vector<int> ans;

    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // Second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // third case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        ans.push_back(sum);
    }

    return reverse(ans);
}

void printArray(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> a = {4, 5, 1};
    vector<int> b = {3, 4, 5};
    int n = a.size();
    int m = b.size();

    vector<int> v = findArraySum(a, n, b, m);

    printArray(v);

    return 0;
}