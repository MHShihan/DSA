#include <iostream>
using namespace std;

// Using for loop
int fib2(int n)
{
    int a = 0;
    int b = 1;

    if (n == 1)
        return 1;

    int nextNumber = 0;

    for (int i = 2; i <= n; i++)
    {
        nextNumber = a + b;
        a = b;
        b = nextNumber;
    }

    return nextNumber;
}

int fib(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter nth number : ";
    cin >> n;

    cout << fib2(n) << endl;
    cout << fib(n) << endl;

    return 0;
}