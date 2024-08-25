#include <iostream>
using namespace std;

void fibonacci(int n)
{

    int a = 0;
    int b = 1;

    if (n == 1)
    {
        cout << a << endl;
        return;
    }

    if (n == 2)
    {
        cout << a << " " << b << " " << endl;
    }

    if (n > 2)
    {
        cout << a << " " << b << " ";
    }

    for (int i = 3; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }
}

int main()
{

    cout << "Enter a value: ";
    int n;
    cin >> n;

    fibonacci(n);

    return 0;
}