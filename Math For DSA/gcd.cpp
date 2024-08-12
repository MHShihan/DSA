#include <iostream>
using namespace std;

int gcd(int a, int b)
{

    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
            a = a - b;

        if (b > a)
            b = b - a;
    }
    return a;
}

int gcd1(int a, int b)
{

    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (b != 0)
    {
        int rem = a % b;

        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    cout << "The GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    cout << "The GCD of " << a << " and " << b << " is " << gcd1(a, b) << endl;

    return 0;
}