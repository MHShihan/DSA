#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value: ";
    cin >> n;

    int toPrint = 1;

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            cout << toPrint++ << " ";
            column++;
        }
        cout << endl;
        row++;
    }

    return 0;
}