#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value: ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1, space = 1;
        while (space < row)
        {
            cout << " ";
            space++;
        }

        while (col <= n - row + 1)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
