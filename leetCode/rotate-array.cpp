#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    // 189. Rotate Array
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> temp(n);

        for (int i = 0; i < n; i++)
        {
            temp[(i + k) % n] = nums[i];
        }

        nums = temp;
    }
};