#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    // Checking next step is safe or not
    bool isSafe(vector<vector<int>> mat, int n, int x, int y, vector<vector<int>> visited)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && mat[x][y] == 1 && visited[x][y] == 0)
        {
            return true;
        }

        return false;
    }

    void solve(vector<vector<int>> mat, int n, int x, int y, vector<vector<int>> visited,
               vector<string> &ans, string path)
    {
        //   BASE CASE
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // DOWN
        int newx = x + 1;
        int newy = y;
        if (isSafe(mat, n, newx, newy, visited))
        {
            path.push_back('D');
            solve(mat, n, newx, newy, visited, ans, path);
            path.pop_back();
        }

        // RIGHT
        newx = x;
        newy = y + 1;
        if (isSafe(mat, n, newx, newy, visited))
        {
            path.push_back('R');
            solve(mat, n, newx, newy, visited, ans, path);
            path.pop_back();
        }

        // LEFT
        newx = x;
        newy = y - 1;
        if (isSafe(mat, n, newx, newy, visited))
        {
            path.push_back('L');
            solve(mat, n, newx, newy, visited, ans, path);
            path.pop_back();
        }

        // UP
        newx = x - 1;
        newy = y;
        if (isSafe(mat, n, newx, newy, visited))
        {
            path.push_back('U');
            solve(mat, n, newx, newy, visited, ans, path);
            path.pop_back();
        }

        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &mat)
    {
        vector<string> ans;

        if (mat[0][0] == 0)
            return ans;

        int srcx = 0;
        int srcy = 0;
        int n = mat.size();

        string path = "";

        // CREATE A VISITED ARRAY INISIALIZE WITH 0
        vector<vector<int>> visited = mat;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        solve(mat, n, srcx, srcy, visited, ans, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};