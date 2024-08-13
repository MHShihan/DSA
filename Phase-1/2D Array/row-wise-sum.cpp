#include <iostream>
using namespace std;

void printColSum(int arr[][3], int row, int col)
{
    cout << "Printing col Sum -> " << endl;
    for (int i = 0; i < col; i++)
    {
        int sum = 0;

        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }

        cout << sum << " ";
    }

    cout << endl;
}

void PrintRowSum(int arr[][3], int row, int col)
{
    cout << "Printing row Sum -> " << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        cout << sum << " ";
    }

    cout << endl;
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

    PrintRowSum(arr, 3, 3);
    printColSum(arr, 3, 3);

    return 0;
}