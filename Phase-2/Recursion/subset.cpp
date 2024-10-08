#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> &nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // BASE CASE
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // EXCLUDE
    solve(nums, output, index + 1, ans);

    // INCLUDE
    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);

    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "] ";
    }
    cout << endl;

    return 0;
}