#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value: ";
    cin >> n;

    int toPrint = n * n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << toPrint << " ";
            toPrint--;
        }
        cout << endl;
    }

    return 0;
}