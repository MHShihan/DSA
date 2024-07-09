#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // 1752. Check if Array Is Sorted and Rotated
    bool check(vector<int> &nums)
    {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                count++;
            }
        }

        if (nums[n - 1] > nums[0])
        {
            count++;
        }

        return count <= 1;
    }
};