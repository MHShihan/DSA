#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    vector<vector<int>> temp(n, vector<int>(n, 0));

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            temp[col][n - row - 1] = matrix[row][col];
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            matrix[row][col] = temp[row][col];
        }
    }
}

void print2DArray(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << matrix[row][col] << " ";
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rotate(matrix);
    print2DArray(matrix);

    return 0;
}