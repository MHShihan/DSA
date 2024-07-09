#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int getSumOfArray(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += pow(10, n - i - 1) * nums[i];
    }

    return sum;
}

vector<int> getArraySum(int sum)
{
    vector<int> arraySum;

    while (sum != 0)
    {
        int rem = sum % 10;
        arraySum.push_back(rem);
        sum = sum / 10;
    }

    int s = 0, e = arraySum.size() - 1;
    while (s <= e)
    {
        swap(arraySum[s++], arraySum[e--]);
    }

    return arraySum;
}

vector<int> findArraySum(vector<int> &a, vector<int> &b)
{
    int sum1 = getSumOfArray(a);
    int sum2 = getSumOfArray(b);
    int sumOfTwoArray = sum1 + sum2;

    return getArraySum(sumOfTwoArray);
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

    vector<int> v = findArraySum(a, b);

    printArray(v);

    return 0;
}