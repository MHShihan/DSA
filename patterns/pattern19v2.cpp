#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a value: ";
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1, space = n - row;
        // Printing space
        while (space)
        {
            cout << " ";
            space--;
        }

        // printing first (col <= row) triangle
        while (col <= row)
        {
            cout << col++;
        }

        // printing second triangle
        col = row - 1;
        while (col)
        {
            cout << col--;
        }

        cout << endl;
        row++;
    }

    return 0;
}