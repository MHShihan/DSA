#include <bits/stdc++.h>
using namespace std;

void solve(string str, int index, string subStr, vector<string> &ans)
{
    // BASE CASE
    if (index >= str.length())
    {
        if (subStr != "")
        {
            ans.push_back(subStr);
        }

        return;
    }

    // EXCLUDE
    solve(str, index + 1, subStr, ans);

    // INCLUDE
    subStr.push_back(str[index]);
    solve(str, index + 1, subStr, ans);
}

vector<string> subsequences(string str)
{
    vector<string> ans;
    string subStr;
    int index = 0;

    solve(str, index, subStr, ans);

    return ans;
}

int main()
{
    string str = "abc";

    vector<string> ans = subsequences(str);

    for (string i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}