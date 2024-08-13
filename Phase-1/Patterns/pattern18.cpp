#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value: ";
    cin >> n;

    int row = 1;
    int count = 1;

    while (row <= n)
    {
        // int col = 1, space = 1;
        int col = 1, space = n - row;
        while (space > 0)
        {
            cout << " ";
            space--;
        }

        while (col <= row)
        {
            cout << count++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
