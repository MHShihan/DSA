#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a value: ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = n;
        while (j <= n)
        {
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}