#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a value: ";
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // part-1: printing first triangle(1-5)
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j++ << " ";
        }

        // part-2: printing star(*)
        j = 1;
        while (j <= (i - 1) * 2)
        {
            cout << "* ";
            j++;
        }

        // part-3: printing fourth triangle(5-1)
        j = n - i + 1;
        while (j)
        {
            cout << j-- << " ";
        }
        cout << endl;
        i++;
    }

    return 0;
}