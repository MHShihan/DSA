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
        // printing first triangle(1-5)
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j++ << " ";
        }

        // printing second triangle(*)
        j = i - 1;
        while (j)
        {
            cout << "* ";
            j--;
        }

        // printing third triangle(*)
        j = i - 1;
        while (j)
        {
            cout << "* ";
            j--;
        }

        //  printing fourth triangle(5-1)
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