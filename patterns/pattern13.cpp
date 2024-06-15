#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a value: ";
    cin >> n;
    int i = 1;
    char ch = 'A';

    while (i <= n)
    {
        // char ch = 'A' + i - 1;
        int j = 1;
        while (j <= i)
        {
            cout << ch++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}