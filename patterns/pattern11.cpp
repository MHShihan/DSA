#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value: ";
    cin >> n;

    char ch = 'A';

    int i = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            char printCharacter = ch + i - 1;
            cout << char(ch + i - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}