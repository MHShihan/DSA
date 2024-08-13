#include <iostream>
using namespace std;

void getLargestColSum(int arr[][3], int row, int col)
{
    int maxSum = INT8_MIN;
    int colNum = 0;

    for (int i = 0; i < col; i++)
    {
        int sum = 0;

        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            colNum = i;
        }
    }
    cout << "Max Col Sum: " << maxSum << endl;
    cout << "Column Number: " << colNum << endl;
}

void getLargestRowSum(int arr[][3], int row, int col)
{
    int maxSum = INT8_MIN;
    int rowNum = 0;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            rowNum = i;
        }
    }
    cout << "Max Row Sum: " << maxSum << endl;
    cout << "Row Number: " << rowNum << endl;
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    getLargestRowSum(arr, 3, 3);
    getLargestColSum(arr, 3, 3);

    return 0;
}