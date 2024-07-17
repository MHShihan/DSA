#include <iostream>
#include <vector>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> newArr;
    for (int i = 0; i < mCols; i++)
    {

        if (i & 1)
        {

            for (int j = nRows - 1; j >= 0; j--)
            {
                newArr.push_back(arr[j][i]);
            }
        }
        else
        {
            for (int j = 0; j < nRows; j++)
            {
                newArr.push_back(arr[j][i]);
            }
        }
    }

    return newArr;
}

int main()
{
    vector<vector<int>> arr = {{1, 11, 111, 1111},
                               {2, 22, 222, 2222},
                               {3, 33, 333, 3333},
                               {4, 44, 444, 4444}};

    vector<int> ans = wavePrint(arr, 4, 4);

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}