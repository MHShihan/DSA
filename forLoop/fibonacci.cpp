#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a value: ";
    int n;
    cin >> n;

    int a = 0;
    int b = 1;

    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }

    return 0;
}