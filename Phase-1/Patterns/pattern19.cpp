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
        int col1 = 1, space = n - row, counter1 = 1;
        // Printing space
        while (space)
        {
            cout << " ";
            space--;
        }

        // printing first (col <= row) triangle
        while (col1 <= row)
        {
            cout << counter1++;
            col1++;
        }

        // printing second triangle (col <= row -1)
        int col2 = 1, counter2 = row - 1;
        while (col2 <= row - 1)
        {
            cout << counter2--;
            col2++;
        }
        cout << endl;
        row++;
    }

    return 0;
}